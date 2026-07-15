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

#define CLASS_1_B8FB38F0526A59B0__CTOR_OFFSET UNITYSDK_OFFSET(0x157E9220)

inline static constexpr unsigned int Class_1_B8FB38F0526A59B0_TypeDefinitionIndex = 54374;

class Class_1_B8FB38F0526A59B0 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterConfig* Field_1_0; // 0x10
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::Struct_2_2B6684D3E43696AE Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x4C
	::RPG::GameCore::TeamLocationType Field_1_9; // 0x50
	::Enum_3_ED790DAC948A65A9_3 Field_1_10; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FB38F0526A59B0__CTOR_OFFSET))(this);
	}
};
