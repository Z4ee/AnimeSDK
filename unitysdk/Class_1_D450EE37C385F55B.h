#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D450EE37C385F55B_ExecuteState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_333;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_D450EE37C385F55B_CLEAR_OFFSET UNITYSDK_OFFSET(0x8D25B00)
#define CLASS_1_D450EE37C385F55B_GET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x8D25070)
#define CLASS_1_D450EE37C385F55B_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x8D25B50)
#define CLASS_1_D450EE37C385F55B_METHOD_1_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0x8D25180)
#define CLASS_1_D450EE37C385F55B_METHOD_1_3EDFF4ABCC4E2420_OFFSET UNITYSDK_OFFSET(0x8D26170)
#define CLASS_1_D450EE37C385F55B_METHOD_1_3F661E1A80F69D7B_OFFSET UNITYSDK_OFFSET(0x8D25E10)
#define CLASS_1_D450EE37C385F55B_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x8D258F0)
#define CLASS_1_D450EE37C385F55B_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0x8D25440)
#define CLASS_1_D450EE37C385F55B_METHOD_1_8E1D1CCB56C34A70_OFFSET UNITYSDK_OFFSET(0x8D255D0)
#define CLASS_1_D450EE37C385F55B_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x8D250E0)
#define CLASS_1_D450EE37C385F55B_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0x8D25130)
#define CLASS_1_D450EE37C385F55B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8D25090)
#define CLASS_1_D450EE37C385F55B_METHOD_1_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x8D254C0)
#define CLASS_1_D450EE37C385F55B_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x8D25710)
#define CLASS_1_D450EE37C385F55B_SET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x8D25080)
#define CLASS_1_D450EE37C385F55B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D25D20)
#define CLASS_1_D450EE37C385F55B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D252B0)
#define CLASS_1_D450EE37C385F55B___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D262D0)

inline static constexpr unsigned int Class_1_D450EE37C385F55B_TypeDefinitionIndex = 58258;

class Class_1_D450EE37C385F55B : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_333*>* Field_1_3; // 0x10
	::System::Action_2<::Class_1_D450EE37C385F55B*, ::System::Boolean>* Field_1_6; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_333*>* Field_1_4; // 0x20
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_333*>* Field_1_5; // 0x28
	::System::String* _ParallelName_k__BackingField; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::Class_1_D450EE37C385F55B_ExecuteState Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B__CTOR_OFFSET))(this);
	}

	::System::String* get_ParallelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_GET_PARALLELNAME_OFFSET))(this);
	}

	::System::Void set_ParallelName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_SET_PARALLELNAME_OFFSET))(this, value);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Int32 Method_1_1DC66375F15E73A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_1DC66375F15E73A5_OFFSET))(this);
	}

	static ::Class_1_D450EE37C385F55B* Method_1_521FF42A136F3888(::System::String* a1)
	{
		return ((::Class_1_D450EE37C385F55B*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_521FF42A136F3888_OFFSET))(a1);
	}

	::System::Void Method_1_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_333* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_333*))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E1D1CCB56C34A70(::System::Action_2<::Class_0_16E4307DCC419505_333*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_333*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_8E1D1CCB56C34A70_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_CLEAR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_3F661E1A80F69D7B(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_333*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_333*>*))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_3F661E1A80F69D7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_3EDFF4ABCC4E2420(::Class_0_16E4307DCC419505_333* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_333*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B_METHOD_1_3EDFF4ABCC4E2420_OFFSET))(this, a1, a2);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D450EE37C385F55B___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
