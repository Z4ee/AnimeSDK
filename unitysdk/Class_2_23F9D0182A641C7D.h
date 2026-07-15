#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FB38F0526A59B0.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_512;
class Class_1_9AD7EC315F99B05E;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_23F9D0182A641C7D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1F660)

inline static constexpr unsigned int Class_2_23F9D0182A641C7D_TypeDefinitionIndex = 55068;

class Class_2_23F9D0182A641C7D : public ::Class_1_B8FB38F0526A59B0
{
public:
	::Class_0_16E4307DCC419505_512* Field_2_0; // 0x58
	::Class_1_9AD7EC315F99B05E* Field_2_1; // 0x60
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* Field_2_2; // 0x68
	::RPG::GameCore::GameEntity* Field_2_3; // 0x70
	::RPG::GameCore::GameEntity* Field_2_4; // 0x78
	::System::UInt32 Field_2_5; // 0x80
	::System::Int32 Field_2_6; // 0x84
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_7; // 0x88
	::RPG::GameCore::WaveMonsterTiming Field_2_8; // 0x98
	::System::Single Field_2_9; // 0x9C
	::RPG::GameCore::FixPoint Field_2_10; // 0xA0
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_11; // 0xA8
	::RPG::GameCore::FixPoint Field_2_12; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23F9D0182A641C7D__CTOR_OFFSET))(this);
	}
};
