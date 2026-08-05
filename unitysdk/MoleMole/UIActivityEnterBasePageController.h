#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_GETPAGEFADEOUTCLIP_OFFSET UNITYSDK_OFFSET(0x1927E7A0)
#define MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_PLAYPAGEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x1927E760)
#define MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_PLAYPAGEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x1927E720)
#define MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_SETPAGEINFOUIACTIVE_OFFSET UNITYSDK_OFFSET(0x1927E6D0)
#define MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1927E7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityEnterBasePageController_TypeDefinitionIndex = 85926;

	class UIActivityEnterBasePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetPageInfoUIActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_SETPAGEINFOUIACTIVE_OFFSET))(this, active);
		}

		::System::Void PlayPageFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_PLAYPAGEFADEOUTANIM_OFFSET))(this);
		}

		::System::Void PlayPageFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_PLAYPAGEFADEINANIM_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetPageFadeOutClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYENTERBASEPAGECONTROLLER_GETPAGEFADEOUTCLIP_OFFSET))(this);
		}
	};
}
