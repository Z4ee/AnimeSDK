#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_9232271EC184E3E9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x10B32860)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B327F0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x10B32A80)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_517A4D60CA0F5AB2_OFFSET UNITYSDK_OFFSET(0x10B32E20)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x10B32AA0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_619D094798E525CE_OFFSET UNITYSDK_OFFSET(0x10B332C0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x10B32AB0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x10B32E00)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x10B333D0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x10B33450)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_5_OFFSET UNITYSDK_OFFSET(0x10B33460)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10B329D0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10B329F0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_8EDC2B96BECC9283_OFFSET UNITYSDK_OFFSET(0x10B32ED0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_9CDF78FD09676BEE_OFFSET UNITYSDK_OFFSET(0x10B333E0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_B5978E14A6694A3A_OFFSET UNITYSDK_OFFSET(0x10B31E30)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_BBD2AFA88E22022D_OFFSET UNITYSDK_OFFSET(0x10B32240)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x10B33440)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10B32A90)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_EC1DDA64D4CC246F_OFFSET UNITYSDK_OFFSET(0x10B32AC0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10B32E10)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10B329E0)
#define CLASS_3_AF49FD7F4B63F5FD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10B31C20)
#define CLASS_3_AF49FD7F4B63F5FD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x10B31F30)
#define CLASS_3_AF49FD7F4B63F5FD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10B32300)
#define CLASS_3_AF49FD7F4B63F5FD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10B31FB0)
#define CLASS_3_AF49FD7F4B63F5FD_ONREADY_OFFSET UNITYSDK_OFFSET(0x10B324D0)
#define CLASS_3_AF49FD7F4B63F5FD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x10B31B10)
#define CLASS_3_AF49FD7F4B63F5FD__CTOR_OFFSET UNITYSDK_OFFSET(0x10B32990)

inline static constexpr unsigned int Class_3_AF49FD7F4B63F5FD_TypeDefinitionIndex = 89788;

class Class_3_AF49FD7F4B63F5FD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_AF49FD7F4B63F5FD*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_3_1; // 0x20
	::Class_2_9232271EC184E3E9* Field_3_0; // 0x28
	::System::Threading::CancellationTokenSource* Field_3_10; // 0x30
	::System::Threading::CancellationTokenSource* Field_3_11; // 0x38
	::System::String* Field_3_2; // 0x40
	::System::Int32 Field_3_7; // 0x48
	::System::Boolean Field_3_4; // 0x4C
	::System::Boolean Field_3_6; // 0x4D
	::System::Boolean Field_3_5; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_ONREADY_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_2_9232271EC184E3E9* Method_3_43A46E5F9FAC62B8()
	{
		return ((::Class_2_9232271EC184E3E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_B5978E14A6694A3A(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_B5978E14A6694A3A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_58BA0C8308C8127F(::Class_2_9232271EC184E3E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9232271EC184E3E9*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_EC1DDA64D4CC246F(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_EC1DDA64D4CC246F_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_BBD2AFA88E22022D(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_BBD2AFA88E22022D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_517A4D60CA0F5AB2(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_517A4D60CA0F5AB2_OFFSET))(a1);
	}

	static ::System::Void Method_3_8EDC2B96BECC9283(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_8EDC2B96BECC9283_OFFSET))(a1);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}

	static ::System::Boolean Method_3_619D094798E525CE(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_619D094798E525CE_OFFSET))(a1);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_9CDF78FD09676BEE(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_9CDF78FD09676BEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_5_OFFSET))(this);
	}
};
