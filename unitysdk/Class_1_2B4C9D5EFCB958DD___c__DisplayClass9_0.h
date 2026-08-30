#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2B4C9D5EFCB958DD;
namespace RPG::Client { class UIController; }

#define CLASS_1_2B4C9D5EFCB958DD___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x153EC7C0)
#define CLASS_1_2B4C9D5EFCB958DD___C__DISPLAYCLASS9_0___SHOWLAST_B__1_OFFSET UNITYSDK_OFFSET(0x153EC980)

inline static constexpr unsigned int Class_1_2B4C9D5EFCB958DD___c__DisplayClass9_0_TypeDefinitionIndex = 72961;

class Class_1_2B4C9D5EFCB958DD___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_2B4C9D5EFCB958DD* __4__this; // 0x10
	::RPG::Client::UIController* currentTop; // 0x18
	::System::UInt32 blockUID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowLast_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD___C__DISPLAYCLASS9_0___SHOWLAST_B__1_OFFSET))(this);
	}
};
