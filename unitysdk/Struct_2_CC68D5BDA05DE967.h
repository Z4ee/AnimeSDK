#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0E0403D2B5AD79E8;
class Class_1_E754E66360B8422F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }

inline static constexpr unsigned int Struct_2_CC68D5BDA05DE967_TypeDefinitionIndex = 51802;

struct alignas(8) Struct_2_CC68D5BDA05DE967
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::System::UInt32 Field_2_3; // 0x20
	::RPG::GameCore::TeamType Field_2_4; // 0x24
	::RPG::GameCore::FixVec3 Field_2_5; // 0x28
	::RPG::GameCore::IVec2 Field_2_6; // 0x40
	::RPG::GameCore::FixPoint Field_2_7; // 0x48
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_2_8; // 0x50
	::Class_1_E754E66360B8422F* Field_2_9; // 0x58
	::Class_1_0E0403D2B5AD79E8* Field_2_10; // 0x60
};
