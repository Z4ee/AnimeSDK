#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleRightTopShortHintType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_84E41DAE76CA771A__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0F80)

inline static constexpr unsigned int Class_1_84E41DAE76CA771A_TypeDefinitionIndex = 55127;

class Class_1_84E41DAE76CA771A : public ::System::Object
{
public:
	::RPG::Client::TextID PJHMJKEIGOA; // 0x10
	::RPG::GameCore::BattleRightTopShortHintType GMPGDEINODK; // 0x20
	::System::UInt32 AALPICLABCO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E41DAE76CA771A__CTOR_OFFSET))(this);
	}
};
