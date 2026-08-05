#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1127A7C0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1127A650)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask_TypeDefinitionIndex = 40667;

	class RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0x47570);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0x47578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
