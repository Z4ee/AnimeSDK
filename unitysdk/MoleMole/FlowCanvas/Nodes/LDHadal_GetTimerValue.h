#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13001900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x13001A90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_GetTimerValue_TypeDefinitionIndex = 48727;

	class LDHadal_GetTimerValue : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_GETTIMERVALUE_INVOKE_OFFSET))(this, key);
		}
	};
}
