#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_72738EC51CD51A46_METHOD_1_0E9E253EC7D87349_OFFSET UNITYSDK_OFFSET(0x1504FB20)
#define CLASS_1_72738EC51CD51A46_METHOD_1_27C3071E1C41979E_OFFSET UNITYSDK_OFFSET(0x1504F8E0)
#define CLASS_1_72738EC51CD51A46_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0x1504F790)
#define CLASS_1_72738EC51CD51A46__CTOR_OFFSET UNITYSDK_OFFSET(0x1504FA70)

inline static constexpr unsigned int Class_1_72738EC51CD51A46_TypeDefinitionIndex = 53552;

class Class_1_72738EC51CD51A46 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72738EC51CD51A46__CTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_6* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_45BB92167AED63A0_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72738EC51CD51A46_METHOD_1_2F8C1CDF056C52FC_OFFSET))(this);
	}

	static ::Class_1_72738EC51CD51A46* Method_1_27C3071E1C41979E(::Class_1_45BB92167AED63A0_6* a1)
	{
		return ((::Class_1_72738EC51CD51A46*(*)(::Class_1_45BB92167AED63A0_6*))((::PBYTE)hIl2Cpp + CLASS_1_72738EC51CD51A46_METHOD_1_27C3071E1C41979E_OFFSET))(a1);
	}

	::System::Void Method_1_0E9E253EC7D87349(::Class_1_72738EC51CD51A46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72738EC51CD51A46*))((::PBYTE)hIl2Cpp + CLASS_1_72738EC51CD51A46_METHOD_1_0E9E253EC7D87349_OFFSET))(this, a1);
	}
};
