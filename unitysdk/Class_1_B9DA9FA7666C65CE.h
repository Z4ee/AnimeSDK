#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define CLASS_1_B9DA9FA7666C65CE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5B820)

inline static constexpr unsigned int Class_1_B9DA9FA7666C65CE_TypeDefinitionIndex = 53721;

class Class_1_B9DA9FA7666C65CE : public ::System::Object
{
public:
	::RPG::GameCore::LevelTriggerInfo* Field_1_0; // 0x10
	::RPG::GameCore::TriggerValidGuestConfig* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x2C
	::System::Boolean Field_1_4; // 0x30
	::UnityEngine::Quaternion Field_1_5; // 0x34
	::UnityEngine::Vector3 Field_1_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9DA9FA7666C65CE__CTOR_OFFSET))(this);
	}
};
