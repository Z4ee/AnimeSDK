#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDicePair; }

#define CLASS_3_9ED5008DA0A8CE6D_METHOD_3_9DC685F3E3A2FC2F_OFFSET UNITYSDK_OFFSET(0x18ACBDD0)
#define CLASS_3_9ED5008DA0A8CE6D__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACBDB0)

inline static constexpr unsigned int Class_3_9ED5008DA0A8CE6D_TypeDefinitionIndex = 34409;

class Class_3_9ED5008DA0A8CE6D : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_9ED5008DA0A8CE6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9DC685F3E3A2FC2F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9ED5008DA0A8CE6D_METHOD_3_9DC685F3E3A2FC2F_OFFSET))(this);
	}
};
