#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19125F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19125FF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelTimerValue_TypeDefinitionIndex = 51383;

	class LD_GetLevelTimerValue : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* timerKey)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERVALUE_INVOKE_OFFSET))(this, timerKey);
		}
	};
}
