#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client::UI::UIStateCtrl { class SwitchColorData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION_METHOD_3_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x1B1202E0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B120F60)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchColorAction_TypeDefinitionIndex = 73956;

	class SwitchColorAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::SwitchColorData*>* SwitchColorDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_70484F0C4668EBF2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION_METHOD_3_70484F0C4668EBF2_OFFSET))(this);
		}
	};
}
