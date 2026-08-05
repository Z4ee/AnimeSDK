#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E381CC0)
#define FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E381D00)
#define FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E381D10)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FGameplayTag___c_TypeDefinitionIndex = 28271;

	class RegistrationInfo_ScriptStruct_FGameplayTag___c : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::RegistrationInfo_ScriptStruct_FGameplayTag___c** StaticGet___9()
		{
			return (::Foundation::Unreal::RegistrationInfo_ScriptStruct_FGameplayTag___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGameplayTag___c_TypeDefinitionIndex)->GetStaticField(0x23EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_REGISTRATIONINFO_SCRIPTSTRUCT_FGAMEPLAYTAG___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
