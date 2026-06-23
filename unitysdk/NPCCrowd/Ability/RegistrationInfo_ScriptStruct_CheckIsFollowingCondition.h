#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITION_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD5C36F0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C3580)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CheckIsFollowingCondition_TypeDefinitionIndex = 74818;

	class RegistrationInfo_ScriptStruct_CheckIsFollowingCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CheckIsFollowingCondition_TypeDefinitionIndex)->GetStaticField(0x3F800);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CheckIsFollowingCondition_TypeDefinitionIndex)->GetStaticField(0x3F808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITION_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
