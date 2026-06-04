#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_2_186E1A971CE5B9E2;

#define CLASS_2_D78EA95E9BE87077_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA5018C0)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_32852234F6DC8F3A_OFFSET UNITYSDK_OFFSET(0xA501990)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA501C70)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA501C10)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_CD48043A7554ED8C_OFFSET UNITYSDK_OFFSET(0xA501B00)
#define CLASS_2_D78EA95E9BE87077_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA501810)
#define CLASS_2_D78EA95E9BE87077__CTOR_OFFSET UNITYSDK_OFFSET(0xA501C00)

inline static constexpr unsigned int Class_2_D78EA95E9BE87077_TypeDefinitionIndex = 50394;

class Class_2_D78EA95E9BE87077 : public ::Class_1_321489CFFF7B18E7
{
public:
	::Il2CppArray<::RPG::GameCore::RtCharacterState>* Field_2_0; // 0x18
	::Class_2_186E1A971CE5B9E2* Field_2_1; // 0x20

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

	::System::Void Method_2_32852234F6DC8F3A(::Il2CppArray<::RPG::GameCore::RtCharacterState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtCharacterState>*))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_32852234F6DC8F3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD48043A7554ED8C(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_CD48043A7554ED8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D78EA95E9BE87077_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
