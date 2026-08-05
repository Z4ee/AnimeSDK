#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_C7DB129893133198;
class Class_4_425BBC3CBFD638A0;
namespace MoleMole::Config { class ConfigDynamicValueString; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_38FCF382BA8D9214_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF636490)
#define CLASS_4_38FCF382BA8D9214_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xF635900)
#define CLASS_4_38FCF382BA8D9214_METHOD_4_71CEF9041F251366_OFFSET UNITYSDK_OFFSET(0xF635AB0)
#define CLASS_4_38FCF382BA8D9214__CTOR_OFFSET UNITYSDK_OFFSET(0xF6362E0)

inline static constexpr unsigned int Class_4_38FCF382BA8D9214_TypeDefinitionIndex = 91488;

class Class_4_38FCF382BA8D9214 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x28
	::MoleMole::Config::ConfigDynamicValueString* Field_4_4; // 0x30
	::Class_1_C7DB129893133198* Field_4_5; // 0x38
	::Class_4_425BBC3CBFD638A0* Field_4_7; // 0x40
	::Class_4_8D3E479B491881B3<::Foundation::ViewObject::ViewObjectHandle>* Field_4_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_71CEF9041F251366(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214_METHOD_4_71CEF9041F251366_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_38FCF382BA8D9214_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
