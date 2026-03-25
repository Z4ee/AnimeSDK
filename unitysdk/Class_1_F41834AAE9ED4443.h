#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_F41834AAE9ED4443__CTOR_OFFSET UNITYSDK_OFFSET(0xAC4F9B0)

inline static constexpr unsigned int Class_1_F41834AAE9ED4443_TypeDefinitionIndex = 58857;

class Class_1_F41834AAE9ED4443 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::RPG::GameCore::ControlSkillType Field_1_4; // 0x2C
	::System::Single Field_1_6; // 0x30
	::RPG::GameCore::SkillButtonAdditionalStatusType Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41834AAE9ED4443__CTOR_OFFSET))(this);
	}
};
