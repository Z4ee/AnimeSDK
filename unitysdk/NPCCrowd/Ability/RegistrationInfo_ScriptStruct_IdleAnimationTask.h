#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_IDLEANIMATIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD5C3F10)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_IDLEANIMATIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C3DA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_IdleAnimationTask_TypeDefinitionIndex = 57840;

	class RegistrationInfo_ScriptStruct_IdleAnimationTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_IdleAnimationTask_TypeDefinitionIndex)->GetStaticField(0x48AE0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_IdleAnimationTask_TypeDefinitionIndex)->GetStaticField(0x48AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_IDLEANIMATIONTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_IDLEANIMATIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
