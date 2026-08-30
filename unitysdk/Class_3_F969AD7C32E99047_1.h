#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_067020680B7E25C9.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

class Class_1_A80764A8DE475761;

#define CLASS_3_F969AD7C32E99047_1_METHOD_3_2ABF511660768418_OFFSET UNITYSDK_OFFSET(0x157DF0D0)
#define CLASS_3_F969AD7C32E99047_1_METHOD_3_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x157DF270)
#define CLASS_3_F969AD7C32E99047_1_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x157DF1B0)
#define CLASS_3_F969AD7C32E99047_1_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x157DF300)
#define CLASS_3_F969AD7C32E99047_1_METHOD_3_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x157DEFF0)
#define CLASS_3_F969AD7C32E99047_1__CTOR_OFFSET UNITYSDK_OFFSET(0x157DF350)

inline static constexpr unsigned int Class_3_F969AD7C32E99047_1_TypeDefinitionIndex = 76558;

class Class_3_F969AD7C32E99047_1 : public ::Class_2_067020680B7E25C9
{
public:
	::System::Single FLHOEGBFPJB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F969AD7C32E99047_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CFC95121222309BD(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_3_F969AD7C32E99047_1_METHOD_3_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_2ABF511660768418(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_F969AD7C32E99047_1_METHOD_3_2ABF511660768418_OFFSET))(this, a1);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F969AD7C32E99047_1_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F969AD7C32E99047_1_METHOD_3_455E250D679F9642_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F969AD7C32E99047_1_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
