#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_B49DE677646DAFDE_1_METHOD_1_A4DB0B83FFF4FF3A_OFFSET UNITYSDK_OFFSET(0x15408650)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_B49DE677646DAFDE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15408640)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_B49DE677646DAFDE_1_TypeDefinitionIndex = 56888;

class Class_2_A7165A858F83C5DB_Class_1_B49DE677646DAFDE_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_B49DE677646DAFDE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A4DB0B83FFF4FF3A(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_B49DE677646DAFDE_1_METHOD_1_A4DB0B83FFF4FF3A_OFFSET))(this, a1);
	}
};
