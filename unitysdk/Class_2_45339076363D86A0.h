#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"

class Class_2_208CC9941471731A_317;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_45339076363D86A0_METHOD_2_89586BD2A98D13C0_OFFSET UNITYSDK_OFFSET(0x18DD0B50)
#define CLASS_2_45339076363D86A0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0B40)

inline static constexpr unsigned int Class_2_45339076363D86A0_TypeDefinitionIndex = 87053;

class Class_2_45339076363D86A0 : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x28
	::System::String* Field_2_6; // 0x30
	::System::Single Field_2_5; // 0x38
	::System::Int32 Field_2_0; // 0x3C
	::System::Int32 Field_2_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45339076363D86A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89586BD2A98D13C0(::Class_2_208CC9941471731A_317* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_317*))((::PBYTE)hIl2Cpp + CLASS_2_45339076363D86A0_METHOD_2_89586BD2A98D13C0_OFFSET))(this, a1);
	}
};
