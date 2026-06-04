#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_39;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define CLASS_1_0190AB1E1065D718__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6E10)

inline static constexpr unsigned int Class_1_0190AB1E1065D718_TypeDefinitionIndex = 40356;

class Class_1_0190AB1E1065D718 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_39* Field_1_0; // 0x10
	::RPG::GameCore::ChenLingBattleTriggerCallback* Field_1_1; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0190AB1E1065D718__CTOR_OFFSET))(this);
	}
};
