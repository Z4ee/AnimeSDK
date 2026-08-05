#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_415;
class Class_2_E4F99B6EE220D866;
namespace System { class String; }

#define CLASS_1_9058649D81515F81_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13B4BEC0)
#define CLASS_1_9058649D81515F81_1_METHOD_1_53A7CA6D4F332416_OFFSET UNITYSDK_OFFSET(0x13B4BE60)
#define CLASS_1_9058649D81515F81_1_METHOD_1_C37450F58ED34A14_OFFSET UNITYSDK_OFFSET(0x13B4BC30)
#define CLASS_1_9058649D81515F81_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13B4BDD0)
#define CLASS_1_9058649D81515F81_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4BC20)

inline static constexpr unsigned int Class_1_9058649D81515F81_1_TypeDefinitionIndex = 78141;

class Class_1_9058649D81515F81_1 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_415*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_415*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_415*>*))((::PBYTE)hIl2Cpp + CLASS_1_9058649D81515F81_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C37450F58ED34A14(::Class_2_E4F99B6EE220D866* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_E4F99B6EE220D866*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_9058649D81515F81_1_METHOD_1_C37450F58ED34A14_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9058649D81515F81_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_53A7CA6D4F332416(::Class_2_E4F99B6EE220D866* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_E4F99B6EE220D866*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_9058649D81515F81_1_METHOD_1_53A7CA6D4F332416_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9058649D81515F81_1_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
