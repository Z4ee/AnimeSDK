#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF76ABA0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xF76AA20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_MoveToTask_TypeDefinitionIndex = 50851;

	class RegistrationInfo_ScriptStruct_MoveToTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToTask_TypeDefinitionIndex)->GetStaticField(0x49440);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToTask_TypeDefinitionIndex)->GetStaticField(0x49448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
