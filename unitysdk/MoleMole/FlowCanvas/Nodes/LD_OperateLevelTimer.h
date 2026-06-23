#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E6DDDFA618D1C311.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x15127300)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x15127380)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_OperateLevelTimer_TypeDefinitionIndex = 80885;

	class LD_OperateLevelTimer : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::String*, ::Enum_3_E6DDDFA618D1C311, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::Enum_3_E6DDDFA618D1C311 opCode, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_E6DDDFA618D1C311, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATELEVELTIMER_INVOKE_OFFSET))(this, timerKey, opCode, value);
		}
	};
}
