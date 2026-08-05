#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_806C38C50E9F30A7_Enum_3_F045E4FCF4670CEA.h"
#include "unitysdk/Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7.h"
#include "unitysdk/System/Object.h"

class Class_3_806C38C50E9F30A7;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_806C38C50E9F30A7_CLASS_1_00B30B1EEF9C315B_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x186EE260)
#define CLASS_3_806C38C50E9F30A7_CLASS_1_00B30B1EEF9C315B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x186EE210)
#define CLASS_3_806C38C50E9F30A7_CLASS_1_00B30B1EEF9C315B__CTOR_OFFSET UNITYSDK_OFFSET(0x186EE1F0)

inline static constexpr unsigned int Class_3_806C38C50E9F30A7_Class_1_00B30B1EEF9C315B_TypeDefinitionIndex = 85171;

class Class_3_806C38C50E9F30A7_Class_1_00B30B1EEF9C315B : public ::System::Object
{
public:
	::System::Action_2<::Class_3_806C38C50E9F30A7*, ::Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7>* Field_1_7; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::Class_3_806C38C50E9F30A7_Enum_3_F045E4FCF4670CEA Field_1_0; // 0x20

	::System::Void _ctor(::System::Single a1, ::Class_3_806C38C50E9F30A7_Enum_3_F045E4FCF4670CEA a2, ::System::Boolean a3, ::System::Action_2<::Class_3_806C38C50E9F30A7*, ::Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_3_806C38C50E9F30A7_Enum_3_F045E4FCF4670CEA, ::System::Boolean, ::System::Action_2<::Class_3_806C38C50E9F30A7*, ::Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7>*))((::PBYTE)hIl2Cpp + CLASS_3_806C38C50E9F30A7_CLASS_1_00B30B1EEF9C315B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_806C38C50E9F30A7_CLASS_1_00B30B1EEF9C315B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_806C38C50E9F30A7_CLASS_1_00B30B1EEF9C315B_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
