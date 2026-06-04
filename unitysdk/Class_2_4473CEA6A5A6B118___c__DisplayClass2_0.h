#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_1_9B39BF4ECCAD98D9;
class Class_2_4473CEA6A5A6B118;

#define CLASS_2_4473CEA6A5A6B118___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A16A00)
#define CLASS_2_4473CEA6A5A6B118___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x13A16A10)
#define CLASS_2_4473CEA6A5A6B118___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x13A17030)

inline static constexpr unsigned int Class_2_4473CEA6A5A6B118___c__DisplayClass2_0_TypeDefinitionIndex = 46635;

class Class_2_4473CEA6A5A6B118___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_4473CEA6A5A6B118* __4__this; // 0x10
	::Class_0_16E4307DCC419505_331* handle; // 0x18
	::Class_1_9B39BF4ECCAD98D9* lerpTask; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4473CEA6A5A6B118___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4473CEA6A5A6B118___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__1(::EnviromentSystemV2Space::CancelFadingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + CLASS_2_4473CEA6A5A6B118___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET))(this, a1);
	}
};
