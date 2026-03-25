#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_383AA0A44EC42B26.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_743160E372D8CCAE_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x110C5870)
#define CLASS_3_743160E372D8CCAE_METHOD_3_ACF71EF354897043_OFFSET UNITYSDK_OFFSET(0x110C58E0)
#define CLASS_3_743160E372D8CCAE_METHOD_3_C422DE9CC617B43A_OFFSET UNITYSDK_OFFSET(0x110C4D10)
#define CLASS_3_743160E372D8CCAE__CTOR_OFFSET UNITYSDK_OFFSET(0x110C58C0)

inline static constexpr unsigned int Class_3_743160E372D8CCAE_TypeDefinitionIndex = 62723;

class Class_3_743160E372D8CCAE : public ::Class_2_383AA0A44EC42B26
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_743160E372D8CCAE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_C422DE9CC617B43A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_743160E372D8CCAE_METHOD_3_C422DE9CC617B43A_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_743160E372D8CCAE_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_ACF71EF354897043(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_743160E372D8CCAE_METHOD_3_ACF71EF354897043_OFFSET))(this, P0);
	}
};
