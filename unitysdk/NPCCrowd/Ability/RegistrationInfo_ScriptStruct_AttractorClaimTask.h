#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORCLAIMTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x12604100)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORCLAIMTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x12603F90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AttractorClaimTask_TypeDefinitionIndex = 79927;

	class RegistrationInfo_ScriptStruct_AttractorClaimTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorClaimTask_TypeDefinitionIndex)->GetStaticField(0x43180);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorClaimTask_TypeDefinitionIndex)->GetStaticField(0x43188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORCLAIMTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORCLAIMTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
