#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1261A240)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1261A370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetBattlePlayType_TypeDefinitionIndex = 58921;

	class LD_GetBattlePlayType : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE_INVOKE_OFFSET))(this);
		}
	};
}
