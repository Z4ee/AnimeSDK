#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client::UI::UIStateCtrl { class SwitchColorData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xB3A6A40)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A7710)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchColorAction_TypeDefinitionIndex = 68164;

	class SwitchColorAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::SwitchColorData*>* SwitchColorDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_6A0EBEECA245A27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
		}
	};
}
