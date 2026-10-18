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

#define CLASS_2_23F9D0182A641C7D__CTOR_OFFSET UNITYSDK_OFFSET(0x16577E50)

inline static constexpr unsigned int Class_2_23F9D0182A641C7D_TypeDefinitionIndex = 57638;

class Class_2_23F9D0182A641C7D : public ::Class_1_B8FB38F0526A59B0
{
public:
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* GOLGCBPFFAM; // 0x58
	::Class_1_9AD7EC315F99B05E* IHNJNKIPBJH; // 0x60
	::RPG::GameCore::GameEntity* PCJLPCJNNHL; // 0x68
	::RPG::GameCore::GameEntity* IHOHAHDDMLK; // 0x70
	::Class_0_16E4307DCC419505_635* FGNHFJHBPIM; // 0x78
	::System::Nullable_1<::RPG::GameCore::FixPoint> HIOJGGBEPPI; // 0x80
	::System::Single HDKIBCJDINJ; // 0x90
	::System::UInt32 DOHFIEBOJIJ; // 0x94
	::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0x98
	::System::Nullable_1<::RPG::GameCore::FixPoint> MDAIMLBJFAD; // 0xA0
	::System::Int32 LLJGKHNLGCK; // 0xB0
	::RPG::GameCore::WaveMonsterTiming JGAKLKBOPEG; // 0xB4
	::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23F9D0182A641C7D__CTOR_OFFSET))(this);
	}
};
