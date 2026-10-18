#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A1F98E518DBB516.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_048793D1B09D63A1_METHOD_3_08C9DDD8730AF484_OFFSET UNITYSDK_OFFSET(0x16510660)
#define CLASS_3_048793D1B09D63A1_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x16510440)
#define CLASS_3_048793D1B09D63A1_METHOD_3_E2374908D4C1015C_OFFSET UNITYSDK_OFFSET(0x16510490)
#define CLASS_3_048793D1B09D63A1_METHOD_3_F762974E778A9B95_OFFSET UNITYSDK_OFFSET(0x165106B0)
#define CLASS_3_048793D1B09D63A1__CTOR_OFFSET UNITYSDK_OFFSET(0x16510DE0)

inline static constexpr unsigned int Class_3_048793D1B09D63A1_TypeDefinitionIndex = 77030;

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

	::System::Void Method_3_E2374908D4C1015C(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_E2374908D4C1015C_OFFSET))(this, a1);
	}

	::System::Void Method_3_08C9DDD8730AF484(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_08C9DDD8730AF484_OFFSET))(this, a1);
	}

	::System::Void Method_3_F762974E778A9B95(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_048793D1B09D63A1_METHOD_3_F762974E778A9B95_OFFSET))(this, a1);
	}
};
