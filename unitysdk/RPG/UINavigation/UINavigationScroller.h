#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationInControlAction.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoInControlMove; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19D5C270)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x19D5CA10)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19D5C5B0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19D5C490)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x19D5CB30)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x19D5C760)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0x19D5C810)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CHECKCANSCROLL_OFFSET UNITYSDK_OFFSET(0x19D5C9A0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5CB90)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__GETLAYOUTGROUPRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19D5C3F0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__REFRESHINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0x19D5C550)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__REFRESHSCROLLSTATUS_OFFSET UNITYSDK_OFFSET(0x19D5C600)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationScroller_TypeDefinitionIndex = 49416;

	class UINavigationScroller : public ::RPG::UINavigation::UINavigationInControlAction
	{
	public:
		::RPG::Client::MonoInControlMove* MonoInControlMove; // 0x58
		::UnityEngine::RectTransform* _RectTransform; // 0x60
		::UnityEngine::RectTransform* _LayoutGroupRectTransform; // 0x68
		::UnityEngine::Vector2 _Size; // 0x70
		::System::Boolean _CanScroll; // 0x78
		::System::Boolean _ShouldRefreshScrollStatus; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Boolean ShouldShowInControlActionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_SHOULDSHOWINCONTROLACTIONHINT_OFFSET))(this);
		}

		::System::String* GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Void OnInControlActionStatusChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshScrollStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__REFRESHSCROLLSTATUS_OFFSET))(this);
		}

		::System::Void _RefreshInControlTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__REFRESHINCONTROLTIP_OFFSET))(this);
		}

		::System::Boolean _CheckCanScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CHECKCANSCROLL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* _GetLayoutGroupRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__GETLAYOUTGROUPRECTTRANSFORM_OFFSET))(this);
		}
	};
}
