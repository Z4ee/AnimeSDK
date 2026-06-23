#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FBBB9A824FF6A2E6_Enum_3_ADACC7DF2BF629B6.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"

class Class_1_D9E0C80DACE89226;
class Class_3_07AAFA6F7F79BEB3_1;
class Class_3_30235BB967CBDA73_1;
class Class_3_DC08402B6B015D0F_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_05235FB3471F9F27_OFFSET UNITYSDK_OFFSET(0x12FCA4C0)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_0730C606445351F4_1_OFFSET UNITYSDK_OFFSET(0x12FCB7F0)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_0730C606445351F4_OFFSET UNITYSDK_OFFSET(0x12FC9530)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12FC9860)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_5983FBEDBD9B6833_OFFSET UNITYSDK_OFFSET(0x12FCA900)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12FC9520)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12FC9470)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x12FCA250)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x12FC9000)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_D20F0346E07E9C37_OFFSET UNITYSDK_OFFSET(0x12FCA360)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_F510B5702CFE2C51_OFFSET UNITYSDK_OFFSET(0x12FC98B0)
#define CLASS_3_FBBB9A824FF6A2E6_METHOD_3_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x12FC9480)
#define CLASS_3_FBBB9A824FF6A2E6_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12FC8FB0)
#define CLASS_3_FBBB9A824FF6A2E6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12FC91D0)
#define CLASS_3_FBBB9A824FF6A2E6__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC9320)

inline static constexpr unsigned int Class_3_FBBB9A824FF6A2E6_TypeDefinitionIndex = 72399;

class Class_3_FBBB9A824FF6A2E6 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_FBBB9A824FF6A2E6*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_D9E0C80DACE89226*>* Field_3_3; // 0x20
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry>* Field_3_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_1; // 0x30
	::Class_3_FBBB9A824FF6A2E6_Enum_3_ADACC7DF2BF629B6 Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_0730C606445351F4(::Class_3_07AAFA6F7F79BEB3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3_1*))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_0730C606445351F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_3_F510B5702CFE2C51(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_F510B5702CFE2C51_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D20F0346E07E9C37(::Class_1_D9E0C80DACE89226* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9E0C80DACE89226*, ::System::Int32, ::System::UInt32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_D20F0346E07E9C37_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_05235FB3471F9F27(::Class_1_D9E0C80DACE89226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9E0C80DACE89226*))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_05235FB3471F9F27_OFFSET))(this, a1);
	}

	::System::Void Method_3_5983FBEDBD9B6833(::System::Collections::Generic::IList_1<::Class_3_DC08402B6B015D0F_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_DC08402B6B015D0F_1*>*))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_5983FBEDBD9B6833_OFFSET))(this, a1);
	}

	::System::Void Method_3_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_3_0730C606445351F4_1(::Class_3_30235BB967CBDA73_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_30235BB967CBDA73_1*))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_METHOD_3_0730C606445351F4_1_OFFSET))(this, a1);
	}
};
