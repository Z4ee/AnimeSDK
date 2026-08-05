#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB952D0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB95310)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CB95320)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PlayAnimationTask___c_TypeDefinitionIndex = 47643;

	class RegistrationInfo_ScriptStruct_PlayAnimationTask___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_PlayAnimationTask___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_PlayAnimationTask___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PlayAnimationTask___c_TypeDefinitionIndex)->GetStaticField(0x3B300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_PLAYANIMATIONTASK___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
