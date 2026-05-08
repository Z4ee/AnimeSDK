#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_0_16E4307DCC419505_4;
class Class_3_32CD58E95ADFF8F5_55;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x115C0C80)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_B9DC0BB323151745_OFFSET UNITYSDK_OFFSET(0x115C0C00)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_1__CTOR_OFFSET UNITYSDK_OFFSET(0x115C0BF0)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_D9DAE79D59FEF952_1_TypeDefinitionIndex = 50123;

class Class_2_A7165A858F83C5DB_Class_1_D9DAE79D59FEF952_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* Field_1_1; // 0x10
	::System::Action_2<::Class_3_32CD58E95ADFF8F5_55*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B9DC0BB323151745(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_B9DC0BB323151745_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}
};
