#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8093DC924CF290B6.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"

class Class_1_E750E5E5D854E770;
class Class_1_F3CA30716D4FAF92_23;
namespace RPG::Client::Textmap::Parameter::Compiler::Syntax { template <typename T> class TextmapSyntaxVisitor_1; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_4965D958CD21D651_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x12578CA0)
#define CLASS_3_4965D958CD21D651_GET_VALUETEXT_OFFSET UNITYSDK_OFFSET(0x12578D10)
#define CLASS_3_4965D958CD21D651_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x12578CF0)
#define CLASS_3_4965D958CD21D651_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x12578C30)
#define CLASS_3_4965D958CD21D651_METHOD_3_349D5C996EEA3E1F_OFFSET UNITYSDK_OFFSET(0x12578A20)
#define CLASS_3_4965D958CD21D651_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12578D30)
#define CLASS_3_4965D958CD21D651_METHOD_3_96D983E8CE2558AB_OFFSET UNITYSDK_OFFSET(0x12578AD0)
#define CLASS_3_4965D958CD21D651_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12578BA0)
#define CLASS_3_4965D958CD21D651_METHOD_3_BB78C47882CCA6F8_OFFSET UNITYSDK_OFFSET(0x12578BE0)
#define CLASS_3_4965D958CD21D651_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12578E40)
#define CLASS_3_4965D958CD21D651_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x12578B40)
#define CLASS_3_4965D958CD21D651_METHOD_3_F6875811E5227469_OFFSET UNITYSDK_OFFSET(0x12578E30)
#define CLASS_3_4965D958CD21D651_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12566130)
#define CLASS_3_4965D958CD21D651__CTOR_OFFSET UNITYSDK_OFFSET(0x12578DA0)
#define CLASS_3_4965D958CD21D651___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12578DB0)

inline static constexpr unsigned int Class_3_4965D958CD21D651_TypeDefinitionIndex = 67605;

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

	::System::Void Method_3_097468641FDED14E(::Class_1_F3CA30716D4FAF92_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_23*))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
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

	::System::String* Method_3_F6875811E5227469()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_F6875811E5227469_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4965D958CD21D651_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}
};
