#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/UltraSkillAlertType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8B83CE81FFD7409A__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDD9F0)

inline static constexpr unsigned int Class_1_8B83CE81FFD7409A_TypeDefinitionIndex = 60055;

class Class_1_8B83CE81FFD7409A : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::RPG::GameCore::BattleAlertType Field_1_4; // 0x28
	::RPG::GameCore::UltraSkillAlertType Field_1_5; // 0x2C
	::RPG::GameCore::SkillType Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B83CE81FFD7409A__CTOR_OFFSET))(this);
	}
};
