#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1222;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2700AEF5F7F75476___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF37240)
#define CLASS_1_2700AEF5F7F75476___C__DISPLAYCLASS53_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xAF37970)

inline static constexpr unsigned int Class_1_2700AEF5F7F75476___c__DisplayClass53_0_TypeDefinitionIndex = 74265;

class Class_1_2700AEF5F7F75476___c__DisplayClass53_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1222* windowService; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* rewardItems; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C__DISPLAYCLASS53_0___CTOR_B__1_OFFSET))(this);
	}
};
