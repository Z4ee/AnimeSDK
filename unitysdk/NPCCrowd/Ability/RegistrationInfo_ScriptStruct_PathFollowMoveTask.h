#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWMOVETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x952D190)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWMOVETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x952D020)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PathFollowMoveTask_TypeDefinitionIndex = 67565;

	class RegistrationInfo_ScriptStruct_PathFollowMoveTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PathFollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x4B200);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PathFollowMoveTask_TypeDefinitionIndex)->GetStaticField(0x4B208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWMOVETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PATHFOLLOWMOVETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
