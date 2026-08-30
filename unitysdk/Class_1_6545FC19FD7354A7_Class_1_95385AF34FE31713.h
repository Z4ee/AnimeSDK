#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6545FC19FD7354A7_StoryCharacterType.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_6545FC19FD7354A7_CLASS_1_95385AF34FE31713__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8E1B0)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7_Class_1_95385AF34FE31713_TypeDefinitionIndex = 60816;

class Class_1_6545FC19FD7354A7_Class_1_95385AF34FE31713 : public ::System::Object
{
public:
	::System::String* EPGBFPKDFNF; // 0x10
	::System::String* LIGGALJGCFH; // 0x18
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
	::RPG::GameCore::CreateCharacter* LPLGFNAGHON; // 0x28
	::System::String* OJDMHBKCEEM; // 0x30
	::RPG::GameCore::NPCSubType KCEMHIBMNGH; // 0x38
	::Class_1_6545FC19FD7354A7_StoryCharacterType FMCILNHKMNO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7_CLASS_1_95385AF34FE31713__CTOR_OFFSET))(this);
	}
};
