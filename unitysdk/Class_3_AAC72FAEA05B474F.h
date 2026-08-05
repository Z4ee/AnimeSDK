#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_D228CF1E7224FDC2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T1, typename T2> class Class_1_4BBF2D747CC2DDFA;

#define CLASS_3_AAC72FAEA05B474F_METHOD_3_1EA89006E3394750_OFFSET UNITYSDK_OFFSET(0x138D72F0)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x138D7240)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_4943333D131692A3_OFFSET UNITYSDK_OFFSET(0x138D65F0)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x138D6B90)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x138D6E20)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x138D6F60)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x138D7230)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x138D6B80)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_B74D8C49B6C1B1A6_OFFSET UNITYSDK_OFFSET(0x138D6E30)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_B79D0665B51E930B_OFFSET UNITYSDK_OFFSET(0x138D6BB0)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_E949B6E48E09D613_OFFSET UNITYSDK_OFFSET(0x138D6F70)
#define CLASS_3_AAC72FAEA05B474F_METHOD_3_F605FAF52BE6572F_OFFSET UNITYSDK_OFFSET(0x138D6BA0)
#define CLASS_3_AAC72FAEA05B474F_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x138D5CE0)
#define CLASS_3_AAC72FAEA05B474F_ONDETACH_OFFSET UNITYSDK_OFFSET(0x138D5E30)
#define CLASS_3_AAC72FAEA05B474F_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x138D6210)
#define CLASS_3_AAC72FAEA05B474F_ONREADY_OFFSET UNITYSDK_OFFSET(0x138D5E80)
#define CLASS_3_AAC72FAEA05B474F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x138D5BD0)
#define CLASS_3_AAC72FAEA05B474F__CTOR_OFFSET UNITYSDK_OFFSET(0x138D65B0)

inline static constexpr unsigned int Class_3_AAC72FAEA05B474F_TypeDefinitionIndex = 59316;

class Class_3_AAC72FAEA05B474F : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_AAC72FAEA05B474F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_D228CF1E7224FDC2*>* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::Class_3_D228CF1E7224FDC2*>* Field_3_0; // 0x28
	::Class_1_4BBF2D747CC2DDFA<::System::UInt32, ::System::UInt32>* Field_3_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::Class_3_D228CF1E7224FDC2*, ::System::Threading::CancellationTokenSource*>>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_ONDETACH_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_ONREADY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_4943333D131692A3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_4943333D131692A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_3_D228CF1E7224FDC2*>* Method_3_F605FAF52BE6572F()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_3_D228CF1E7224FDC2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_F605FAF52BE6572F_OFFSET))(this);
	}

	::System::Void Method_3_B79D0665B51E930B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_B79D0665B51E930B_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_B74D8C49B6C1B1A6(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_B74D8C49B6C1B1A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_E949B6E48E09D613(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Collections::Generic::HashSet_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_E949B6E48E09D613_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Boolean Method_3_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::ValueTuple_2<::Class_3_D228CF1E7224FDC2*, ::System::Threading::CancellationTokenSource*>>* Method_3_1EA89006E3394750()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::ValueTuple_2<::Class_3_D228CF1E7224FDC2*, ::System::Threading::CancellationTokenSource*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAC72FAEA05B474F_METHOD_3_1EA89006E3394750_OFFSET))(this);
	}
};
