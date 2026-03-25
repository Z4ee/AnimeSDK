#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FB38F0526A59B0.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_386;
class Class_1_9AD7EC315F99B05E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_6729AC3ED949BE6A__CTOR_OFFSET UNITYSDK_OFFSET(0x8C04E90)

inline static constexpr unsigned int Class_2_6729AC3ED949BE6A_TypeDefinitionIndex = 46449;

class Class_2_6729AC3ED949BE6A : public ::Class_1_B8FB38F0526A59B0
{
public:
	::RPG::GameCore::BigFixPoint Field_2_6; // 0x58
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* Field_2_11; // 0x68
	::Class_0_16E4307DCC419505_386* Field_2_15; // 0x70
	::Class_1_9AD7EC315F99B05E* Field_2_1; // 0x78
	::RPG::GameCore::BigFixPoint Field_2_5; // 0x80
	::RPG::GameCore::GameWorld* Field_2_0; // 0x90
	::RPG::GameCore::GameEntity* Field_2_12; // 0x98
	::System::Boolean Field_2_4; // 0xA0
	::System::Int32 Field_2_13; // 0xA4
	::System::UInt32 Field_2_10; // 0xA8
	::System::Single Field_2_14; // 0xAC
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_7; // 0xB0
	::RPG::GameCore::FixPoint Field_2_2; // 0xC0
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_8; // 0xC8
	::RPG::GameCore::WaveMonsterTiming Field_2_9; // 0xD8
	::RPG::GameCore::FixPoint Field_2_3; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6729AC3ED949BE6A__CTOR_OFFSET))(this);
	}
};
