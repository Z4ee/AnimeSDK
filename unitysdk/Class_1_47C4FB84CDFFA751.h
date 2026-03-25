#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_47C4FB84CDFFA751__CTOR_OFFSET UNITYSDK_OFFSET(0x11632D40)

inline static constexpr unsigned int Class_1_47C4FB84CDFFA751_TypeDefinitionIndex = 46912;

class Class_1_47C4FB84CDFFA751 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_2; // 0x10
	::RPG::GameCore::FixPoint Field_1_0; // 0x18
	::RPG::GameCore::GridFightBattleEventHintType Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4FB84CDFFA751__CTOR_OFFSET))(this);
	}
};
