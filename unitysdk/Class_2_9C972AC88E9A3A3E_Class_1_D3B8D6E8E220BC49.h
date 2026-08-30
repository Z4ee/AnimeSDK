#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_A474572029D08468;
namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_9C972AC88E9A3A3E_CLASS_1_D3B8D6E8E220BC49__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4B780)

inline static constexpr unsigned int Class_2_9C972AC88E9A3A3E_Class_1_D3B8D6E8E220BC49_TypeDefinitionIndex = 71846;

class Class_2_9C972AC88E9A3A3E_Class_1_D3B8D6E8E220BC49 : public ::System::Object
{
public:
	::Class_1_A474572029D08468* HLIIPKKCPOM; // 0x10
	::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x18
	::RPG::Client::UISkillIndex GMDBHJKEAEI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_CLASS_1_D3B8D6E8E220BC49__CTOR_OFFSET))(this);
	}
};
