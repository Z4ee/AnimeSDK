#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }

#define CLASS_1_0A0B50D6899733CD___C_METHOD_1_4787B5923772A74F_OFFSET UNITYSDK_OFFSET(0x12CD0E10)
#define CLASS_1_0A0B50D6899733CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CD0DC0)
#define CLASS_1_0A0B50D6899733CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD0E00)

inline static constexpr unsigned int Class_1_0A0B50D6899733CD___c_TypeDefinitionIndex = 89262;

class Class_1_0A0B50D6899733CD___c : public ::System::Object
{
public:
	static ::Class_1_0A0B50D6899733CD___c** StaticGet___9()
	{
		return (::Class_1_0A0B50D6899733CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A0B50D6899733CD___c_TypeDefinitionIndex)->GetStaticField(0x49660);
	}
	static ::System::Text::RegularExpressions::MatchEvaluator** StaticGet___9__40_0()
	{
		return (::System::Text::RegularExpressions::MatchEvaluator**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A0B50D6899733CD___c_TypeDefinitionIndex)->GetStaticField(0x49668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A0B50D6899733CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A0B50D6899733CD___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4787B5923772A74F(::System::Text::RegularExpressions::Match* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + CLASS_1_0A0B50D6899733CD___C_METHOD_1_4787B5923772A74F_OFFSET))(this, a1);
	}
};
