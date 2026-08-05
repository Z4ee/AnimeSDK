#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x144D5C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x144D5DA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetSuccessiveLevelPhase_TypeDefinitionIndex = 78670;

	class LD_SetSuccessiveLevelPhase : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 currentPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE_INVOKE_OFFSET))(this, currentPhase);
		}
	};
}
