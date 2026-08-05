#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Class_4_7E85711946499166_Struct_2_BBD456EBC9087BC2_16.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_9232271EC184E3E9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_4_7E85711946499166_METHOD_4_1C76DE1C72E616D0_OFFSET UNITYSDK_OFFSET(0x1E34D1A0)
#define CLASS_4_7E85711946499166_METHOD_4_31F2E49EB7F25001_OFFSET UNITYSDK_OFFSET(0x1E34CDE0)
#define CLASS_4_7E85711946499166_METHOD_4_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E34CDD0)
#define CLASS_4_7E85711946499166_METHOD_4_4A4CF00763986BE8_OFFSET UNITYSDK_OFFSET(0x1E34CEE0)
#define CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1E34D160)
#define CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1E34D170)
#define CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1E34D180)
#define CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x1E34D190)
#define CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1E34CDF0)
#define CLASS_4_7E85711946499166_METHOD_4_B4D1AB6C4BD83BC8_OFFSET UNITYSDK_OFFSET(0x1E34C7C0)
#define CLASS_4_7E85711946499166_METHOD_4_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1E34CE00)
#define CLASS_4_7E85711946499166_METHOD_4_FB820CF7FFB1C1DD_OFFSET UNITYSDK_OFFSET(0x1E34D060)
#define CLASS_4_7E85711946499166_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E34C180)
#define CLASS_4_7E85711946499166_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1E34CA40)
#define CLASS_4_7E85711946499166_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E34C890)
#define CLASS_4_7E85711946499166_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E34C510)
#define CLASS_4_7E85711946499166_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1E34CBB0)
#define CLASS_4_7E85711946499166_RECEIVEGRAPHCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1E34C370)
#define CLASS_4_7E85711946499166_RECEIVEGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x1E34C210)
#define CLASS_4_7E85711946499166__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34CDC0)
#define CLASS_4_7E85711946499166__CTOR_OFFSET UNITYSDK_OFFSET(0x1E34CCA0)

inline static constexpr unsigned int Class_4_7E85711946499166_TypeDefinitionIndex = 72369;

class Class_4_7E85711946499166 : public ::Class_3_627DF5C40DDAA45B<::Class_4_7E85711946499166*>
{
public:
	static ::System::Boolean* StaticGet_Field_4_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_4_7E85711946499166_TypeDefinitionIndex)->GetStaticField(0x11F00);
	}
	::System::Threading::CancellationTokenSource* Field_4_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_9232271EC184E3E9*>* Field_4_1; // 0x38
	::System::Collections::Generic::List_1<::Class_4_7E85711946499166_Struct_2_BBD456EBC9087BC2_16>* Field_4_0; // 0x40
	::System::Threading::CancellationTokenSource* Field_4_7; // 0x48
	::System::Int32 Field_4_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166__CCTOR_OFFSET))();
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_ONAWAKE_OFFSET))(this);
	}

	::System::Void ReceiveGraphEvent(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_RECEIVEGRAPHEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveGraphCustomEvent(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>*))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_RECEIVEGRAPHCUSTOMEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_4_3DACC45AC8150727(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_4_31F2E49EB7F25001(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>*))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_31F2E49EB7F25001_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::Class_2_9232271EC184E3E9* Method_4_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_9232271EC184E3E9*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_4A4CF00763986BE8(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_4A4CF00763986BE8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_1_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_4_FB820CF7FFB1C1DD(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a5, ::System::Int32 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_FB820CF7FFB1C1DD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_4_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_2_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_4_B4D1AB6C4BD83BC8(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Int32 a2, ::System::String* a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_B4D1AB6C4BD83BC8_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_4_1C76DE1C72E616D0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_METHOD_4_1C76DE1C72E616D0_OFFSET))(this, a1);
	}
};
