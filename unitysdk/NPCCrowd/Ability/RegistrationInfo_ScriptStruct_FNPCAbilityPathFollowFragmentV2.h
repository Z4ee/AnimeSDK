#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD8881E0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET UNITYSDK_OFFSET(0xD888020)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex = 83122;

	class RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2 : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x4B1B0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x4B1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
