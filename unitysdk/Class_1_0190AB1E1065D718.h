#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_31;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define CLASS_1_0190AB1E1065D718__CTOR_OFFSET UNITYSDK_OFFSET(0x16A4E080)

inline static constexpr unsigned int Class_1_0190AB1E1065D718_TypeDefinitionIndex = 33732;

class Class_1_0190AB1E1065D718 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleTriggerCallback* Field_1_1; // 0x10
	::Class_1_43BD383C98B4C0C5_31* Field_1_2; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0190AB1E1065D718__CTOR_OFFSET))(this);
	}
};
