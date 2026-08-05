#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISummerSelectLevelPageController.h"

class UIWidgetGroup;
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISUMMERSELECTSURFINGLEVELPAGECONTROLLER_CREATELEVELRANKWIDGETGROUP_OFFSET UNITYSDK_OFFSET(0x119F91F0)
#define MOLEMOLE_UISUMMERSELECTSURFINGLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x119F9280)
#define MOLEMOLE_UISUMMERSELECTSURFINGLEVELPAGECONTROLLER___BASE_CREATELEVELRANKWIDGETGROUP_OFFSET UNITYSDK_OFFSET(0x119F9320)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSelectSurfingLevelPageController_TypeDefinitionIndex = 65501;

	class UISummerSelectSurfingLevelPageController : public ::MoleMole::UISummerSelectLevelPageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTSURFINGLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::UIWidgetGroup* CreateLevelRankWidgetGroup(::UnityEngine::RectTransform* parent)
		{
			return ((::UIWidgetGroup*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTSURFINGLEVELPAGECONTROLLER_CREATELEVELRANKWIDGETGROUP_OFFSET))(this, parent);
		}

		::UIWidgetGroup* __base_CreateLevelRankWidgetGroup(::UnityEngine::RectTransform* P0)
		{
			return ((::UIWidgetGroup*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTSURFINGLEVELPAGECONTROLLER___BASE_CREATELEVELRANKWIDGETGROUP_OFFSET))(this, P0);
		}
	};
}
