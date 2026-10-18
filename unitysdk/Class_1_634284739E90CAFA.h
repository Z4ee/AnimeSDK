#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define CLASS_1_634284739E90CAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E12E0)

inline static constexpr unsigned int Class_1_634284739E90CAFA_TypeDefinitionIndex = 43733;

class Class_1_634284739E90CAFA : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleEffectConfig* HPBAMMEFDMK; // 0x10
	::RPG::GameCore::FixPoint AGFLHPDBFDJ; // 0x18
	::RPG::GameCore::ChenLingBattleBuffType LMIODAHFGOA; // 0x20
	::System::Boolean PIPHKKAGDDC; // 0x24
	::RPG::GameCore::FixPoint NLFIKMEADBH; // 0x28
	::RPG::GameCore::FixPoint KOMEOMHBCEC; // 0x30
	::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_634284739E90CAFA__CTOR_OFFSET))(this);
	}
};
