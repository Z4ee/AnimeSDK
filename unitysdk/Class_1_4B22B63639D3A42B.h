#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_574;
class Class_2_53B7DA6B50203A3E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B22B63639D3A42B_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x9070670)
#define CLASS_1_4B22B63639D3A42B_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x9070680)
#define CLASS_1_4B22B63639D3A42B__CTOR_OFFSET UNITYSDK_OFFSET(0x9070740)

inline static constexpr unsigned int Class_1_4B22B63639D3A42B_TypeDefinitionIndex = 58283;

class Class_1_4B22B63639D3A42B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* _Conditions_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B22B63639D3A42B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* get_Conditions()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B22B63639D3A42B_GET_CONDITIONS_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_574* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_574*))((::PBYTE)hIl2Cpp + CLASS_1_4B22B63639D3A42B_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
