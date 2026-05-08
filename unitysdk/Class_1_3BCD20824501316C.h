#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_459;
class Class_2_A413755ABC47F29F;
namespace System { class String; }

#define CLASS_1_3BCD20824501316C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11435BD0)
#define CLASS_1_3BCD20824501316C_METHOD_1_62B120850052789D_OFFSET UNITYSDK_OFFSET(0x11435940)
#define CLASS_1_3BCD20824501316C_METHOD_1_8B765A3736CAE06D_OFFSET UNITYSDK_OFFSET(0x11435B70)
#define CLASS_1_3BCD20824501316C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11435AE0)
#define CLASS_1_3BCD20824501316C__CTOR_OFFSET UNITYSDK_OFFSET(0x11435930)

inline static constexpr unsigned int Class_1_3BCD20824501316C_TypeDefinitionIndex = 57787;

class Class_1_3BCD20824501316C : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_459*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_459*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_459*>*))((::PBYTE)hIl2Cpp + CLASS_1_3BCD20824501316C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_62B120850052789D(::Class_2_A413755ABC47F29F* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A413755ABC47F29F*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_3BCD20824501316C_METHOD_1_62B120850052789D_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCD20824501316C_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_8B765A3736CAE06D(::Class_2_A413755ABC47F29F* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A413755ABC47F29F*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_3BCD20824501316C_METHOD_1_8B765A3736CAE06D_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCD20824501316C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
