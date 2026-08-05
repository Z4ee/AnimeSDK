#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0D3D50)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF0D3D90)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xF0D3DA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_WaitingSlotUseTask___c_TypeDefinitionIndex = 42070;

	class RegistrationInfo_ScriptStruct_WaitingSlotUseTask___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_WaitingSlotUseTask___c** StaticGet___9()
		{
			return (::NPCCrowd::Ability::RegistrationInfo_ScriptStruct_WaitingSlotUseTask___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_WaitingSlotUseTask___c_TypeDefinitionIndex)->GetStaticField(0x4DC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_WAITINGSLOTUSETASK___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
