#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_400;
class Class_0_16E4307DCC419505_412;
class Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8;
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F44F35AB58994EE2_ADD_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EC5EFB0)
#define CLASS_1_F44F35AB58994EE2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC625F0)
#define CLASS_1_F44F35AB58994EE2_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1EC62200)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_10319490E24A5753_OFFSET UNITYSDK_OFFSET(0x1EC622A0)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_413613DA5B3A88E2_OFFSET UNITYSDK_OFFSET(0x1EC61A50)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1EC61BE0)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_4970B8B015C68655_OFFSET UNITYSDK_OFFSET(0x1EC61770)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_86E8BAA3AABE09FB_OFFSET UNITYSDK_OFFSET(0x1EC62320)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1EC5F010)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1EC62230)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_B1503130146B14C2_OFFSET UNITYSDK_OFFSET(0x1EC5F390)
#define CLASS_1_F44F35AB58994EE2_METHOD_1_C8155D49D60EFA66_OFFSET UNITYSDK_OFFSET(0x1EC626A0)
#define CLASS_1_F44F35AB58994EE2_REMOVE_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EC5EF50)
#define CLASS_1_F44F35AB58994EE2_SET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1EC62210)
#define CLASS_1_F44F35AB58994EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5ECB0)

inline static constexpr unsigned int Class_1_F44F35AB58994EE2_TypeDefinitionIndex = 44168;

class Class_1_F44F35AB58994EE2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8*>* JMJHABHDHKE; // 0x10
	::System::Action_1<::System::Int32>* ActiveStageStepCountChanged; // 0x18
	::Class_0_16E4307DCC419505_400* _Logger_k__BackingField; // 0x20
	::System::Boolean GFAMGLFOMGI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_400* get_Logger()
	{
		return ((::Class_0_16E4307DCC419505_400*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_GET_LOGGER_OFFSET))(this);
	}

	::System::Void set_Logger(::Class_0_16E4307DCC419505_400* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_400*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_SET_LOGGER_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void add_ActiveStageStepCountChanged(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_ADD_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_ActiveStageStepCountChanged(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_REMOVE_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_B1503130146B14C2(::System::Object* a1, ::Class_0_16E4307DCC419505_412* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::Class_0_16E4307DCC419505_412*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_B1503130146B14C2_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_86E8BAA3AABE09FB(::System::Object* a1, ::Class_0_16E4307DCC419505_412* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Object*, ::Class_0_16E4307DCC419505_412*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_86E8BAA3AABE09FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4970B8B015C68655(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_4970B8B015C68655_OFFSET))(this, a1);
	}

	::System::Void Method_1_413613DA5B3A88E2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_413613DA5B3A88E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_10319490E24A5753(::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_10319490E24A5753_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8155D49D60EFA66(::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_C8155D49D60EFA66_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
