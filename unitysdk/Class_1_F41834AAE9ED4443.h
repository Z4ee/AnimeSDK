#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_F41834AAE9ED4443__CTOR_OFFSET UNITYSDK_OFFSET(0x14367560)

inline static constexpr unsigned int Class_1_F41834AAE9ED4443_TypeDefinitionIndex = 67163;

class Class_1_F41834AAE9ED4443 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::RPG::GameCore::ControlSkillType Field_1_5; // 0x30
	::RPG::GameCore::SkillButtonAdditionalStatusType Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41834AAE9ED4443__CTOR_OFFSET))(this);
	}
};
