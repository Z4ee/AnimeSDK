#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIMainPageShowSetting_PerformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGUIMAINPAGESHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x153E1480)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageShowSetting_TypeDefinitionIndex = 53867;

	class ConfigUIMainPageShowSetting : public ::System::Object
	{
	public:
		::System::String* TimelinePrefabPath; // 0x10
		::System::String* AnimatorControllerPath; // 0x18
		::System::String* AnimationClipPath; // 0x20
		::System::String* MainPagePrefabPath; // 0x28
		::MoleMole::ConfigUIMainPageShowSetting_PerformType CameraPerformType; // 0x30
		::UnityEngine::Vector2 CameraClippingPlanes; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGESHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
