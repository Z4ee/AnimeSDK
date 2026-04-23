#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14BF1B11C879825B;
class Class_1_303D5A33D1401D59;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119A8250)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x119CBB40)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__1_OFFSET UNITYSDK_OFFSET(0x119CBB90)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass14_0_TypeDefinitionIndex = 68027;

class Class_1_303D5A33D1401D59___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::Client::OpenWorld::StreamingItemData* item; // 0x10
	::Class_1_303D5A33D1401D59* __4__this; // 0x18
	::Class_1_14BF1B11C879825B* _IRIContext; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __IRILoadPrefab_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__0_OFFSET))(this);
	}

	::System::Void __IRILoadPrefab_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__1_OFFSET))(this);
	}
};
