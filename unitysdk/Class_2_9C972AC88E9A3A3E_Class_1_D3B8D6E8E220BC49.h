#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_D1797279B49332E9;
namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_9C972AC88E9A3A3E_CLASS_1_D3B8D6E8E220BC49__CTOR_OFFSET UNITYSDK_OFFSET(0x119333B0)

inline static constexpr unsigned int Class_2_9C972AC88E9A3A3E_Class_1_D3B8D6E8E220BC49_TypeDefinitionIndex = 66257;

class Class_2_9C972AC88E9A3A3E_Class_1_D3B8D6E8E220BC49 : public ::System::Object
{
public:
	::Class_1_D1797279B49332E9* Field_1_1; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x18
	::RPG::Client::UISkillIndex Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_CLASS_1_D3B8D6E8E220BC49__CTOR_OFFSET))(this);
	}
};
