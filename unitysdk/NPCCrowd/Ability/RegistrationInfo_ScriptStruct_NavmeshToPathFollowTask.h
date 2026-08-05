#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_NAVMESHTOPATHFOLLOWTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10641A50)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_NAVMESHTOPATHFOLLOWTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x106418E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_NavmeshToPathFollowTask_TypeDefinitionIndex = 63390;

	class RegistrationInfo_ScriptStruct_NavmeshToPathFollowTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_NavmeshToPathFollowTask_TypeDefinitionIndex)->GetStaticField(0x494E0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_NavmeshToPathFollowTask_TypeDefinitionIndex)->GetStaticField(0x494E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_NAVMESHTOPATHFOLLOWTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_NAVMESHTOPATHFOLLOWTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
