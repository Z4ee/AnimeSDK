#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_57578741329DF018.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_2_186E1A971CE5B9E2;

#define CLASS_2_D78EA95E9BE87077_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16CD6150)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_65C4DAE6A84F7695_OFFSET UNITYSDK_OFFSET(0x16CD6220)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_CD48043A7554ED8C_OFFSET UNITYSDK_OFFSET(0x16CD6330)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16CD6090)
#define CLASS_2_D78EA95E9BE87077__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD6430)

inline static constexpr unsigned int Class_2_D78EA95E9BE87077_TypeDefinitionIndex = 54160;

class Class_2_D78EA95E9BE87077 : public ::Class_1_57578741329DF018
{
public:
	::Class_2_186E1A971CE5B9E2* MKKEEJFKIPH; // 0x18
	::Il2CppArray<::RPG::GameCore::RtCharacterState>* LOOAFCNNHFM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_65C4DAE6A84F7695(::Il2CppArray<::RPG::GameCore::RtCharacterState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtCharacterState>*))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_65C4DAE6A84F7695_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD48043A7554ED8C(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_CD48043A7554ED8C_OFFSET))(this, a1, a2);
	}
};
