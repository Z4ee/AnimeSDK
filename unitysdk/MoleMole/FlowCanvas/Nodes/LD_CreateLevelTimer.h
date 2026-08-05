#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A379C315D4CDE438.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_4.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B1610)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B16A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateLevelTimer_TypeDefinitionIndex = 73442;

	class LD_CreateLevelTimer : public ::FlowCanvas::Nodes::CallableActionNode_4<::System::String*, ::Enum_3_A379C315D4CDE438, ::System::Single, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::Enum_3_A379C315D4CDE438 timerType, ::System::Single timerDuration, ::System::Boolean autoDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_A379C315D4CDE438, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELTIMER_INVOKE_OFFSET))(this, timerKey, timerType, timerDuration, autoDestroy);
		}
	};
}
