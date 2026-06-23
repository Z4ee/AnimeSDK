#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EB1770)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB17B0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x11EB17C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData___c_TypeDefinitionIndex = 80613;

	class RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_GetActorPositionTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x4C3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__5_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_GETACTORPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_0_OFFSET))(this);
		}
	};
}
