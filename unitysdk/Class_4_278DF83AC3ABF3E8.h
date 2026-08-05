#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_278DF83AC3ABF3E8_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1644E420)
#define CLASS_4_278DF83AC3ABF3E8_METHOD_4_286D0F6CBE978F4F_OFFSET UNITYSDK_OFFSET(0x1644D4A0)
#define CLASS_4_278DF83AC3ABF3E8_METHOD_4_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x1644CF40)
#define CLASS_4_278DF83AC3ABF3E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1644DF30)

inline static constexpr unsigned int Class_4_278DF83AC3ABF3E8_TypeDefinitionIndex = 49535;

class Class_4_278DF83AC3ABF3E8 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_11; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_4; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_4_8; // 0x40
	::Class_3_CF43FA1E89397A1C* Field_4_15; // 0x48
	::Class_3_B537A0AA78803363* Field_4_9; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_6; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_5; // 0x60
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x68
	::Class_3_B537A0AA78803363* Field_4_13; // 0x70
	::Class_3_CF43FA1E89397A1C* Field_4_10; // 0x78
	::Class_3_B537A0AA78803363* Field_4_14; // 0x80
	::Class_3_DCB7F8B839F0C44B_4* Field_4_2; // 0x88
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_7; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_278DF83AC3ABF3E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_672D56D99D734395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_278DF83AC3ABF3E8_METHOD_4_672D56D99D734395_OFFSET))(this);
	}

	::System::Void Method_4_286D0F6CBE978F4F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_278DF83AC3ABF3E8_METHOD_4_286D0F6CBE978F4F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_278DF83AC3ABF3E8_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
