#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B8811FC98169DA6_METHOD_1_27C3071E1C41979E_OFFSET UNITYSDK_OFFSET(0xAB0B640)
#define CLASS_1_3B8811FC98169DA6_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0xAB0B4F0)
#define CLASS_1_3B8811FC98169DA6_METHOD_1_A331D4D28249FB17_OFFSET UNITYSDK_OFFSET(0xAB0B860)
#define CLASS_1_3B8811FC98169DA6__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0B7C0)

inline static constexpr unsigned int Class_1_3B8811FC98169DA6_TypeDefinitionIndex = 52348;

class Class_1_3B8811FC98169DA6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B8811FC98169DA6__CTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_5* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_45BB92167AED63A0_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B8811FC98169DA6_METHOD_1_2F8C1CDF056C52FC_OFFSET))(this);
	}

	static ::Class_1_3B8811FC98169DA6* Method_1_27C3071E1C41979E(::Class_1_45BB92167AED63A0_5* a1)
	{
		return ((::Class_1_3B8811FC98169DA6*(*)(::Class_1_45BB92167AED63A0_5*))((::PBYTE)hIl2Cpp + CLASS_1_3B8811FC98169DA6_METHOD_1_27C3071E1C41979E_OFFSET))(a1);
	}

	::System::Void Method_1_A331D4D28249FB17(::Class_1_3B8811FC98169DA6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B8811FC98169DA6*))((::PBYTE)hIl2Cpp + CLASS_1_3B8811FC98169DA6_METHOD_1_A331D4D28249FB17_OFFSET))(this, a1);
	}
};
