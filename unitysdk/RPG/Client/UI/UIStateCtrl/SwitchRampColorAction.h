#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client::UI::UIStateCtrl { class SwitchRampColorData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class IRampColor; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_METHOD_3_0F9501A1A0E8C6CD_OFFSET UNITYSDK_OFFSET(0xCB09250)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_METHOD_3_4D512A12A2845DB4_OFFSET UNITYSDK_OFFSET(0xCB09060)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB097A0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchRampColorAction_TypeDefinitionIndex = 69142;

	class SwitchRampColorAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::SwitchRampColorData*>* SwitchRampColorDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4D512A12A2845DB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_METHOD_3_4D512A12A2845DB4_OFFSET))(this);
		}

		::System::Void Method_3_0F9501A1A0E8C6CD(::UnityEngine::UI::IRampColor* a1, ::RPG::Client::UI::UIStateCtrl::SwitchRampColorData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::IRampColor*, ::RPG::Client::UI::UIStateCtrl::SwitchRampColorData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHRAMPCOLORACTION_METHOD_3_0F9501A1A0E8C6CD_OFFSET))(this, a1, a2);
		}
	};
}
