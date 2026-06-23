#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_REACTIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x109F7020)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_REACTIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F6EB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_ReactionTask_TypeDefinitionIndex = 41123;

	class RegistrationInfo_ScriptStruct_ReactionTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_ReactionTask_TypeDefinitionIndex)->GetStaticField(0x3A9C0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_ReactionTask_TypeDefinitionIndex)->GetStaticField(0x3A9C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_REACTIONTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_REACTIONTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
