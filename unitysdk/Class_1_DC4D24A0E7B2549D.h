#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModelResultType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DC4D24A0E7B2549D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F20EF0)

inline static constexpr unsigned int Class_1_DC4D24A0E7B2549D_TypeDefinitionIndex = 51241;

class Class_1_DC4D24A0E7B2549D : public ::System::Object
{
public:
	::RPG::GameCore::TeamType Field_1_0; // 0x10
	::RPG::GameCore::BattleModelResultType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC4D24A0E7B2549D__CTOR_OFFSET))(this);
	}
};
