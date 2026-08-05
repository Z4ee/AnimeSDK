#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC67760)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_SENDGRAPHEVENTTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC675F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_SendGraphEventTask_TypeDefinitionIndex = 84418;

	class RegistrationInfo_ScriptStruct_SendGraphEventTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTask_TypeDefinitionIndex)->GetStaticField(0x49820);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_SendGraphEventTask_TypeDefinitionIndex)->GetStaticField(0x49828);
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
