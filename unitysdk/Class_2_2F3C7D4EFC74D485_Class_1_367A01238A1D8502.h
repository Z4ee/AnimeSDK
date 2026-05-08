#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_2F3C7D4EFC74D485;
class Class_3_85E378EB440ADAD4_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_367A01238A1D8502_METHOD_1_842F6F8D139C672A_OFFSET UNITYSDK_OFFSET(0x1365D5C0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_367A01238A1D8502_METHOD_1_B3BCFE72DF2C5725_OFFSET UNITYSDK_OFFSET(0x1365D250)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_367A01238A1D8502__CTOR_OFFSET UNITYSDK_OFFSET(0x1365D240)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_367A01238A1D8502_TypeDefinitionIndex = 49474;

class Class_2_2F3C7D4EFC74D485_Class_1_367A01238A1D8502 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_2; // 0x10
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x18
	::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_367A01238A1D8502__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B3BCFE72DF2C5725(::Class_3_85E378EB440ADAD4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_85E378EB440ADAD4_1*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_367A01238A1D8502_METHOD_1_B3BCFE72DF2C5725_OFFSET))(this, a1);
	}

	::System::Void Method_1_842F6F8D139C672A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_367A01238A1D8502_METHOD_1_842F6F8D139C672A_OFFSET))(this, a1);
	}
};
