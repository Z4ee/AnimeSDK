#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/InstantAction.h"

namespace RPG::Client::UI::UIStateCtrl { class SwitchColorData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION_METHOD_3_6F6DD3DC870AC77B_OFFSET UNITYSDK_OFFSET(0xCB067E0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB073E0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchColorAction_TypeDefinitionIndex = 69137;

	class SwitchColorAction : public ::RPG::Client::UI::UIStateCtrl::InstantAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::SwitchColorData*>* SwitchColorDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_6F6DD3DC870AC77B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHCOLORACTION_METHOD_3_6F6DD3DC870AC77B_OFFSET))(this);
		}
	};
}
