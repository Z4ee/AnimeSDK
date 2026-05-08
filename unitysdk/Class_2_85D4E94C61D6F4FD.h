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

#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11AEDF00)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x11AEEAA0)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_4FDF005454F5C8EC_OFFSET UNITYSDK_OFFSET(0x11AEE470)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_517A4D60CA0F5AB2_OFFSET UNITYSDK_OFFSET(0x11AEE3B0)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_5393B5BB8648A1BB_OFFSET UNITYSDK_OFFSET(0x11AEE610)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x11AEEA90)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_6EB4A0365D18F986_OFFSET UNITYSDK_OFFSET(0x11AEE060)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x11AEE540)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x11AEE560)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x11AEE570)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x11AEEA80)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_5_OFFSET UNITYSDK_OFFSET(0x11AEEAB0)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11AEE530)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x11AEE580)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_9CDF78FD09676BEE_OFFSET UNITYSDK_OFFSET(0x11AEEAC0)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11AEDF70)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_B5978E14A6694A3A_OFFSET UNITYSDK_OFFSET(0x11AED600)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_BBD2AFA88E22022D_OFFSET UNITYSDK_OFFSET(0x11AEDA10)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x11AEEA70)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11AEE460)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11AEE550)
#define CLASS_2_85D4E94C61D6F4FD_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11AEE3A0)
#define CLASS_2_85D4E94C61D6F4FD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11AED430)
#define CLASS_2_85D4E94C61D6F4FD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x11AED700)
#define CLASS_2_85D4E94C61D6F4FD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11AEDAD0)
#define CLASS_2_85D4E94C61D6F4FD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11AED780)
#define CLASS_2_85D4E94C61D6F4FD_ONREADY_OFFSET UNITYSDK_OFFSET(0x11AEDCA0)
#define CLASS_2_85D4E94C61D6F4FD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11AED320)
#define CLASS_2_85D4E94C61D6F4FD__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEE050)

inline static constexpr unsigned int Class_2_85D4E94C61D6F4FD_TypeDefinitionIndex = 54925;

class Class_2_85D4E94C61D6F4FD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_85D4E94C61D6F4FD*>
{
public:
	::Class_2_E54B0BAFCA2425BD* Field_2_2; // 0x20
	::System::Threading::CancellationTokenSource* Field_2_8; // 0x28
	::System::Threading::CancellationTokenSource* Field_2_7; // 0x30
	::System::String* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_1; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Boolean Field_2_4; // 0x4C
	::System::Boolean Field_2_5; // 0x4D
	::System::Boolean Field_2_6; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_ONREADY_OFFSET))(this);
	}

	::System::Void Method_2_6EB4A0365D18F986(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_6EB4A0365D18F986_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_2_517A4D60CA0F5AB2(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_517A4D60CA0F5AB2_OFFSET))(a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_4FDF005454F5C8EC(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_4FDF005454F5C8EC_OFFSET))(a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::System::Void Method_2_5393B5BB8648A1BB(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_5393B5BB8648A1BB_OFFSET))(a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_2_BBD2AFA88E22022D(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_BBD2AFA88E22022D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_58BA0C8308C8127F(::Class_2_E54B0BAFCA2425BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E54B0BAFCA2425BD*))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::Class_2_E54B0BAFCA2425BD* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_E54B0BAFCA2425BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_2_B5978E14A6694A3A(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_B5978E14A6694A3A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_832295EC279E5994_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_832295EC279E5994_5_OFFSET))(this);
	}

	::System::Void Method_2_9CDF78FD09676BEE(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_METHOD_2_9CDF78FD09676BEE_OFFSET))(this, a1, a2);
	}
};
