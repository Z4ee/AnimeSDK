#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_5_BFFF8608392BE06B;

#define CLASS_5_BFFF8608392BE06B_CLASS_1_6CF48FA160B4B431_METHOD_1_117B6C86B0F4C97C_OFFSET UNITYSDK_OFFSET(0x167A0CD0)
#define CLASS_5_BFFF8608392BE06B_CLASS_1_6CF48FA160B4B431__CTOR_OFFSET UNITYSDK_OFFSET(0x167A0CC0)

inline static constexpr unsigned int Class_5_BFFF8608392BE06B_Class_1_6CF48FA160B4B431_TypeDefinitionIndex = 73179;

class Class_5_BFFF8608392BE06B_Class_1_6CF48FA160B4B431 : public ::System::Object
{
public:
	::Class_5_BFFF8608392BE06B* Field_1_1; // 0x10
	::System::Threading::CancellationToken Field_1_6; // 0x18
	::Enum_3_982178F761E7F1DC Field_1_0; // 0x20
	::Enum_3_F6AB19A8BCD630BB Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B_CLASS_1_6CF48FA160B4B431__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_117B6C86B0F4C97C()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B_CLASS_1_6CF48FA160B4B431_METHOD_1_117B6C86B0F4C97C_OFFSET))(this);
	}
};
