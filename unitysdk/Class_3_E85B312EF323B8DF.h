#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_48D5573CEBA360F7.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_E85B312EF323B8DF_METHOD_3_314529EC8BCA8BB3_OFFSET UNITYSDK_OFFSET(0x16B12FA0)
#define CLASS_3_E85B312EF323B8DF_METHOD_3_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x16B13010)
#define CLASS_3_E85B312EF323B8DF_METHOD_3_91A7D0E79106DA94_OFFSET UNITYSDK_OFFSET(0x16B12DC0)
#define CLASS_3_E85B312EF323B8DF_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x16B13420)
#define CLASS_3_E85B312EF323B8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x16B13470)

inline static constexpr unsigned int Class_3_E85B312EF323B8DF_TypeDefinitionIndex = 76556;

class Class_3_E85B312EF323B8DF : public ::Class_2_48D5573CEBA360F7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E85B312EF323B8DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_91A7D0E79106DA94(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_E85B312EF323B8DF_METHOD_3_91A7D0E79106DA94_OFFSET))(this, a1);
	}

	::System::Void Method_3_314529EC8BCA8BB3(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_E85B312EF323B8DF_METHOD_3_314529EC8BCA8BB3_OFFSET))(this, a1);
	}

	::System::Void Method_3_58D68FEBA7B5A778(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E85B312EF323B8DF_METHOD_3_58D68FEBA7B5A778_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E85B312EF323B8DF_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
