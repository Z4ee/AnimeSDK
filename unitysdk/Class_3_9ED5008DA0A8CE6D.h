#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDicePair; }

#define CLASS_3_9ED5008DA0A8CE6D_METHOD_3_AC3D041EA6F5D8CC_OFFSET UNITYSDK_OFFSET(0x17D483D0)
#define CLASS_3_9ED5008DA0A8CE6D__CTOR_OFFSET UNITYSDK_OFFSET(0x17D483B0)

inline static constexpr unsigned int Class_3_9ED5008DA0A8CE6D_TypeDefinitionIndex = 34127;

class Class_3_9ED5008DA0A8CE6D : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_9ED5008DA0A8CE6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_AC3D041EA6F5D8CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9ED5008DA0A8CE6D_METHOD_3_AC3D041EA6F5D8CC_OFFSET))(this);
	}
};
