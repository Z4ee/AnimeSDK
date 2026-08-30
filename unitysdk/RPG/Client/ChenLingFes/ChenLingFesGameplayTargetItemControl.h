#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayStarControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetItemViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB5D9D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL_SHOWANIMREFRESH_OFFSET UNITYSDK_OFFSET(0xCB5E840)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB5E8B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB5D8E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB5D620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPSTAR_OFFSET UNITYSDK_OFFSET(0xCB5E350)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPSTATE_OFFSET UNITYSDK_OFFSET(0xCB5DA80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPTARGETSCORE_OFFSET UNITYSDK_OFFSET(0xCB5E730)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPTITLE_OFFSET UNITYSDK_OFFSET(0xCB5E640)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetItemControl_TypeDefinitionIndex = 80001;

	class ChenLingFesGameplayTargetItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x38
		::RPG::Client::UIStateCtrl* _FrameStateCtrl; // 0x40
		::UnityEngine::Animation* _Anim; // 0x48
		::UnityEngine::UI::Text* _TextTitle; // 0x50
		::UnityEngine::UI::Text* _EndlessTargetScore; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayStarControl*>* _StarControls; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SetupState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPSTATE_OFFSET))(this);
		}

		::System::Void _SetupStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPSTAR_OFFSET))(this);
		}

		::System::Void _SetupTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPTITLE_OFFSET))(this);
		}

		::System::Void _SetupTargetScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL__SETUPTARGETSCORE_OFFSET))(this);
		}

		::System::Void ShowAnimRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL_SHOWANIMREFRESH_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
