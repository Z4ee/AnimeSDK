#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8093DC924CF290B6.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"

class Class_1_24A0F23B32CAAA77;
class Class_1_E750E5E5D854E770;
namespace RPG::Client::Textmap::Parameter::Compiler::Syntax { template <typename T> class TextmapSyntaxVisitor_1; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_4965D958CD21D651_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x19C1F7F0)
#define CLASS_3_4965D958CD21D651_GET_VALUETEXT_OFFSET UNITYSDK_OFFSET(0x19C1F930)
#define CLASS_3_4965D958CD21D651_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19C1F870)
#define CLASS_3_4965D958CD21D651_METHOD_3_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x19C1F5D0)
#define CLASS_3_4965D958CD21D651_METHOD_3_349D5C996EEA3E1F_OFFSET UNITYSDK_OFFSET(0x19C1F3F0)
#define CLASS_3_4965D958CD21D651_METHOD_3_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0x19C1F720)
#define CLASS_3_4965D958CD21D651_METHOD_3_96D983E8CE2558AB_OFFSET UNITYSDK_OFFSET(0x19C1F4A0)
#define CLASS_3_4965D958CD21D651_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x19C1F690)
#define CLASS_3_4965D958CD21D651_METHOD_3_BB78C47882CCA6F8_OFFSET UNITYSDK_OFFSET(0x19C1F6D0)
#define CLASS_3_4965D958CD21D651_METHOD_3_F6E6E622B53160EC_OFFSET UNITYSDK_OFFSET(0x19C1F9F0)
#define CLASS_3_4965D958CD21D651_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C1F510)
#define CLASS_3_4965D958CD21D651__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1FAD0)

inline static constexpr unsigned int Class_3_4965D958CD21D651_TypeDefinitionIndex = 73316;

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

	::System::String* Method_3_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_1_E750E5E5D854E770* Method_3_BB78C47882CCA6F8(::System::Int32 a1)
	{
		return ((::Class_1_E750E5E5D854E770*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_BB78C47882CCA6F8_OFFSET))(this, a1);
	}

	::System::Void Method_3_50884DFE76178C82(::Class_1_24A0F23B32CAAA77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24A0F23B32CAAA77*))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_50884DFE76178C82_OFFSET))(this, a1);
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

	::System::Int32 Method_3_F6E6E622B53160EC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_F6E6E622B53160EC_OFFSET))(this);
	}
};
