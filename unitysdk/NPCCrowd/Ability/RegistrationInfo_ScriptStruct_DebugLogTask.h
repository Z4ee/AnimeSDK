#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE5599D0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xE559860)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_DebugLogTask_TypeDefinitionIndex = 48186;

	class RegistrationInfo_ScriptStruct_DebugLogTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogTask_TypeDefinitionIndex)->GetStaticField(0x375F0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_DebugLogTask_TypeDefinitionIndex)->GetStaticField(0x375F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_DEBUGLOGTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
