#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_UIBUBBLEPERFORMTASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x8C2A710)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_UIBUBBLEPERFORMTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C2A5A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_UIBubblePerformTask_TypeDefinitionIndex = 59397;

	class RegistrationInfo_ScriptStruct_UIBubblePerformTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UIBubblePerformTask_TypeDefinitionIndex)->GetStaticField(0x31870);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UIBubblePerformTask_TypeDefinitionIndex)->GetStaticField(0x31878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_UIBUBBLEPERFORMTASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_UIBUBBLEPERFORMTASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
