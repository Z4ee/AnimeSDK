#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_GETTIMERVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13697880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_GETTIMERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x13697A20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSmashBro_GetTimerValue_TypeDefinitionIndex = 46544;

	class LDSmashBro_GetTimerValue : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_GETTIMERVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_GETTIMERVALUE_INVOKE_OFFSET))(this, key);
		}
	};
}
