#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x157AB620)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x157AB4A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DelayTask_TypeDefinitionIndex = 50265;

	class RegistrationInfo_ScriptStruct_DelayTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelayTask_TypeDefinitionIndex)->GetStaticField(0x3ABB0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DelayTask_TypeDefinitionIndex)->GetStaticField(0x3ABB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DELAYTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
