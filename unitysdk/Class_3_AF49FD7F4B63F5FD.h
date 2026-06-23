#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_E54B0BAFCA2425BD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1535B410)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1535BF60)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_4FDF005454F5C8EC_OFFSET UNITYSDK_OFFSET(0x1535B970)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_517A4D60CA0F5AB2_OFFSET UNITYSDK_OFFSET(0x1535BDC0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_5393B5BB8648A1BB_OFFSET UNITYSDK_OFFSET(0x1535BA40)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x1535B5F0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1535BA30)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1535BF70)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1535BF90)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x1535BFA0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_5_OFFSET UNITYSDK_OFFSET(0x1535BFB0)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1535B940)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1535BE70)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_9CDF78FD09676BEE_OFFSET UNITYSDK_OFFSET(0x1535BF00)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1535B480)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_B5978E14A6694A3A_OFFSET UNITYSDK_OFFSET(0x1535AA60)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_BBD2AFA88E22022D_OFFSET UNITYSDK_OFFSET(0x1535AE60)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1535B960)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1535B950)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_EC1DDA64D4CC246F_OFFSET UNITYSDK_OFFSET(0x1535B600)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1535BF80)
#define CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1535B930)
#define CLASS_3_AF49FD7F4B63F5FD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1535A850)
#define CLASS_3_AF49FD7F4B63F5FD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1535AB50)
#define CLASS_3_AF49FD7F4B63F5FD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1535AF20)
#define CLASS_3_AF49FD7F4B63F5FD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1535ABD0)
#define CLASS_3_AF49FD7F4B63F5FD_ONREADY_OFFSET UNITYSDK_OFFSET(0x1535B0F0)
#define CLASS_3_AF49FD7F4B63F5FD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1535A750)
#define CLASS_3_AF49FD7F4B63F5FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1535B560)

inline static constexpr unsigned int Class_3_AF49FD7F4B63F5FD_TypeDefinitionIndex = 43661;

class Class_3_AF49FD7F4B63F5FD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_AF49FD7F4B63F5FD*>
{
public:
	::System::Threading::CancellationTokenSource* Field_3_7; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_3_1; // 0x28
	::System::String* Field_3_0; // 0x30
	::Class_2_E54B0BAFCA2425BD* Field_3_2; // 0x38
	::System::Threading::CancellationTokenSource* Field_3_8; // 0x40
	::System::Int32 Field_3_3; // 0x48
	::System::Boolean Field_3_5; // 0x4C
	::System::Boolean Field_3_6; // 0x4D
	::System::Boolean Field_3_4; // 0x4E

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

	::System::Void Method_3_58BA0C8308C8127F(::Class_2_E54B0BAFCA2425BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E54B0BAFCA2425BD*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_3_EC1DDA64D4CC246F(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_EC1DDA64D4CC246F_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_B5978E14A6694A3A(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_B5978E14A6694A3A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_4FDF005454F5C8EC(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_4FDF005454F5C8EC_OFFSET))(a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	static ::System::Void Method_3_5393B5BB8648A1BB(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_5393B5BB8648A1BB_OFFSET))(a1);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_517A4D60CA0F5AB2(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_517A4D60CA0F5AB2_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_3_BBD2AFA88E22022D(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_BBD2AFA88E22022D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_9CDF78FD09676BEE(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_9CDF78FD09676BEE_OFFSET))(this, a1, a2);
	}

	::Class_2_E54B0BAFCA2425BD* Method_3_43A46E5F9FAC62B8()
	{
		return ((::Class_2_E54B0BAFCA2425BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_METHOD_3_832295EC279E5994_3_OFFSET))(this);
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
