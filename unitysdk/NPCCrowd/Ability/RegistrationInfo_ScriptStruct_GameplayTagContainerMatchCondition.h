#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10297F20)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x10297DB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GameplayTagContainerMatchCondition_TypeDefinitionIndex = 52378;

	class RegistrationInfo_ScriptStruct_GameplayTagContainerMatchCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GameplayTagContainerMatchCondition_TypeDefinitionIndex)->GetStaticField(0x33990);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GameplayTagContainerMatchCondition_TypeDefinitionIndex)->GetStaticField(0x33998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
