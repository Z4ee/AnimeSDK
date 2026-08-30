#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayFeverViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC51760)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC51D60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC51520)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONFADEINFINISHED_OFFSET UNITYSDK_OFFSET(0x1CC51CB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONFADEOUTFINISHED_OFFSET UNITYSDK_OFFSET(0x1CC51D20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC512F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC51810)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CC51950)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesFeverToastControl_TypeDefinitionIndex = 79977;

	class ChenLingFesFeverToastControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PREFAB_PATH; // 0x0
		// static const ::System::String* FadeInName; // 0x0
		// static const ::System::String* FadeOutName; // 0x0
		// static const ::System::Single Duration; // 0x0
		::UnityEngine::Animation* _Animation; // 0x38
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__REFRESHVISIBLE_OFFSET))(this);
		}

		::System::Void _OnFadeInFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONFADEINFINISHED_OFFSET))(this);
		}

		::System::Void _OnFadeOutFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL__ONFADEOUTFINISHED_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERTOASTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
