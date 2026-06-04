#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayScoreInfoViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayScoreItemControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL_GETNODECURRENTSCORE_OFFSET UNITYSDK_OFFSET(0xB603AE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB6053F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL_SETENDPOSITION_OFFSET UNITYSDK_OFFSET(0xB603B20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB605840)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB6042D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xB605730)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB603D00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__REFRESHENDLESSPROGRESSSTATE_OFFSET UNITYSDK_OFFSET(0xB605580)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__REFRESHMODE_OFFSET UNITYSDK_OFFSET(0xB605460)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB605910)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6058B0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayScoreInfoControl_TypeDefinitionIndex = 73978;

	class ChenLingFesGameplayScoreInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _ModeStateCtrl; // 0x38
		::UnityEngine::UI::Text* _TextCurrentScore; // 0x40
		::UnityEngine::Transform* _NodeCurrentScore; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreItemControl*>* _ScoreItems; // 0x50
		::RPG::Client::UIStateCtrl* _EndlessModeProgressStateCtrl; // 0x58
		::UnityEngine::UI::Text* _TextEndlessCurrentScore; // 0x60
		::UnityEngine::UI::Text* _TextEndlessTargetScore; // 0x68
		::UnityEngine::UI::Slider* _EndlessModeProgressSlider; // 0x70
		::UnityEngine::Animation* _AnimEndlessFinish; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetNodeCurrentScore()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL_GETNODECURRENTSCORE_OFFSET))(this);
		}

		::System::Void SetEndPosition(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL_SETENDPOSITION_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__REFRESHMODE_OFFSET))(this);
		}

		::System::Void _RefreshEndlessProgressState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL__REFRESHENDLESSPROGRESSSTATE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
