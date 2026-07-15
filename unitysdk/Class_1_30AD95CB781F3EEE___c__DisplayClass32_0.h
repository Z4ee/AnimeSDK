#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_30AD95CB781F3EEE;
namespace System { class String; }

#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5A1D0)
#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x17A5A800)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c__DisplayClass32_0_TypeDefinitionIndex = 46694;

class Class_1_30AD95CB781F3EEE___c__DisplayClass32_0 : public ::System::Object
{
public:
	::Class_1_30AD95CB781F3EEE* __4__this; // 0x10
	::System::String* timelinePath; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPreloadTimelineAssetFinish_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET))(this);
	}
};
