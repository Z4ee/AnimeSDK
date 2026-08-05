#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A686800)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A686690)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase_TypeDefinitionIndex = 53398;

	class RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase_TypeDefinitionIndex)->GetStaticField(0x340F0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase_TypeDefinitionIndex)->GetStaticField(0x340F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
