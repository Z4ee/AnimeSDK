#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98C5C40D787ACB09.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_178F20AF965F3921_METHOD_3_0A9EAEAE6504BEAA_OFFSET UNITYSDK_OFFSET(0xDAB9A60)
#define CLASS_3_178F20AF965F3921_METHOD_3_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xDAB9C60)
#define CLASS_3_178F20AF965F3921_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0xDAB9DD0)
#define CLASS_3_178F20AF965F3921_METHOD_3_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0xDAB9AF0)
#define CLASS_3_178F20AF965F3921__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB9E20)

inline static constexpr unsigned int Class_3_178F20AF965F3921_TypeDefinitionIndex = 76571;

class Class_3_178F20AF965F3921 : public ::Class_2_98C5C40D787ACB09
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_178F20AF965F3921__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0A9EAEAE6504BEAA(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_178F20AF965F3921_METHOD_3_0A9EAEAE6504BEAA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_178F20AF965F3921_METHOD_3_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_3_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_178F20AF965F3921_METHOD_3_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_178F20AF965F3921_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
