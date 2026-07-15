#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define CLASS_1_B9DA9FA7666C65CE__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8A7C0)

inline static constexpr unsigned int Class_1_B9DA9FA7666C65CE_TypeDefinitionIndex = 54940;

class Class_1_B9DA9FA7666C65CE : public ::System::Object
{
public:
	::RPG::GameCore::TriggerValidGuestConfig* Field_1_0; // 0x10
	::RPG::GameCore::LevelTriggerInfo* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::UnityEngine::Quaternion Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9DA9FA7666C65CE__CTOR_OFFSET))(this);
	}
};
