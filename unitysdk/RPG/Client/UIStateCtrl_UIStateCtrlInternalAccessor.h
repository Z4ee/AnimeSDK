#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GETSTATEDATABYSTATENAME_OFFSET UNITYSDK_OFFSET(0x1830FA60)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1830FB30)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GET_STATEDATAS_OFFSET UNITYSDK_OFFSET(0x1830FB10)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_PLAYASSUBSTATE_OFFSET UNITYSDK_OFFSET(0x1830F940)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_TRYUPDATESTATUSOFCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1830FAC0)
#define RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1830F8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIStateCtrl_UIStateCtrlInternalAccessor_TypeDefinitionIndex = 66040;

	class UIStateCtrl_UIStateCtrlInternalAccessor : public ::System::Object
	{
	public:
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x10

		::System::Void _ctor(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void PlayAsSubState(::System::String* a1, ::System::Boolean a2, ::System::Action* a3, ::RPG::Client::UIStateCtrl* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_PLAYASSUBSTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::UI::UIStateCtrl::StateData* GetStateDataByStateName(::System::String* a1)
		{
			return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GETSTATEDATABYSTATENAME_OFFSET))(this, a1);
		}

		::System::Void TryUpdateStatusOfCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_TRYUPDATESTATUSOFCURRENTSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::StateData*>* get_StateDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::StateData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GET_STATEDATAS_OFFSET))(this);
		}

		::Class_1_6CC143B9599F1FCA* get_AssetLoader()
		{
			return ((::Class_1_6CC143B9599F1FCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UISTATECTRLINTERNALACCESSOR_GET_ASSETLOADER_OFFSET))(this);
		}
	};
}
