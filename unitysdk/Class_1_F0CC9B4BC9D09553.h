#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35773781C440DDD9;
class Class_1_C65CD064CE09212F;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0CC9B4BC9D09553_METHOD_1_0763214439B2380F_OFFSET UNITYSDK_OFFSET(0x126CE390)
#define CLASS_1_F0CC9B4BC9D09553_METHOD_1_0FDDCB15B5834921_OFFSET UNITYSDK_OFFSET(0x126CEA90)
#define CLASS_1_F0CC9B4BC9D09553_METHOD_1_74CD381927834F4C_OFFSET UNITYSDK_OFFSET(0x126CE6B0)
#define CLASS_1_F0CC9B4BC9D09553_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x126CE040)
#define CLASS_1_F0CC9B4BC9D09553_METHOD_1_D4F5E7473201E02D_OFFSET UNITYSDK_OFFSET(0x126CE8E0)
#define CLASS_1_F0CC9B4BC9D09553_METHOD_1_DDD09B16B4D0A346_OFFSET UNITYSDK_OFFSET(0x126CE860)
#define CLASS_1_F0CC9B4BC9D09553__CTOR_OFFSET UNITYSDK_OFFSET(0x126CDFC0)

inline static constexpr unsigned int Class_1_F0CC9B4BC9D09553_TypeDefinitionIndex = 48628;

class Class_1_F0CC9B4BC9D09553 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_35773781C440DDD9*>* Field_1_0; // 0x10
	::Class_1_C65CD064CE09212F* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_0763214439B2380F(::System::Single a1, ::System::Action* a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553_METHOD_1_0763214439B2380F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_74CD381927834F4C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553_METHOD_1_74CD381927834F4C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DDD09B16B4D0A346(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553_METHOD_1_DDD09B16B4D0A346_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D4F5E7473201E02D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553_METHOD_1_D4F5E7473201E02D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FDDCB15B5834921(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F0CC9B4BC9D09553_METHOD_1_0FDDCB15B5834921_OFFSET))(this, a1);
	}
};
