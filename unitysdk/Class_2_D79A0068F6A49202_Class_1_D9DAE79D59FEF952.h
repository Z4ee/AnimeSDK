#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_0_16E4307DCC419505_4;
class Class_3_025FF4981524A424_370;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D79A0068F6A49202_CLASS_1_D9DAE79D59FEF952_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x104EA0A0)
#define CLASS_2_D79A0068F6A49202_CLASS_1_D9DAE79D59FEF952_METHOD_1_B9DC0BB323151745_OFFSET UNITYSDK_OFFSET(0x104EA020)
#define CLASS_2_D79A0068F6A49202_CLASS_1_D9DAE79D59FEF952__CTOR_OFFSET UNITYSDK_OFFSET(0x104EA010)

inline static constexpr unsigned int Class_2_D79A0068F6A49202_Class_1_D9DAE79D59FEF952_TypeDefinitionIndex = 43651;

class Class_2_D79A0068F6A49202_Class_1_D9DAE79D59FEF952 : public ::System::Object
{
public:
	::System::Action_2<::Class_3_025FF4981524A424_370*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202_CLASS_1_D9DAE79D59FEF952__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B9DC0BB323151745(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202_CLASS_1_D9DAE79D59FEF952_METHOD_1_B9DC0BB323151745_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_D79A0068F6A49202_CLASS_1_D9DAE79D59FEF952_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}
};
