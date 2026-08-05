#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS_INVOKE_OFFSET UNITYSDK_OFFSET(0x129A03B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x129A0400)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TriggerLevelCustomConditions_TypeDefinitionIndex = 69335;

	class LD_TriggerLevelCustomConditions : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 LevelConditionsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS_INVOKE_OFFSET))(this, LevelConditionsID);
		}
	};
}
