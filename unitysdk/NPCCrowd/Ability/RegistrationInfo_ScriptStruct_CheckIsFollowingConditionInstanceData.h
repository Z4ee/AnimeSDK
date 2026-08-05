#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x157AB490)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x157AB350)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CheckIsFollowingConditionInstanceData_TypeDefinitionIndex = 54293;

	class RegistrationInfo_ScriptStruct_CheckIsFollowingConditionInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CheckIsFollowingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x475D0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CheckIsFollowingConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x475D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CHECKISFOLLOWINGCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
