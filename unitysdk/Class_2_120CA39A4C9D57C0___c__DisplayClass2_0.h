#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_1_9B39BF4ECCAD98D9;
class Class_2_120CA39A4C9D57C0;

#define CLASS_2_120CA39A4C9D57C0___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7E170)
#define CLASS_2_120CA39A4C9D57C0___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x17F7E180)
#define CLASS_2_120CA39A4C9D57C0___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x17F7ED30)

inline static constexpr unsigned int Class_2_120CA39A4C9D57C0___c__DisplayClass2_0_TypeDefinitionIndex = 49881;

class Class_2_120CA39A4C9D57C0___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_9B39BF4ECCAD98D9* lerpTask; // 0x10
	::Class_0_16E4307DCC419505_374* handle; // 0x18
	::Class_2_120CA39A4C9D57C0* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120CA39A4C9D57C0___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_120CA39A4C9D57C0___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__1(::EnviromentSystemV2Space::CancelFadingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + CLASS_2_120CA39A4C9D57C0___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET))(this, a1);
	}
};
