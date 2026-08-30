#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_C67E968662758578__CTOR_OFFSET UNITYSDK_OFFSET(0x18D195A0)

inline static constexpr unsigned int Class_1_C67E968662758578_TypeDefinitionIndex = 54636;

class Class_1_C67E968662758578 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* GJBOOKGKBIH; // 0x10
	::RPG::GameCore::FixPoint OBIMLGBGCNO; // 0x18
	::RPG::GameCore::FixPoint GBCIHEMICFM; // 0x20
	::System::Boolean BPPMLJPOLAL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67E968662758578__CTOR_OFFSET))(this);
	}
};
