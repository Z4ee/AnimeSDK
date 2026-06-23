#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIMainPageShowSetting_PerformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGUIMAINPAGESHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x161B03D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageShowSetting_TypeDefinitionIndex = 66568;

	class ConfigUIMainPageShowSetting : public ::System::Object
	{
	public:
		::System::String* AnimatorControllerPath; // 0x10
		::System::String* MainPagePrefabPath; // 0x18
		::System::String* TimelinePrefabPath; // 0x20
		::System::String* AnimationClipPath; // 0x28
		::UnityEngine::Vector2 CameraClippingPlanes; // 0x30
		::MoleMole::ConfigUIMainPageShowSetting_PerformType CameraPerformType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGESHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
