#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationChatExtension_ViewPortVisibility.h"
#include "unitysdk/RPG/UINavigation/UINavigationExtension.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigation; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCFC3A70)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_2BF2BE327F577697_OFFSET UNITYSDK_OFFSET(0xCFC3C70)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_53A27BD4FBBC063A_OFFSET UNITYSDK_OFFSET(0xCFC3DC0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_5CE279A17BFB4762_OFFSET UNITYSDK_OFFSET(0xCFC3240)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_6E37671A3C35FC0E_OFFSET UNITYSDK_OFFSET(0xCFC47C0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_AD0064E4659DB694_OFFSET UNITYSDK_OFFSET(0xCFC4240)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_DFB2B1C709BA3C20_OFFSET UNITYSDK_OFFSET(0xCFC4FB0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_E23C97CEA99B7CE1_OFFSET UNITYSDK_OFFSET(0xCFC32F0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCFC38F0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC35D0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_POSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xCFC4660)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC5160)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCFC5220)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCFC51D0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC5180)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_POSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xCFC52B0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationChatExtension_TypeDefinitionIndex = 48401;

	class UINavigationChatExtension : public ::RPG::UINavigation::UINavigationExtension
	{
	public:
		::SuperScrollView::LoopListView2* Field_6_0; // 0x20
		::UnityEngine::RectTransform* Field_6_1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopListView2* Method_6_5CE279A17BFB4762()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_5CE279A17BFB4762_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_6_E23C97CEA99B7CE1()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_E23C97CEA99B7CE1_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_6_2BF2BE327F577697(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_2BF2BE327F577697_OFFSET))(this, a1);
		}

		::System::Void Method_6_53A27BD4FBBC063A(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::GameObject*& a3, ::System::Single& a4, ::UnityEngine::GameObject*& a5, ::System::Single& a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::Vector2, ::UnityEngine::GameObject*&, ::System::Single&, ::UnityEngine::GameObject*&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_53A27BD4FBBC063A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_POSTONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void Method_6_DFB2B1C709BA3C20(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_DFB2B1C709BA3C20_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationChatExtension_ViewPortVisibility Method_6_AD0064E4659DB694(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::UINavigation::UINavigationChatExtension_ViewPortVisibility(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_AD0064E4659DB694_OFFSET))(this, a1);
		}

		::System::Void Method_6_6E37671A3C35FC0E(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_6E37671A3C35FC0E_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* __iFixBaseProxy_GetFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_PostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION___IFIXBASEPROXY_POSTONCHILDSELECTED_OFFSET))(this, a1);
		}
	};
}
