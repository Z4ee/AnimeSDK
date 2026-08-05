#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x19081210)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x190812A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnableAvatar_TypeDefinitionIndex = 84070;

	class LD_EnableAvatar : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR_INVOKE_OFFSET))(this, isEnable);
		}
	};
}
