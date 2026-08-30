#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1CD5437D668B7AFD_CLASS_1_F8AF247262D62260__CTOR_OFFSET UNITYSDK_OFFSET(0x1576E330)

inline static constexpr unsigned int Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260_TypeDefinitionIndex = 71392;

class Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::CharacterHUDType OAMPOPJGNNG; // 0x18
	::System::Int32 GMDBHJKEAEI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD5437D668B7AFD_CLASS_1_F8AF247262D62260__CTOR_OFFSET))(this);
	}
};
