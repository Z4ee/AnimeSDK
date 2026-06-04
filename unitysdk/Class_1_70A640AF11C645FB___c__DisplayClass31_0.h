#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70A640AF11C645FB;
namespace System { class String; }

#define CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5FEE0)
#define CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS31_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x13C60510)

inline static constexpr unsigned int Class_1_70A640AF11C645FB___c__DisplayClass31_0_TypeDefinitionIndex = 45755;

class Class_1_70A640AF11C645FB___c__DisplayClass31_0 : public ::System::Object
{
public:
	::Class_1_70A640AF11C645FB* __4__this; // 0x10
	::System::String* timelinePath; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPreloadTimelineAssetFinish_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS31_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET))(this);
	}
};
