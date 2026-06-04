#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_37EB8A11B84A6873___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FFDC0)
#define CLASS_1_37EB8A11B84A6873___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xA6003F0)

inline static constexpr unsigned int Class_1_37EB8A11B84A6873___c__DisplayClass18_0_TypeDefinitionIndex = 71015;

class Class_1_37EB8A11B84A6873___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37EB8A11B84A6873___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void __WaitFadeIn_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37EB8A11B84A6873___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET))(this);
	}
};
