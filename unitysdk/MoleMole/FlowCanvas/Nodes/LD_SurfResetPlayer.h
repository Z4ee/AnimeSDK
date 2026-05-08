#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRESETPLAYER_INVOKE_OFFSET UNITYSDK_OFFSET(0x15423360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRESETPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x15423420)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfResetPlayer_TypeDefinitionIndex = 56941;

	class LD_SurfResetPlayer : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRESETPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRESETPLAYER_INVOKE_OFFSET))(this);
		}
	};
}
