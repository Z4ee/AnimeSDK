#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A1F98E518DBB516.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_048793D1B09D63A1_METHOD_3_08C9DDD8730AF484_OFFSET UNITYSDK_OFFSET(0x161A62F0)
#define CLASS_3_048793D1B09D63A1_METHOD_3_09AED3C7BF18C4B1_OFFSET UNITYSDK_OFFSET(0x161A6070)
#define CLASS_3_048793D1B09D63A1_METHOD_3_57FC422C238CCA4F_OFFSET UNITYSDK_OFFSET(0x161A6340)
#define CLASS_3_048793D1B09D63A1_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x161A6020)
#define CLASS_3_048793D1B09D63A1__CTOR_OFFSET UNITYSDK_OFFSET(0x161A6B30)

inline static constexpr unsigned int Class_3_048793D1B09D63A1_TypeDefinitionIndex = 76560;

class Class_3_048793D1B09D63A1 : public ::Class_2_6A1F98E518DBB516
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_09AED3C7BF18C4B1(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_09AED3C7BF18C4B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_08C9DDD8730AF484(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_08C9DDD8730AF484_OFFSET))(this, a1);
	}

	::System::Void Method_3_57FC422C238CCA4F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_57FC422C238CCA4F_OFFSET))(this, a1);
	}
};
