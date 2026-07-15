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

#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D57A50)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_12A10FF739C8C066_OFFSET UNITYSDK_OFFSET(0x19D57DA0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_2BF2BE327F577697_OFFSET UNITYSDK_OFFSET(0x19D57C50)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_5CE279A17BFB4762_OFFSET UNITYSDK_OFFSET(0x19D57220)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_6E37671A3C35FC0E_OFFSET UNITYSDK_OFFSET(0x19D58850)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_93F5C564DEBFDC7B_OFFSET UNITYSDK_OFFSET(0x19D59110)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_AD0064E4659DB694_OFFSET UNITYSDK_OFFSET(0x19D582D0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_E23C97CEA99B7CE1_OFFSET UNITYSDK_OFFSET(0x19D572D0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19D578D0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19D575B0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_POSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0x19D586F0)
#define RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D59390)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationChatExtension_TypeDefinitionIndex = 49400;

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

		::System::Void Method_6_12A10FF739C8C066(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::GameObject*& a3, ::System::Single& a4, ::UnityEngine::GameObject*& a5, ::System::Single& a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::Vector2, ::UnityEngine::GameObject*&, ::System::Single&, ::UnityEngine::GameObject*&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_12A10FF739C8C066_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PostOnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_POSTONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void Method_6_93F5C564DEBFDC7B(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_93F5C564DEBFDC7B_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationChatExtension_ViewPortVisibility Method_6_AD0064E4659DB694(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::UINavigation::UINavigationChatExtension_ViewPortVisibility(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_AD0064E4659DB694_OFFSET))(this, a1);
		}

		::System::Void Method_6_6E37671A3C35FC0E(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONCHATEXTENSION_METHOD_6_6E37671A3C35FC0E_OFFSET))(this, a1);
		}
	};
}
