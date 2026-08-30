#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_30AD95CB781F3EEE;
namespace System { class String; }

#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC50F0)
#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS33_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x18DC5770)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c__DisplayClass33_0_TypeDefinitionIndex = 48940;

class Class_1_30AD95CB781F3EEE___c__DisplayClass33_0 : public ::System::Object
{
public:
	::System::String* timelinePath; // 0x10
	::Class_1_30AD95CB781F3EEE* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPreloadTimelineAssetFinish_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS33_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET))(this);
	}
};
