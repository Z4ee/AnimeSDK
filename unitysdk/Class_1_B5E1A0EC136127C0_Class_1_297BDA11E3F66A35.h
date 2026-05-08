#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ACB2ABA66F2BACE6_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5E8D7F836DA392F9;
class Class_1_B5E1A0EC136127C0_Class_1_DC01E1F07A0475E5_30;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5E1A0EC136127C0_CLASS_1_297BDA11E3F66A35_METHOD_1_7C711EEA7B564E7F_OFFSET UNITYSDK_OFFSET(0x19811250)
#define CLASS_1_B5E1A0EC136127C0_CLASS_1_297BDA11E3F66A35__CTOR_OFFSET UNITYSDK_OFFSET(0x19811240)

inline static constexpr unsigned int Class_1_B5E1A0EC136127C0_Class_1_297BDA11E3F66A35_TypeDefinitionIndex = 83831;

class Class_1_B5E1A0EC136127C0_Class_1_297BDA11E3F66A35 : public ::System::Object
{
public:
	::Class_1_5E8D7F836DA392F9* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_1>*>* Field_1_2; // 0x18
	::Class_1_B5E1A0EC136127C0_Class_1_DC01E1F07A0475E5_30* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5E1A0EC136127C0_CLASS_1_297BDA11E3F66A35__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7C711EEA7B564E7F(::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_ACB2ABA66F2BACE6_1>*))((::PBYTE)hIl2Cpp + CLASS_1_B5E1A0EC136127C0_CLASS_1_297BDA11E3F66A35_METHOD_1_7C711EEA7B564E7F_OFFSET))(this, a1);
	}
};
