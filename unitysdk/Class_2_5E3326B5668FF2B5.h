#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_2_186E1A971CE5B9E2;

#define CLASS_2_5E3326B5668FF2B5_METHOD_2_120A4C54A6978364_OFFSET UNITYSDK_OFFSET(0x12AF9300)
#define CLASS_2_5E3326B5668FF2B5_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12AF9110)
#define CLASS_2_5E3326B5668FF2B5_METHOD_2_4C8EE861E9033C4D_OFFSET UNITYSDK_OFFSET(0x12AF91E0)
#define CLASS_2_5E3326B5668FF2B5_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12AF9420)
#define CLASS_2_5E3326B5668FF2B5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12AF93C0)
#define CLASS_2_5E3326B5668FF2B5_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12AF9060)
#define CLASS_2_5E3326B5668FF2B5__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF93B0)

inline static constexpr unsigned int Class_2_5E3326B5668FF2B5_TypeDefinitionIndex = 49727;

class Class_2_5E3326B5668FF2B5 : public ::Class_1_321489CFFF7B18E7
{
public:
	::Class_2_186E1A971CE5B9E2* Field_2_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtCharacterState>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_4C8EE861E9033C4D(::Il2CppArray<::RPG::GameCore::RtCharacterState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtCharacterState>*))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5_METHOD_2_4C8EE861E9033C4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_120A4C54A6978364(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5_METHOD_2_120A4C54A6978364_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3326B5668FF2B5_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
