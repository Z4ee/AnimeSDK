#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDTASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x109F71A0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F7030)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeCrowdTaskBase_TypeDefinitionIndex = 45442;

	class RegistrationInfo_ScriptStruct_StateTreeCrowdTaskBase : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCrowdTaskBase_TypeDefinitionIndex)->GetStaticField(0x31770);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCrowdTaskBase_TypeDefinitionIndex)->GetStaticField(0x31778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDTASKBASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECROWDTASKBASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
