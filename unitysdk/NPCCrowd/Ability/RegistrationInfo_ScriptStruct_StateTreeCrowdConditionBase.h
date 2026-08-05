#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDCONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF860610)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDCONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF8604A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeCrowdConditionBase_TypeDefinitionIndex = 63713;

	class RegistrationInfo_ScriptStruct_StateTreeCrowdConditionBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCrowdConditionBase_TypeDefinitionIndex)->GetStaticField(0x33970);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCrowdConditionBase_TypeDefinitionIndex)->GetStaticField(0x33978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDCONDITIONBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDCONDITIONBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
