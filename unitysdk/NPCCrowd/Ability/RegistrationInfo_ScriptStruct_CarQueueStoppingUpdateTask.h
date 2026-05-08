#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF84F400)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_CARQUEUESTOPPINGUPDATETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xF84F290)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask_TypeDefinitionIndex = 43846;

	class RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0x40C40);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CarQueueStoppingUpdateTask_TypeDefinitionIndex)->GetStaticField(0x40C48);
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
