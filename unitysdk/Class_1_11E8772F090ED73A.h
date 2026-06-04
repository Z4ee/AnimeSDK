#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_11E8772F090ED73A_METHOD_1_5841D69567623C30_OFFSET UNITYSDK_OFFSET(0xB514B20)

inline static constexpr unsigned int Class_1_11E8772F090ED73A_TypeDefinitionIndex = 68561;

class Class_1_11E8772F090ED73A : public ::System::Object
{
public:
	static ::System::String* Method_1_5841D69567623C30(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1)
	{
		return ((::System::String*(*)(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind))((::PBYTE)hIl2Cpp + CLASS_1_11E8772F090ED73A_METHOD_1_5841D69567623C30_OFFSET))(a1);
	}
};
