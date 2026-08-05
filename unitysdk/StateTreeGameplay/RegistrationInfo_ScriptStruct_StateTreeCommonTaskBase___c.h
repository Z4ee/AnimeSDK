#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB95570)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB955B0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CB955C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase___c_TypeDefinitionIndex = 53399;

	class RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeCommonTaskBase___c_TypeDefinitionIndex)->GetStaticField(0x34120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECOMMONTASKBASE___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
