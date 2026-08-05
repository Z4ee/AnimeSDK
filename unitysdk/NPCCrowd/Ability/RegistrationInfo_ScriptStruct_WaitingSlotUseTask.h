#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x13DE79C0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DE7850)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_WaitingSlotUseTask_TypeDefinitionIndex = 42069;

	class RegistrationInfo_ScriptStruct_WaitingSlotUseTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_WaitingSlotUseTask_TypeDefinitionIndex)->GetStaticField(0x4DC40);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_WaitingSlotUseTask_TypeDefinitionIndex)->GetStaticField(0x4DC48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
