#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_36;
class Class_3_87492AF8E794E45E_29;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x148CBF80)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_METHOD_1_B9DC0BB323151745_OFFSET UNITYSDK_OFFSET(0x148CBF00)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952__CTOR_OFFSET UNITYSDK_OFFSET(0x148CBEF0)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_D9DAE79D59FEF952_TypeDefinitionIndex = 56889;

class Class_2_A7165A858F83C5DB_Class_1_D9DAE79D59FEF952 : public ::System::Object
{
public:
	::System::Action_2<::Class_3_87492AF8E794E45E_29*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B9DC0BB323151745(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_METHOD_1_B9DC0BB323151745_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_D9DAE79D59FEF952_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}
};
