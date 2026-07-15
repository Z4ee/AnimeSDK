#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1316;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115E551636659526___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1645FDC0)
#define CLASS_1_115E551636659526___C__DISPLAYCLASS53_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x164607A0)

inline static constexpr unsigned int Class_1_115E551636659526___c__DisplayClass53_0_TypeDefinitionIndex = 76649;

class Class_1_115E551636659526___c__DisplayClass53_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1316* windowService; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* rewardItems; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C__DISPLAYCLASS53_0___CTOR_B__1_OFFSET))(this);
	}
};
