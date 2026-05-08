#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_62958F5B255030E3_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x119A0EA0)
#define CLASS_4_62958F5B255030E3_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x119A0510)
#define CLASS_4_62958F5B255030E3_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x119A06C0)
#define CLASS_4_62958F5B255030E3__CTOR_OFFSET UNITYSDK_OFFSET(0x119A0D10)

inline static constexpr unsigned int Class_4_62958F5B255030E3_TypeDefinitionIndex = 43796;

class Class_4_62958F5B255030E3 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_2; // 0x38
	::Class_3_B537A0AA78803363* Field_4_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_62958F5B255030E3_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
