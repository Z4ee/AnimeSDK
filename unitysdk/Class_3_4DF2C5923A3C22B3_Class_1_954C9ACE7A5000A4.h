#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_4DF2C5923A3C22B3_CLASS_1_954C9ACE7A5000A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1518AC70)

inline static constexpr unsigned int Class_3_4DF2C5923A3C22B3_Class_1_954C9ACE7A5000A4_TypeDefinitionIndex = 68678;

class Class_3_4DF2C5923A3C22B3_Class_1_954C9ACE7A5000A4 : public ::System::Object
{
public:
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DF2C5923A3C22B3_CLASS_1_954C9ACE7A5000A4__CTOR_OFFSET))(this);
	}
};
