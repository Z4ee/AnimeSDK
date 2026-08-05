#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134588E0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13458920)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x13458930)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeActorConditionBase___c_TypeDefinitionIndex = 49042;

	class RegistrationInfo_ScriptStruct_StateTreeActorConditionBase___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_StateTreeActorConditionBase___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_StateTreeActorConditionBase___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeActorConditionBase___c_TypeDefinitionIndex)->GetStaticField(0x3DCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEACTORCONDITIONBASE___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
