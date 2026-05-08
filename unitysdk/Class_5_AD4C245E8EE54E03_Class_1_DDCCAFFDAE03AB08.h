#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_5_40F16634C043C523;
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_30FF6A1E2EEC22D4_OFFSET UNITYSDK_OFFSET(0xF83B070)
#define CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xF83AC60)
#define CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_98CE0146892033EF_OFFSET UNITYSDK_OFFSET(0xF83ADB0)
#define CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xF83AF10)
#define CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08__CTOR_OFFSET UNITYSDK_OFFSET(0xF83AC50)

inline static constexpr unsigned int Class_5_AD4C245E8EE54E03_Class_1_DDCCAFFDAE03AB08_TypeDefinitionIndex = 49386;

class Class_5_AD4C245E8EE54E03_Class_1_DDCCAFFDAE03AB08 : public ::System::Object
{
public:
	::Class_5_40F16634C043C523* Field_1_0; // 0x10
	::System::WeakReference_1<::Class_5_40F16634C043C523*>* Field_1_1; // 0x18
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x20
	::System::Func_1<::System::Boolean>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_98CE0146892033EF(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_98CE0146892033EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Boolean Method_1_30FF6A1E2EEC22D4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03_CLASS_1_DDCCAFFDAE03AB08_METHOD_1_30FF6A1E2EEC22D4_OFFSET))(this);
	}
};
