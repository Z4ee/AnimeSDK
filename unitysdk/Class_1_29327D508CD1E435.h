#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillCharacterComponent; }

#define CLASS_1_29327D508CD1E435__CTOR_OFFSET UNITYSDK_OFFSET(0x1169B630)

inline static constexpr unsigned int Class_1_29327D508CD1E435_TypeDefinitionIndex = 44743;

class Class_1_29327D508CD1E435 : public ::System::Object
{
public:
	::RPG::GameCore::SkillCharacterComponent* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_3; // 0x18
	::RPG::GameCore::SkillType Field_1_1; // 0x28
	::RPG::GameCore::ControlSkillType Field_1_2; // 0x2C
	::RPG::Client::TextID Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29327D508CD1E435__CTOR_OFFSET))(this);
	}
};
