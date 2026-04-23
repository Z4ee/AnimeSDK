#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GETSTATEDATABYSTATENAME_OFFSET UNITYSDK_OFFSET(0xB438650)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GET_STATEDATAS_OFFSET UNITYSDK_OFFSET(0xB438700)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_PLAYASSUBSTATE_OFFSET UNITYSDK_OFFSET(0xB438530)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_TRYUPDATESTATUSOFCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xB4386B0)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB4384D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIStateCtrl_UIStateCtrlInternalAccessor_TypeDefinitionIndex = 63718;

	class UIStateCtrl_UIStateCtrlInternalAccessor : public ::System::Object
	{
	public:
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x10

		::System::Void _ctor(::RPG::Client::UIStateCtrl* uiStateCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR__CTOR_OFFSET))(this, uiStateCtrl);
		}

		::System::Void PlayAsSubState(::System::String* stateName, ::System::Boolean isImmediately, ::System::Action* onUIStatePlayCompleted, ::RPG::Client::UIStateCtrl* parentUIStateCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_PLAYASSUBSTATE_OFFSET))(this, stateName, isImmediately, onUIStatePlayCompleted, parentUIStateCtrl);
		}

		::RPG::Client::UI::UIStateCtrl::StateData* GetStateDataByStateName(::System::String* stateName)
		{
			return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GETSTATEDATABYSTATENAME_OFFSET))(this, stateName);
		}

		::System::Void TryUpdateStatusOfCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_TRYUPDATESTATUSOFCURRENTSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::StateData*>* get_StateDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::StateData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GET_STATEDATAS_OFFSET))(this);
		}
	};
}
