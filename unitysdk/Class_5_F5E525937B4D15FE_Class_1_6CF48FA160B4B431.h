#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_5_F5E525937B4D15FE;

#define CLASS_5_F5E525937B4D15FE_CLASS_1_6CF48FA160B4B431_METHOD_1_117B6C86B0F4C97C_OFFSET UNITYSDK_OFFSET(0x1806F680)
#define CLASS_5_F5E525937B4D15FE_CLASS_1_6CF48FA160B4B431__CTOR_OFFSET UNITYSDK_OFFSET(0x1806F670)

inline static constexpr unsigned int Class_5_F5E525937B4D15FE_Class_1_6CF48FA160B4B431_TypeDefinitionIndex = 58174;

class Class_5_F5E525937B4D15FE_Class_1_6CF48FA160B4B431 : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_3; // 0x10
	::Class_5_F5E525937B4D15FE* Field_1_0; // 0x18
	::Enum_3_F6AB19A8BCD630BB Field_1_2; // 0x20
	::Enum_3_982178F761E7F1DC Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_CLASS_1_6CF48FA160B4B431__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_117B6C86B0F4C97C()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_CLASS_1_6CF48FA160B4B431_METHOD_1_117B6C86B0F4C97C_OFFSET))(this);
	}
};
