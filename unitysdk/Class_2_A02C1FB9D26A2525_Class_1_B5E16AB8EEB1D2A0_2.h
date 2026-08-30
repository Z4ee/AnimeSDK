#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_A02C1FB9D26A2525_CLASS_1_B5E16AB8EEB1D2A0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3EA70)

inline static constexpr unsigned int Class_2_A02C1FB9D26A2525_Class_1_B5E16AB8EEB1D2A0_2_TypeDefinitionIndex = 72139;

class Class_2_A02C1FB9D26A2525_Class_1_B5E16AB8EEB1D2A0_2 : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_CLASS_1_B5E16AB8EEB1D2A0_2__CTOR_OFFSET))(this);
	}
};
