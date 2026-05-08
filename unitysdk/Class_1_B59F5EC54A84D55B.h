#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_229;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define CLASS_1_B59F5EC54A84D55B_METHOD_1_058EC8FC7B819E16_OFFSET UNITYSDK_OFFSET(0xF0B1BF0)
#define CLASS_1_B59F5EC54A84D55B_METHOD_1_066B4A2C516F676F_OFFSET UNITYSDK_OFFSET(0xF0B1CF0)
#define CLASS_1_B59F5EC54A84D55B_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0xF0B1B60)
#define CLASS_1_B59F5EC54A84D55B_METHOD_1_212746AF52890492_OFFSET UNITYSDK_OFFSET(0xF0B1BC0)
#define CLASS_1_B59F5EC54A84D55B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xF0B1AF0)
#define CLASS_1_B59F5EC54A84D55B__CTOR_OFFSET UNITYSDK_OFFSET(0xF0B16D0)

inline static constexpr unsigned int Class_1_B59F5EC54A84D55B_TypeDefinitionIndex = 63715;

class Class_1_B59F5EC54A84D55B : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_229* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_229* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_229*))((::PBYTE)hIl2Cpp + CLASS_1_B59F5EC54A84D55B__CTOR_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_212746AF52890492()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59F5EC54A84D55B_METHOD_1_212746AF52890492_OFFSET))(this);
	}

	::System::Void Method_1_058EC8FC7B819E16(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_B59F5EC54A84D55B_METHOD_1_058EC8FC7B819E16_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59F5EC54A84D55B_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	static ::Class_1_B59F5EC54A84D55B* Method_1_066B4A2C516F676F(::Class_0_16E4307DCC419505_229* a1)
	{
		return ((::Class_1_B59F5EC54A84D55B*(*)(::Class_0_16E4307DCC419505_229*))((::PBYTE)hIl2Cpp + CLASS_1_B59F5EC54A84D55B_METHOD_1_066B4A2C516F676F_OFFSET))(a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59F5EC54A84D55B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
