#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_2D840ACC53E2309C_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14EF09B0)
#define CLASS_4_2D840ACC53E2309C_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x14EEFE90)
#define CLASS_4_2D840ACC53E2309C_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x14EF01B0)
#define CLASS_4_2D840ACC53E2309C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF0760)

inline static constexpr unsigned int Class_4_2D840ACC53E2309C_TypeDefinitionIndex = 65168;

class Class_4_2D840ACC53E2309C : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_11; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_10; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_4; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x50
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D840ACC53E2309C__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D840ACC53E2309C_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2D840ACC53E2309C_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D840ACC53E2309C_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
