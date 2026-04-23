#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D16B8A42F6BB9A9F_StoryCharacterType.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_D16B8A42F6BB9A9F_CLASS_1_95385AF34FE31713__CTOR_OFFSET UNITYSDK_OFFSET(0x11A0AB00)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F_Class_1_95385AF34FE31713_TypeDefinitionIndex = 55986;

class Class_1_D16B8A42F6BB9A9F_Class_1_95385AF34FE31713 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_6; // 0x10
	::System::String* Field_1_3; // 0x18
	::RPG::GameCore::CreateCharacter* Field_1_0; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::GameCore::NPCSubType Field_1_5; // 0x38
	::Class_1_D16B8A42F6BB9A9F_StoryCharacterType Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F_CLASS_1_95385AF34FE31713__CTOR_OFFSET))(this);
	}
};
