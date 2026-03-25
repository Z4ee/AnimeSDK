#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_E7E9A0BE6C2493BC_CLASS_1_B5E16AB8EEB1D2A0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x103892F0)

inline static constexpr unsigned int Class_2_E7E9A0BE6C2493BC_Class_1_B5E16AB8EEB1D2A0_2_TypeDefinitionIndex = 58922;

class Class_2_E7E9A0BE6C2493BC_Class_1_B5E16AB8EEB1D2A0_2 : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_CLASS_1_B5E16AB8EEB1D2A0_2__CTOR_OFFSET))(this);
	}
};
