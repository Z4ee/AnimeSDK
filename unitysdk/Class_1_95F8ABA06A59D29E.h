#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_002DEDC9C18A055B;
class Class_1_02C9F7D26CD84B5F;
class Class_1_41DC55EACF71282F;
class Class_1_6293765FEB857026;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_95F8ABA06A59D29E_METHOD_1_8EE590CB69EA655F_OFFSET UNITYSDK_OFFSET(0x179F1A20)
#define CLASS_1_95F8ABA06A59D29E_METHOD_1_CBF453886569350B_OFFSET UNITYSDK_OFFSET(0x179F1D20)
#define CLASS_1_95F8ABA06A59D29E_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x179F19B0)
#define CLASS_1_95F8ABA06A59D29E__CTOR_OFFSET UNITYSDK_OFFSET(0x179F1FA0)

inline static constexpr unsigned int Class_1_95F8ABA06A59D29E_TypeDefinitionIndex = 80616;

class Class_1_95F8ABA06A59D29E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F8ABA06A59D29E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_002DEDC9C18A055B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_002DEDC9C18A055B*))((::PBYTE)hIl2Cpp + CLASS_1_95F8ABA06A59D29E_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>* Method_1_8EE590CB69EA655F(::Class_1_002DEDC9C18A055B* a1, ::Class_1_02C9F7D26CD84B5F* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>*(*)(::PVOID, ::Class_1_002DEDC9C18A055B*, ::Class_1_02C9F7D26CD84B5F*))((::PBYTE)hIl2Cpp + CLASS_1_95F8ABA06A59D29E_METHOD_1_8EE590CB69EA655F_OFFSET))(this, a1, a2);
	}

	static ::Class_1_6293765FEB857026* Method_1_CBF453886569350B(::System::Collections::Generic::IReadOnlyList_1<::Class_1_6293765FEB857026*>* a1, ::System::Int32& a2)
	{
		return ((::Class_1_6293765FEB857026*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_1_6293765FEB857026*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_95F8ABA06A59D29E_METHOD_1_CBF453886569350B_OFFSET))(a1, a2);
	}
};
