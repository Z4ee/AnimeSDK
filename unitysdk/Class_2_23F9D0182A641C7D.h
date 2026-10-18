#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FB38F0526A59B0.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_635;
class Class_1_9AD7EC315F99B05E;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_23F9D0182A641C7D__CTOR_OFFSET UNITYSDK_OFFSET(0x16569F00)

inline static constexpr unsigned int Class_2_23F9D0182A641C7D_TypeDefinitionIndex = 57638;

class Class_2_23F9D0182A641C7D : public ::Class_1_B8FB38F0526A59B0
{
public:
	::RPG::GameCore::GameEntity* PCJLPCJNNHL; // 0x58
	::Class_1_9AD7EC315F99B05E* IHNJNKIPBJH; // 0x60
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* GOLGCBPFFAM; // 0x68
	::Class_0_16E4307DCC419505_635* FGNHFJHBPIM; // 0x70
	::RPG::GameCore::GameEntity* IHOHAHDDMLK; // 0x78
	::RPG::GameCore::WaveMonsterTiming JGAKLKBOPEG; // 0x80
	::System::UInt32 DOHFIEBOJIJ; // 0x84
	::System::Int32 LLJGKHNLGCK; // 0x88
	::System::Single HDKIBCJDINJ; // 0x8C
	::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0x90
	::System::Nullable_1<::RPG::GameCore::FixPoint> HIOJGGBEPPI; // 0x98
	::System::Nullable_1<::RPG::GameCore::FixPoint> MDAIMLBJFAD; // 0xA8
	::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23F9D0182A641C7D__CTOR_OFFSET))(this);
	}
};
