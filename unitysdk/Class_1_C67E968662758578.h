#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_C67E968662758578__CTOR_OFFSET UNITYSDK_OFFSET(0x1455AA80)

inline static constexpr unsigned int Class_1_C67E968662758578_TypeDefinitionIndex = 50867;

class Class_1_C67E968662758578 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67E968662758578__CTOR_OFFSET))(this);
	}
};
