#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_427F0887CFA33D63_METHOD_2_68053EB4BA68391B_OFFSET UNITYSDK_OFFSET(0x17FEDCE0)
#define CLASS_2_427F0887CFA33D63_METHOD_2_868F0A0DACC62FA0_OFFSET UNITYSDK_OFFSET(0x17FED930)
#define CLASS_2_427F0887CFA33D63_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17FED7D0)
#define CLASS_2_427F0887CFA33D63__CTOR_OFFSET UNITYSDK_OFFSET(0x17FED8D0)

inline static constexpr unsigned int Class_2_427F0887CFA33D63_TypeDefinitionIndex = 76395;

class Class_2_427F0887CFA33D63 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_3; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_0; // 0x68
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_2; // 0x70
	::Class_0_16E4307DCC419505_165<::System::String*>* Field_2_1; // 0x78
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_427F0887CFA33D63__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_427F0887CFA33D63_ONCREATEPROPERTY_OFFSET))(this);
	}

	static ::Class_2_427F0887CFA33D63* Method_2_868F0A0DACC62FA0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_427F0887CFA33D63*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_427F0887CFA33D63_METHOD_2_868F0A0DACC62FA0_OFFSET))(a1, a2);
	}

	::System::Void Method_2_68053EB4BA68391B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_427F0887CFA33D63_METHOD_2_68053EB4BA68391B_OFFSET))(this, a1);
	}
};
