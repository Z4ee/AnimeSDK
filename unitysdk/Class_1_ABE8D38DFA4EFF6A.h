#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_ABE8D38DFA4EFF6A_METHOD_1_76CE385B21223156_OFFSET UNITYSDK_OFFSET(0x1BF4FD30)
#define CLASS_1_ABE8D38DFA4EFF6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF4FE70)

inline static constexpr unsigned int Class_1_ABE8D38DFA4EFF6A_TypeDefinitionIndex = 11525;

class Class_1_ABE8D38DFA4EFF6A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::MatchThreeV2ConditionType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABE8D38DFA4EFF6A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_76CE385B21223156(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_ABE8D38DFA4EFF6A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_ABE8D38DFA4EFF6A*&))((::PBYTE)hIl2Cpp + CLASS_1_ABE8D38DFA4EFF6A_METHOD_1_76CE385B21223156_OFFSET))(a1, a2);
	}
};
