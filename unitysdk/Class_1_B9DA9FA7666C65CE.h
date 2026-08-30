#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define CLASS_1_B9DA9FA7666C65CE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0589B0)

inline static constexpr unsigned int Class_1_B9DA9FA7666C65CE_TypeDefinitionIndex = 57664;

class Class_1_B9DA9FA7666C65CE : public ::System::Object
{
public:
	::RPG::GameCore::TriggerValidGuestConfig* OCPMCMIAOFM; // 0x10
	::RPG::GameCore::LevelTriggerInfo* DCAPKFBJFDM; // 0x18
	::UnityEngine::Vector3 DJOPKBFLMII; // 0x20
	::UnityEngine::Vector3 FJBGGCPCFHO; // 0x2C
	::System::Boolean KBIHIOOINBD; // 0x38
	::UnityEngine::Quaternion KBOGCGPBOFH; // 0x3C
	::System::Single IMAKHPOEMIP; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9DA9FA7666C65CE__CTOR_OFFSET))(this);
	}
};
