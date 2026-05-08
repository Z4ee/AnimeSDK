#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"
#include "unitysdk/System/Object.h"

class Class_2_A413755ABC47F29F;
namespace System { class String; }

#define CLASS_1_693B3FC0CFD953AC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x135C39E0)
#define CLASS_1_693B3FC0CFD953AC_METHOD_1_8A93BB9B7CF2E7CD_1_OFFSET UNITYSDK_OFFSET(0x135C3950)
#define CLASS_1_693B3FC0CFD953AC_METHOD_1_8A93BB9B7CF2E7CD_OFFSET UNITYSDK_OFFSET(0x135C38A0)
#define CLASS_1_693B3FC0CFD953AC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135C3910)
#define CLASS_1_693B3FC0CFD953AC__CTOR_OFFSET UNITYSDK_OFFSET(0x135C3870)

inline static constexpr unsigned int Class_1_693B3FC0CFD953AC_TypeDefinitionIndex = 77507;

class Class_1_693B3FC0CFD953AC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_693B3FC0CFD953AC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A93BB9B7CF2E7CD(::Class_2_A413755ABC47F29F* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A413755ABC47F29F*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_693B3FC0CFD953AC_METHOD_1_8A93BB9B7CF2E7CD_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_693B3FC0CFD953AC_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_8A93BB9B7CF2E7CD_1(::Class_2_A413755ABC47F29F* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A413755ABC47F29F*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_693B3FC0CFD953AC_METHOD_1_8A93BB9B7CF2E7CD_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_693B3FC0CFD953AC_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
