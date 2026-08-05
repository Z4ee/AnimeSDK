#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x13DE7760)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DE7620)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex = 49290;

	class RegistrationInfo_ScriptStruct_PlayerAvatarDistanceConditionInstanceData : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3ABF0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0x3ABF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
