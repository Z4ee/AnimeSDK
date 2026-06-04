#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_598;
class Class_2_53B7DA6B50203A3E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D88B5114427A0B2_GET__CONDITIONS_OFFSET UNITYSDK_OFFSET(0xAAC8810)
#define CLASS_1_8D88B5114427A0B2_GET__EXPRESSION_OFFSET UNITYSDK_OFFSET(0xAAC8800)
#define CLASS_1_8D88B5114427A0B2_METHOD_1_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0xAAC8910)
#define CLASS_1_8D88B5114427A0B2_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xAAC8830)
#define CLASS_1_8D88B5114427A0B2__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC8820)

inline static constexpr unsigned int Class_1_8D88B5114427A0B2_TypeDefinitionIndex = 59212;

class Class_1_8D88B5114427A0B2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* __Conditions_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_598* __Expression_k__BackingField; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_598* a1, ::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_598*, ::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D88B5114427A0B2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_598* get__Expression()
	{
		return ((::Class_0_16E4307DCC419505_598*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D88B5114427A0B2_GET__EXPRESSION_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* get__Conditions()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D88B5114427A0B2_GET__CONDITIONS_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D88B5114427A0B2_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_1_0094A08E076C3CCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D88B5114427A0B2_METHOD_1_0094A08E076C3CCD_OFFSET))(this);
	}
};
