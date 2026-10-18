#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0xCAC17D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC1900)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC1390)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAC12D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastIncomeChangeControl_TypeDefinitionIndex = 81356;

	class ChenLingFesToastIncomeChangeControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		// static const ::System::String* PREFAB_PATH; // 0x0
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x58
		::UnityEngine::RectTransform* _NodeRoot; // 0x60
		::UnityEngine::UI::Text* _TextValue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Single GetHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTINCOMECHANGECONTROL_GETHEIGHT_OFFSET))(this);
		}
	};
}
