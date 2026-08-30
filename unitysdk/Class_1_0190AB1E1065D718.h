#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_41;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define CLASS_1_0190AB1E1065D718__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35FF80)

inline static constexpr unsigned int Class_1_0190AB1E1065D718_TypeDefinitionIndex = 42131;

class Class_1_0190AB1E1065D718 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleTriggerCallback* IMDLGFPMPEK; // 0x10
	::Class_1_43BD383C98B4C0C5_41* CAHCLIMGPFF; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType BJMGCHAHKAI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0190AB1E1065D718__CTOR_OFFSET))(this);
	}
};
