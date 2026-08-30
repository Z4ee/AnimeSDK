#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC548C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC55260)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC54660)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONFADEINEND_OFFSET UNITYSDK_OFFSET(0x1CC550A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x1CC55110)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC54420)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC54EA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0x1CC54970)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CC54B40)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGamePhaseToastControl_TypeDefinitionIndex = 80035;

	class ChenLingFesGamePhaseToastControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		// static const ::System::String* _FadeInName; // 0x0
		// static const ::System::String* _FadeOutName; // 0x0
		// static const ::System::Single _WaitTime; // 0x0
		::UnityEngine::UI::Text* _Text; // 0x38
		::UnityEngine::Animation* _Animation; // 0x40
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__REFRESHVISIBLE_OFFSET))(this);
		}

		::System::Void _RefreshText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__REFRESHTEXT_OFFSET))(this);
		}

		::System::Void _OnFadeInEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONFADEINEND_OFFSET))(this);
		}

		::System::Void _OnFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL__ONFADEOUTEND_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
