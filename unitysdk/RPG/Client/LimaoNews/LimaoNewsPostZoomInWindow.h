#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_6639441D78E72F56;
namespace RPG::Client::LimaoNews { class LimaoNewsPostZoomControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostZoomInViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW_ONCONTENTLOADED_OFFSET UNITYSDK_OFFSET(0x1C4AA870)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A9980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4A9E20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1C4AA820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C4A9A30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLEFTTRIGGERPRESS_OFFSET UNITYSDK_OFFSET(0x1C4AAB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C4AAA00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0x1C4AAAA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKDOWNPRESS_OFFSET UNITYSDK_OFFSET(0x1C4AAC80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKLEFTPRESS_OFFSET UNITYSDK_OFFSET(0x1C4AAD00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x1C4AAE00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRIGHTPRESS_OFFSET UNITYSDK_OFFSET(0x1C4AAD80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKUPPRESS_OFFSET UNITYSDK_OFFSET(0x1C4AAC00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTTRIGGERPRESS_OFFSET UNITYSDK_OFFSET(0x1C4AAB80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C4A9D60)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostZoomInWindow_TypeDefinitionIndex = 79086;

	class LimaoNewsPostZoomInWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostZoomControl* _ZoomControl; // 0x48
		::UnityEngine::UI::Button* _BtnClose; // 0x50
		::UnityEngine::Transform* _NodeLoaderRoot; // 0x58
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x60
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x68

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostZoomInViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostZoomInViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void OnContentLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW_ONCONTENTLOADED_OFFSET))(this, a1);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsPostMessage(::Class_1_6639441D78E72F56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLIMAONEWSPOSTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnMouseWheelRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONMOUSEWHEELROLL_OFFSET))(this, a1);
		}

		::System::Void _OnLeftTriggerPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONLEFTTRIGGERPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightTriggerPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTTRIGGERPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickUpPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKUPPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickDownPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKDOWNPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickLeftPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKLEFTPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickRightPress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRIGHTPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnRightStickRelease(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW__ONRIGHTSTICKRELEASE_OFFSET))(this, a1);
		}
	};
}
