#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_485;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0xF23E130)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_B9DC0BB323151745_OFFSET UNITYSDK_OFFSET(0xF23E1B0)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_D9DAE79D59FEF952_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF23E120)

inline static constexpr unsigned int Class_2_381CDB59D9B2A7EB_Class_1_D9DAE79D59FEF952_1_TypeDefinitionIndex = 68501;

class Class_2_381CDB59D9B2A7EB_Class_1_D9DAE79D59FEF952_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* Field_1_7; // 0x10
	::System::Action_2<::Class_3_025FF4981524A424_485*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_D9DAE79D59FEF952_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9DC0BB323151745(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_D9DAE79D59FEF952_1_METHOD_1_B9DC0BB323151745_OFFSET))(this, a1);
	}
};
