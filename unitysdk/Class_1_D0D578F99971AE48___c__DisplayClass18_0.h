#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_D0D578F99971AE48___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x988AD10)
#define CLASS_1_D0D578F99971AE48___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x988B350)

inline static constexpr unsigned int Class_1_D0D578F99971AE48___c__DisplayClass18_0_TypeDefinitionIndex = 70203;

class Class_1_D0D578F99971AE48___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D578F99971AE48___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void __WaitFadeIn_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D578F99971AE48___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET))(this);
	}
};
