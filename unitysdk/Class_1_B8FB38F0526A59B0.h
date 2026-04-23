#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/Struct_2_2B6684D3E43696AE.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B8FB38F0526A59B0__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5B720)

inline static constexpr unsigned int Class_1_B8FB38F0526A59B0_TypeDefinitionIndex = 52460;

class Class_1_B8FB38F0526A59B0 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterConfig* Field_1_4; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_9; // 0x20
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_10; // 0x28
	::RPG::GameCore::GameEntity* Field_1_1; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::Enum_3_ED790DAC948A65A9_3 Field_1_0; // 0x44
	::RPG::GameCore::TeamLocationType Field_1_7; // 0x48
	::System::UInt32 Field_1_3; // 0x4C
	::Struct_2_2B6684D3E43696AE Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FB38F0526A59B0__CTOR_OFFSET))(this);
	}
};
