#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_43BD383C98B4C0C5_49;
class Class_2_72BDD67FEA972F1C;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_A43410A50E7ACF82_METHOD_4_00FA0F792D646489_OFFSET UNITYSDK_OFFSET(0x17204D10)
#define CLASS_4_A43410A50E7ACF82_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x172050D0)
#define CLASS_4_A43410A50E7ACF82_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17203DF0)
#define CLASS_4_A43410A50E7ACF82_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x17203ED0)
#define CLASS_4_A43410A50E7ACF82_METHOD_4_830596263A3816AA_OFFSET UNITYSDK_OFFSET(0x17204700)
#define CLASS_4_A43410A50E7ACF82_METHOD_4_EC02C4ADC7E4B586_OFFSET UNITYSDK_OFFSET(0x17204BC0)
#define CLASS_4_A43410A50E7ACF82__CTOR_OFFSET UNITYSDK_OFFSET(0x17204C20)

inline static constexpr unsigned int Class_4_A43410A50E7ACF82_TypeDefinitionIndex = 75757;

class Class_4_A43410A50E7ACF82 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_00FA0F792D646489(::Struct_2_29439DBE2B63DCF3& a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::Class_1_43BD383C98B4C0C5_49* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_43BD383C98B4C0C5_49*))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82_METHOD_4_00FA0F792D646489_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EC02C4ADC7E4B586(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82_METHOD_4_EC02C4ADC7E4B586_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_830596263A3816AA(::Struct_2_29439DBE2B63DCF3& a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::System::String* a3, ::Class_2_72BDD67FEA972F1C*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::Class_2_72BDD67FEA972F1C*&))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82_METHOD_4_830596263A3816AA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A43410A50E7ACF82_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
