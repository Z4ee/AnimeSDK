#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERATRANSLATION_TRIGGERZONE_OFFSET UNITYSDK_OFFSET(0x1B7ECA50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERATRANSLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ECBA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraTranslation_TypeDefinitionIndex = 73227;

	class ConfigHollowCameraTranslation : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::UnityEngine::Vector4>* translationTriggerZones; // 0x10
		::UnityEngine::AnimationCurve* translationCurve; // 0x18
		::System::Single OverlapAreaPercent; // 0x20
		::System::Single translationSeconds; // 0x24
		::System::Boolean DebugGUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERATRANSLATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 TriggerZone(::MoleMole::EUILayoutPlatform layoutPlatform)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERATRANSLATION_TRIGGERZONE_OFFSET))(this, layoutPlatform);
		}
	};
}
