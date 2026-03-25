#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_1_C051E502BC384EFD;
namespace RPG::Client { class CustomButton; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLEQTEDIALOG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x91CC700)
#define RPG_CLIENT_BATTLEQTEDIALOG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x91CC7C0)
#define RPG_CLIENT_BATTLEQTEDIALOG_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x91CB8F0)
#define RPG_CLIENT_BATTLEQTEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x91CBF80)
#define RPG_CLIENT_BATTLEQTEDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91CB960)
#define RPG_CLIENT_BATTLEQTEDIALOG__GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x91CC140)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x91CC500)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_OFFSET UNITYSDK_OFFSET(0x91CC4B0)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_WRAP_OFFSET UNITYSDK_OFFSET(0x91CC670)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONQTEPANELLOADED_OFFSET UNITYSDK_OFFSET(0x91CBAC0)
#define RPG_CLIENT_BATTLEQTEDIALOG__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x91CC310)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPBUTTON_OFFSET UNITYSDK_OFFSET(0x91CBB30)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPDELAY_OFFSET UNITYSDK_OFFSET(0x91CC1B0)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x91CBCF0)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPICON_OFFSET UNITYSDK_OFFSET(0x91CBC30)
#define RPG_CLIENT_BATTLEQTEDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x91CBFD0)
#define RPG_CLIENT_BATTLEQTEDIALOG__STOPDELAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x91CC3F0)
#define RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x91CCAF0)
#define RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x91CCB50)
#define RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x91CC940)
#define RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91CC9D0)
#define RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x91CCA90)
#define RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x91CCA30)
#define RPG_CLIENT_BATTLEQTEDIALOG___SETUPDELAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x91CC860)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleQTEDialog_TypeDefinitionIndex = 59222;

	class BattleQTEDialog : public ::RPG::Client::UIController
	{
	public:
		// static const ::System::String* _DEFAULT_QTE_BUTTON_PATH; // 0x0
		// static const ::System::Single _CONFIRM_DELAY; // 0x0
		::UnityEngine::GameObject* _QTENode; // 0x180
		::UnityEngine::Coroutine* _DelayCoroutine; // 0x188
		::Class_1_C051E502BC384EFD* _QTEData; // 0x190
		::UnityEngine::Transform* _FollowPosContainer; // 0x198
		::RPG::Client::CustomButton* _QTEButton; // 0x1A0
		::UnityEngine::Transform* _FixedPosContainer; // 0x1A8
		::System::Boolean _CanInteract; // 0x1B0
		::System::UInt64 _ConfirmTimeStamp; // 0x1B8

		::System::Void _ctor(::Class_1_C051E502BC384EFD* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C051E502BC384EFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__CTOR_OFFSET))(this, data);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnQTEPanelLoaded(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEPANELLOADED_OFFSET))(this, gameObject);
		}

		::System::Void _SetupButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPBUTTON_OFFSET))(this);
		}

		::System::Void _SetupIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPICON_OFFSET))(this);
		}

		::System::Void _SetupFollowPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONSTARTEXIT_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetContainer()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__GETCONTAINER_OFFSET))(this);
		}

		::System::Void _SetupDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__SETUPDELAY_OFFSET))(this);
		}

		::System::Void _StopDelayCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__STOPDELAYCOROUTINE_OFFSET))(this);
		}

		::System::Void _OnQTEFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_OFFSET))(this);
		}

		::System::Void _OnQTEButtonClicked(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEBUTTONCLICKED_OFFSET))(this, arg);
		}

		::System::Void _OnQTEFinish_Wrap(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG__ONQTEFINISH_WRAP_OFFSET))(this, _);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __SetupDelay_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___SETUPDELAY_B__14_0_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEQTEDIALOG___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
		}
	};
}
