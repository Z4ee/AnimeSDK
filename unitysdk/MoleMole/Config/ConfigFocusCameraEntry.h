#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FocusCameraTargetSetting.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1230B990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFocusCameraEntry_TypeDefinitionIndex = 58861;

	class ConfigFocusCameraEntry : public ::System::Object
	{
	public:
		::MoleMole::Config::FocusCameraTargetSetting focusSetting; // 0x10
		::System::Single blendDuration; // 0x34
		::UnityEngine::AnimationCurve* blendCurve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERAENTRY__CTOR_OFFSET))(this);
		}
	};
}
