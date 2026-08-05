#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1127AEF0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1127ADB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PathFollowIgnoreBlockConditionInstanceData_TypeDefinitionIndex = 54547;

	class RegistrationInfo_ScriptStruct_PathFollowIgnoreBlockConditionInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PathFollowIgnoreBlockConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x501C0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PathFollowIgnoreBlockConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x501C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
