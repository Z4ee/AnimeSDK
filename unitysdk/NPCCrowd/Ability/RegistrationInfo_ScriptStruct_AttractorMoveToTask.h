#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORMOVETOTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10C91940)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORMOVETOTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C917D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_AttractorMoveToTask_TypeDefinitionIndex = 72924;

	class RegistrationInfo_ScriptStruct_AttractorMoveToTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorMoveToTask_TypeDefinitionIndex)->GetStaticField(0x3AB70);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_AttractorMoveToTask_TypeDefinitionIndex)->GetStaticField(0x3AB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORMOVETOTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_ATTRACTORMOVETOTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
