#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayRankItemViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_GET_ISFIRSTSHOW_OFFSET UNITYSDK_OFFSET(0x1B732280)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B7326E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_RESETREFRESHANIMTOEND_OFFSET UNITYSDK_OFFSET(0x1B7314D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_SET_ISFIRSTSHOW_OFFSET UNITYSDK_OFFSET(0x1B732290)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7334C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__INITVIEW_OFFSET UNITYSDK_OFFSET(0x1B732790)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONANIMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7330A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B732410)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7333B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7322A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONITEMVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B732E00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__REFRESHICONPATH_OFFSET UNITYSDK_OFFSET(0x1B733130)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x1B732D70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1B732940)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayRankItemControl_TypeDefinitionIndex = 79990;

	class ChenLingFesGameplayRankItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		// static const ::System::String* RefreshAnimName; // 0x0
		::System::Boolean _IsFirstShow_k__BackingField; // 0x38
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x40
		::UnityEngine::UI::Image* _Icon; // 0x48
		::UnityEngine::UI::Text* _TextIndex; // 0x50
		::UnityEngine::UI::Text* _TextNum; // 0x58
		::UnityEngine::Animation* _Anim; // 0x60
		::RPG::Client::MonoAnimationTrigger* _AnimTrigger; // 0x68
		::RPG::Client::ChenLingFes::ChenLingFesGameplayRankItemViewModel* _BindedViewModel; // 0x70
		::System::Boolean _IsInAnim; // 0x78
		::System::Boolean _SkipNextRefreshAnimation; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFirstShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_GET_ISFIRSTSHOW_OFFSET))(this);
		}

		::System::Void set_IsFirstShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_SET_ISFIRSTSHOW_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__INITVIEW_OFFSET))(this);
		}

		::System::Void _OnItemViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONITEMVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__REFRESHITEM_OFFSET))(this);
		}

		::System::Void ResetRefreshAnimToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_RESETREFRESHANIMTOEND_OFFSET))(this);
		}

		::System::Void _OnAnimCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONANIMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _RefreshIconPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__REFRESHICONPATH_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL__ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayRankItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayRankItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
