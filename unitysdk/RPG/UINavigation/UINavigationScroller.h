#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationInControlAction.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoInControlMove; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB87E920)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xB87EED0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB87EB90)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB87EB20)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xB87EF90)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xB87ED00)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xB87EDB0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CHECKCANSCROLL_OFFSET UNITYSDK_OFFSET(0xB87EE60)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB87EFF0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__GETLAYOUTGROUPRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB87EA80)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER__REFRESHSCROLLSTATUS_OFFSET UNITYSDK_OFFSET(0xB87EBE0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xB87F060)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xB87F100)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB87F0B0)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xB87F150)
#define RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xB87F0C0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationScroller_TypeDefinitionIndex = 47802;

	class UINavigationScroller : public ::RPG::UINavigation::UINavigationInControlAction
	{
	public:
		// static const ::System::String* VERTICAL_ACTION_HINT_NAME; // 0x0
		// static const ::System::String* HORIZONTAL_ACTION_HINT_NAME; // 0x0
		::RPG::Client::MonoInControlMove* MonoInControlMove; // 0x50
		::UnityEngine::RectTransform* _RectTransform; // 0x58
		::UnityEngine::RectTransform* _LayoutGroupRectTransform; // 0x60
		::UnityEngine::Vector2 _Size; // 0x68
		::System::Boolean _CanScroll; // 0x70
		::System::Boolean _ShouldRefreshScrollStatus; // 0x71

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

		::System::Void OnInControlActionStatusChange(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, active);
		}

		::System::Void _RefreshScrollStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__REFRESHSCROLLSTATUS_OFFSET))(this);
		}

		::System::Boolean _CheckCanScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__CHECKCANSCROLL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* _GetLayoutGroupRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER__GETLAYOUTGROUPRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_ShouldShowInControlActionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_SHOULDSHOWINCONTROLACTIONHINT_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInControlActionStatusChange(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSCROLLER___IFIXBASEPROXY_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, P0);
		}
	};
}
