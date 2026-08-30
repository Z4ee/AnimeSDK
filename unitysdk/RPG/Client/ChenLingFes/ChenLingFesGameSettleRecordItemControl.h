#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameSettleRecordItemViewModel; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB3B0D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3B180)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB3AE80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB3AD60)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameSettleRecordItemControl_TypeDefinitionIndex = 80017;

	class ChenLingFesGameSettleRecordItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::UnityEngine::UI::Text* _TextTitle; // 0x38
		::UnityEngine::UI::Text* _TextStarCount; // 0x40
		::UnityEngine::UI::Text* _TextScore; // 0x48
		::RPG::Client::UIStateCtrl* _State; // 0x50
		::UnityEngine::UI::Text* _TextEndlessNum; // 0x58
		::UnityEngine::UI::Text* _TextEndlessNumUnit; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameSettleRecordItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleRecordItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLERECORDITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
