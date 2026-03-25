#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_D643442D6075675C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8AF8420)
#define CLASS_2_D643442D6075675C_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x8AF8340)
#define CLASS_2_D643442D6075675C_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x8AF80A0)
#define CLASS_2_D643442D6075675C_METHOD_2_C5D6E8AA4E544A4E_OFFSET UNITYSDK_OFFSET(0x8AF80B0)
#define CLASS_2_D643442D6075675C__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF8090)

inline static constexpr unsigned int Class_2_D643442D6075675C_TypeDefinitionIndex = 61584;

class Class_2_D643442D6075675C : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D643442D6075675C__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D643442D6075675C_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_C5D6E8AA4E544A4E(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_D643442D6075675C_METHOD_2_C5D6E8AA4E544A4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D643442D6075675C_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D643442D6075675C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
