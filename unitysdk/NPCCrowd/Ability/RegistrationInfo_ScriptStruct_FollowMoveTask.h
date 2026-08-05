#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1127AB00)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1127A990)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FollowMoveTask_TypeDefinitionIndex = 54588;

	class RegistrationInfo_ScriptStruct_FollowMoveTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x4C7E0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x4C7E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FOLLOWMOVETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
