#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_C7DB129893133198;
class Class_4_425BBC3CBFD638A0;
namespace MoleMole::Config { class ConfigDynamicValueInt; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_1B03886724BD4CD7_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12DC44B0)
#define CLASS_4_1B03886724BD4CD7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12DC4EC0)
#define CLASS_4_1B03886724BD4CD7_METHOD_4_B5CEF7C539A7DC9B_OFFSET UNITYSDK_OFFSET(0x12DC4600)
#define CLASS_4_1B03886724BD4CD7__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC4D50)

inline static constexpr unsigned int Class_4_1B03886724BD4CD7_TypeDefinitionIndex = 74184;

class Class_4_1B03886724BD4CD7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x28
	::Class_4_8D3E479B491881B3<::Foundation::ViewObject::ViewObjectHandle>* Field_4_7; // 0x30
	::MoleMole::Config::ConfigDynamicValueInt* Field_4_5; // 0x38
	::Class_4_425BBC3CBFD638A0* Field_4_0; // 0x40
	::Class_1_C7DB129893133198* Field_4_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_B5CEF7C539A7DC9B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7_METHOD_4_B5CEF7C539A7DC9B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B03886724BD4CD7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
