#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define CLASS_1_634284739E90CAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1677BDF0)

inline static constexpr unsigned int Class_1_634284739E90CAFA_TypeDefinitionIndex = 33692;

class Class_1_634284739E90CAFA : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleEffectConfig* Field_1_5; // 0x10
	::RPG::GameCore::FixPoint Field_1_3; // 0x18
	::RPG::GameCore::FixPoint Field_1_6; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x28
	::RPG::GameCore::ChenLingBattleBuffType Field_1_0; // 0x30
	::System::Boolean Field_1_1; // 0x34
	::RPG::GameCore::FixPoint Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634284739E90CAFA__CTOR_OFFSET))(this);
	}
};
