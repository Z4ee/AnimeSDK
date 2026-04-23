#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_1_E0DD280A885A630F;
class Class_2_75D32E05326D489C;

#define CLASS_2_75D32E05326D489C___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A63420)
#define CLASS_2_75D32E05326D489C___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x11A63430)
#define CLASS_2_75D32E05326D489C___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x11A63A60)

inline static constexpr unsigned int Class_2_75D32E05326D489C___c__DisplayClass2_0_TypeDefinitionIndex = 46052;

class Class_2_75D32E05326D489C___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_E0DD280A885A630F* lerpTask; // 0x10
	::Class_2_75D32E05326D489C* __4__this; // 0x18
	::Class_0_16E4307DCC419505_318* handle; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75D32E05326D489C___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75D32E05326D489C___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__0_OFFSET))(this);
	}

	::System::Void _UpdatePropertyAsync_b__1(::EnviromentSystemV2Space::CancelFadingReason reason)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + CLASS_2_75D32E05326D489C___C__DISPLAYCLASS2_0__UPDATEPROPERTYASYNC_B__1_OFFSET))(this, reason);
	}
};
