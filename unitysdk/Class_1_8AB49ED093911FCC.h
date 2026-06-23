#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_3_402121D94A91AFBA;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define CLASS_1_8AB49ED093911FCC_METHOD_1_058EC8FC7B819E16_OFFSET UNITYSDK_OFFSET(0x11E58380)
#define CLASS_1_8AB49ED093911FCC_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x11E58320)
#define CLASS_1_8AB49ED093911FCC_METHOD_1_212746AF52890492_OFFSET UNITYSDK_OFFSET(0x11E58480)
#define CLASS_1_8AB49ED093911FCC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11E582B0)
#define CLASS_1_8AB49ED093911FCC_METHOD_1_FA606D8166F0B8FE_OFFSET UNITYSDK_OFFSET(0x11E584B0)
#define CLASS_1_8AB49ED093911FCC__CTOR_OFFSET UNITYSDK_OFFSET(0x11E57FF0)

inline static constexpr unsigned int Class_1_8AB49ED093911FCC_TypeDefinitionIndex = 70129;

class Class_1_8AB49ED093911FCC : public ::System::Object
{
public:
	::Class_3_402121D94A91AFBA* Field_1_1; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x18

	::System::Void _ctor(::Class_3_402121D94A91AFBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_402121D94A91AFBA*))((::PBYTE)hIl2Cpp + CLASS_1_8AB49ED093911FCC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB49ED093911FCC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB49ED093911FCC_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_1_058EC8FC7B819E16(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_8AB49ED093911FCC_METHOD_1_058EC8FC7B819E16_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_212746AF52890492()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB49ED093911FCC_METHOD_1_212746AF52890492_OFFSET))(this);
	}

	static ::Class_1_8AB49ED093911FCC* Method_1_FA606D8166F0B8FE(::Class_3_402121D94A91AFBA* a1)
	{
		return ((::Class_1_8AB49ED093911FCC*(*)(::Class_3_402121D94A91AFBA*))((::PBYTE)hIl2Cpp + CLASS_1_8AB49ED093911FCC_METHOD_1_FA606D8166F0B8FE_OFFSET))(a1);
	}
};
