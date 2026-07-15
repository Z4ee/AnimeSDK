#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EE6E337F1B650C03.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_5C88C1E749A908F4_METHOD_3_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x188D1500)
#define CLASS_3_5C88C1E749A908F4_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x188D1430)
#define CLASS_3_5C88C1E749A908F4_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x188D1480)
#define CLASS_3_5C88C1E749A908F4__CTOR_OFFSET UNITYSDK_OFFSET(0x188D1560)

inline static constexpr unsigned int Class_3_5C88C1E749A908F4_TypeDefinitionIndex = 73098;

class Class_3_5C88C1E749A908F4 : public ::Class_2_EE6E337F1B650C03
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C88C1E749A908F4__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C88C1E749A908F4_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5C88C1E749A908F4_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5C88C1E749A908F4_METHOD_3_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}
};
