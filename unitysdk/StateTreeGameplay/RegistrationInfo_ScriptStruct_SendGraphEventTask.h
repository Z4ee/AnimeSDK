#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DA4C450)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA4C2E0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_SendGraphEventTask_TypeDefinitionIndex = 56533;

	class RegistrationInfo_ScriptStruct_SendGraphEventTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTask_TypeDefinitionIndex)->GetStaticField(0x457D0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTask_TypeDefinitionIndex)->GetStaticField(0x457D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
