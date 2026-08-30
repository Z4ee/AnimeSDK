#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18494560)
#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS8_0___SHOWROGUETOURNENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x18495110)

inline static constexpr unsigned int Class_2_0076F4905B051640___c__DisplayClass8_0_TypeDefinitionIndex = 67829;

class Class_2_0076F4905B051640___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::UInt32 blockID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowRogueTournEntrancePage_b__1(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS8_0___SHOWROGUETOURNENTRANCEPAGE_B__1_OFFSET))(this, a1);
	}
};
