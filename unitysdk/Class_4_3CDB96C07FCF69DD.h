#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_31F2E49EB7F25001_OFFSET UNITYSDK_OFFSET(0x14B5D130)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_3900F3F7EE15A614_OFFSET UNITYSDK_OFFSET(0x14B5C7A0)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x14B5D170)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_5A34B5F6D53D9C7B_OFFSET UNITYSDK_OFFSET(0x14B5CBC0)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x14B5D140)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x14B5D150)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x14B5D160)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x14B5D180)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_5_OFFSET UNITYSDK_OFFSET(0x14B5D190)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14B5D120)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_B5978E14A6694A3A_OFFSET UNITYSDK_OFFSET(0x14B5C1F0)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_BBD2AFA88E22022D_OFFSET UNITYSDK_OFFSET(0x14B5C660)
#define CLASS_4_3CDB96C07FCF69DD_METHOD_4_F84A67E2C61B4D1B_OFFSET UNITYSDK_OFFSET(0x14B5D1A0)
#define CLASS_4_3CDB96C07FCF69DD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14B5C020)
#define CLASS_4_3CDB96C07FCF69DD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x14B5C350)
#define CLASS_4_3CDB96C07FCF69DD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14B5C720)
#define CLASS_4_3CDB96C07FCF69DD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14B5C4E0)
#define CLASS_4_3CDB96C07FCF69DD_ONREADY_OFFSET UNITYSDK_OFFSET(0x14B5CA80)
#define CLASS_4_3CDB96C07FCF69DD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14B5C300)
#define CLASS_4_3CDB96C07FCF69DD_RECEIVEGRAPHCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x14B5CE90)
#define CLASS_4_3CDB96C07FCF69DD_RECEIVEGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x14B5CE40)
#define CLASS_4_3CDB96C07FCF69DD__CTOR_OFFSET UNITYSDK_OFFSET(0x14B5D0A0)

inline static constexpr unsigned int Class_4_3CDB96C07FCF69DD_TypeDefinitionIndex = 62318;

class Class_4_3CDB96C07FCF69DD : public ::Class_3_627DF5C40DDAA45B<::Class_4_3CDB96C07FCF69DD*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_4_0; // 0x30
	::System::String* Field_4_1; // 0x38
	::System::Threading::CancellationTokenSource* Field_4_6; // 0x40
	::System::Threading::CancellationTokenSource* Field_4_5; // 0x48
	::System::Int32 Field_4_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_ONREADY_OFFSET))(this);
	}

	::System::Void ReceiveGraphEvent(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_RECEIVEGRAPHEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveGraphCustomEvent(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>*))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_RECEIVEGRAPHCUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_4_B5978E14A6694A3A(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_B5978E14A6694A3A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_31F2E49EB7F25001(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>*))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_31F2E49EB7F25001_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_4_3DACC45AC8150727(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_4_5A34B5F6D53D9C7B(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_5A34B5F6D53D9C7B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_832295EC279E5994_5_OFFSET))(this);
	}

	::System::Void Method_4_3900F3F7EE15A614(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_3900F3F7EE15A614_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_4_BBD2AFA88E22022D(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_BBD2AFA88E22022D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_F84A67E2C61B4D1B(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD_METHOD_4_F84A67E2C61B4D1B_OFFSET))(a1);
	}
};
