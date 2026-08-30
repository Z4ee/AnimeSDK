#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_51B02E0F52FC7288_ExecuteState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_413;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_51B02E0F52FC7288_CLEAR_OFFSET UNITYSDK_OFFSET(0x160D6480)
#define CLASS_1_51B02E0F52FC7288_GET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x160D5830)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_0568A8616E31B6DD_OFFSET UNITYSDK_OFFSET(0x160D6740)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x160D64D0)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0x160D5940)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0x160D5C00)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x160D58A0)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0x160D58F0)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x160D5850)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_C5ACC4F98D03DC21_OFFSET UNITYSDK_OFFSET(0x160D6C50)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x160D6220)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_D833886B9AC67E10_OFFSET UNITYSDK_OFFSET(0x160D5C80)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x160D5FB0)
#define CLASS_1_51B02E0F52FC7288_METHOD_1_E8D60EA651BBBE3C_OFFSET UNITYSDK_OFFSET(0x160D5DF0)
#define CLASS_1_51B02E0F52FC7288_SET_PARALLELNAME_OFFSET UNITYSDK_OFFSET(0x160D5840)
#define CLASS_1_51B02E0F52FC7288_TOSTRING_OFFSET UNITYSDK_OFFSET(0x160D6690)
#define CLASS_1_51B02E0F52FC7288__CTOR_OFFSET UNITYSDK_OFFSET(0x160D5A70)

inline static constexpr unsigned int Class_1_51B02E0F52FC7288_TypeDefinitionIndex = 71084;

class Class_1_51B02E0F52FC7288 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_413*>* FDMJKDCBIGK; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_413*>* PFFCKJPDLGA; // 0x18
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_413*>* CGIOKAFHOLM; // 0x20
	::System::String* _ParallelName_k__BackingField; // 0x28
	::System::Action_2<::Class_1_51B02E0F52FC7288*, ::System::Boolean>* LGAOOKPFIMF; // 0x30
	::Class_1_51B02E0F52FC7288_ExecuteState DMPNOBIEINP; // 0x38
	::System::Boolean DMGHDNNCNFJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288__CTOR_OFFSET))(this);
	}

	::System::String* get_ParallelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_GET_PARALLELNAME_OFFSET))(this);
	}

	::System::Void set_ParallelName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_SET_PARALLELNAME_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Int32 Method_1_1DC66375F15E73A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_1DC66375F15E73A5_OFFSET))(this);
	}

	static ::Class_1_51B02E0F52FC7288* Method_1_521FF42A136F3888(::System::String* a1)
	{
		return ((::Class_1_51B02E0F52FC7288*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_521FF42A136F3888_OFFSET))(a1);
	}

	::System::Void Method_1_D833886B9AC67E10(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_D833886B9AC67E10_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8D60EA651BBBE3C(::System::Action_2<::Class_0_16E4307DCC419505_413*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_413*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_E8D60EA651BBBE3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_CLEAR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_0568A8616E31B6DD(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_413*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_413*>*))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_0568A8616E31B6DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_C5ACC4F98D03DC21(::Class_0_16E4307DCC419505_413* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_51B02E0F52FC7288_METHOD_1_C5ACC4F98D03DC21_OFFSET))(this, a1, a2);
	}
};
