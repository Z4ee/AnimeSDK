#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_838;

#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE462610)
#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS9_0___CREATEITEMIFNEED_B__0_OFFSET UNITYSDK_OFFSET(0xE462B80)

inline static constexpr unsigned int Class_2_4144E6E29A80FDF1___c__DisplayClass9_0_TypeDefinitionIndex = 58629;

class Class_2_4144E6E29A80FDF1___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateItemIfNeed_b__0(::Class_0_16E4307DCC419505_838* t)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_838*))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS9_0___CREATEITEMIFNEED_B__0_OFFSET))(this, t);
	}
};
