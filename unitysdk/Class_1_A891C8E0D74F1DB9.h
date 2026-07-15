#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_A891C8E0D74F1DB9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14CDD460)
#define CLASS_1_A891C8E0D74F1DB9__CTOR_OFFSET UNITYSDK_OFFSET(0x14CDD4C0)

inline static constexpr unsigned int Class_1_A891C8E0D74F1DB9_TypeDefinitionIndex = 53691;

class Class_1_A891C8E0D74F1DB9 : public ::System::Object
{
public:
	::RPG::GameCore::SkillCharacterComponent* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Single Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A891C8E0D74F1DB9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A891C8E0D74F1DB9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
