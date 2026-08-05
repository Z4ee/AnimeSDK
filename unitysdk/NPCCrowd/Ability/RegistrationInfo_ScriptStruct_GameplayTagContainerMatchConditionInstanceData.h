#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF0D39F0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0D38B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData_TypeDefinitionIndex = 42197;

	class RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3D7E0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GameplayTagContainerMatchConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3D7E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_GAMEPLAYTAGCONTAINERMATCHCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
