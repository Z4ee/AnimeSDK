#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_B947D336595B4072;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB680150)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xB680160)
#define CLASS_1_303D5A33D1401D59___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__1_OFFSET UNITYSDK_OFFSET(0xB6801B0)

inline static constexpr unsigned int Class_1_303D5A33D1401D59___c__DisplayClass14_0_TypeDefinitionIndex = 73803;

class Class_1_303D5A33D1401D59___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_B947D336595B4072* _IRIContext; // 0x10
	::RPG::Client::OpenWorld::StreamingItemData* item; // 0x18
	::Class_1_303D5A33D1401D59* __4__this; // 0x20

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
