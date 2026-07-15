#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System { class String; }

#define CLASS_1_14EB5DEA5CB00924__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8BF80)

inline static constexpr unsigned int Class_1_14EB5DEA5CB00924_TypeDefinitionIndex = 53307;

class Class_1_14EB5DEA5CB00924 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::SkillCharacterComponent* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x30
	::RPG::GameCore::ControlSkillType Field_1_4; // 0x40
	::RPG::GameCore::SkillType Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14EB5DEA5CB00924__CTOR_OFFSET))(this);
	}
};
