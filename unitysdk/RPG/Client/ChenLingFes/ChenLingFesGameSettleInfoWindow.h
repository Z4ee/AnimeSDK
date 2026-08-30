#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_43BD383C98B4C0C5_247;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameSettleInfoViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameSettleRecordItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB3A020)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xCB39040)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB39860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__ONCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCB3A8C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB39140)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__SETUPRECORDITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xCB3A330)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__SETUPTEXT_OFFSET UNITYSDK_OFFSET(0xCB3A0D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__SUBSCRIBEMESSAGES_OFFSET UNITYSDK_OFFSET(0xCB3A800)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameSettleInfoWindow_TypeDefinitionIndex = 80018;

	class ChenLingFesGameSettleInfoWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnQuit; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameSettleRecordItemControl*>* _RecordItemControls; // 0x50
		::UnityEngine::UI::Text* _TextFirstSubTitle; // 0x58
		::RPG::Client::AnimatorButton* _BtnRestart; // 0x60
		::UnityEngine::UI::Text* _TextBtnQuit; // 0x68
		::UnityEngine::UI::Text* _TextTitle; // 0x70
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x78
		::UnityEngine::UI::Text* _TextTalk; // 0x80
		::UnityEngine::UI::Text* _TextSecondSubTitle; // 0x88
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x90
		::UnityEngine::UI::Text* _TextFirstSubValue; // 0x98
		::RPG::Client::PrefabLoadMeta* _RecordLoadMeta; // 0xA0

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SubscribeMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__SUBSCRIBEMESSAGES_OFFSET))(this);
		}

		::System::Void _OnCloseMessage(::Class_1_43BD383C98B4C0C5_247* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_247*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__ONCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SetupText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__SETUPTEXT_OFFSET))(this);
		}

		::System::Void _SetupRecordItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW__SETUPRECORDITEMCONTROLS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
