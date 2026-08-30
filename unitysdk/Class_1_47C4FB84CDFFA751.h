#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_47C4FB84CDFFA751__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E3570)

inline static constexpr unsigned int Class_1_47C4FB84CDFFA751_TypeDefinitionIndex = 58292;

class Class_1_47C4FB84CDFFA751 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* KGKEPIJIABL; // 0x10
	::RPG::GameCore::FixPoint IENBBJKOCEN; // 0x18
	::RPG::GameCore::GridFightBattleEventHintType INAHCAEDLEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4FB84CDFFA751__CTOR_OFFSET))(this);
	}
};
