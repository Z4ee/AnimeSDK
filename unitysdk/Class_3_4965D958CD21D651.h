#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8093DC924CF290B6.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"

class Class_1_E750E5E5D854E770;
class Class_1_F3CA30716D4FAF92_13;
namespace RPG::Client::Textmap::Parameter::Compiler::Syntax { template <typename T> class TextmapSyntaxVisitor_1; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_4965D958CD21D651_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x105CFDE0)
#define CLASS_3_4965D958CD21D651_GET_VALUETEXT_OFFSET UNITYSDK_OFFSET(0x105CFE50)
#define CLASS_3_4965D958CD21D651_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x105CFE30)
#define CLASS_3_4965D958CD21D651_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x105CFD70)
#define CLASS_3_4965D958CD21D651_METHOD_3_349D5C996EEA3E1F_OFFSET UNITYSDK_OFFSET(0x105CFB00)
#define CLASS_3_4965D958CD21D651_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x105CFE70)
#define CLASS_3_4965D958CD21D651_METHOD_3_96D983E8CE2558AB_OFFSET UNITYSDK_OFFSET(0x105CFBB0)
#define CLASS_3_4965D958CD21D651_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x105CFCE0)
#define CLASS_3_4965D958CD21D651_METHOD_3_B95515B9CD4B321A_OFFSET UNITYSDK_OFFSET(0x105CFF70)
#define CLASS_3_4965D958CD21D651_METHOD_3_BB78C47882CCA6F8_OFFSET UNITYSDK_OFFSET(0x105CFD20)
#define CLASS_3_4965D958CD21D651_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x105CFF80)
#define CLASS_3_4965D958CD21D651_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x105CFC80)
#define CLASS_3_4965D958CD21D651_TOSTRING_OFFSET UNITYSDK_OFFSET(0x105CFC20)
#define CLASS_3_4965D958CD21D651__CTOR_OFFSET UNITYSDK_OFFSET(0x105CFEE0)
#define CLASS_3_4965D958CD21D651___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x105CFEF0)

inline static constexpr unsigned int Class_3_4965D958CD21D651_TypeDefinitionIndex = 60172;

class Class_3_4965D958CD21D651 : public ::Class_2_8093DC924CF290B6
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_349D5C996EEA3E1F(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_349D5C996EEA3E1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_96D983E8CE2558AB(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_96D983E8CE2558AB_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_3_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_1_E750E5E5D854E770* Method_3_BB78C47882CCA6F8(::System::Int32 a1)
	{
		return ((::Class_1_E750E5E5D854E770*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_BB78C47882CCA6F8_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_F3CA30716D4FAF92_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_13*))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::String* get_Text()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_GET_TEXT_OFFSET))(this);
	}

	::System::Object* get_Value()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_GET_VALUE_OFFSET))(this);
	}

	::System::String* get_ValueText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_GET_VALUETEXT_OFFSET))(this);
	}

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_3_B95515B9CD4B321A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_B95515B9CD4B321A_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}
};
