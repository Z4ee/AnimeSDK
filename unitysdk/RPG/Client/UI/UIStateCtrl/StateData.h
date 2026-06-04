#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class BaseAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xCB06780)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCB06300)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_2FDE146A62E65189_OFFSET UNITYSDK_OFFSET(0xCB05E30)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_30615810974CEB89_OFFSET UNITYSDK_OFFSET(0xCB066C0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xCB064D0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0xCB065C0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_EDD1E462DAA20B4E_OFFSET UNITYSDK_OFFSET(0xCB06360)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xCB06790)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB067A0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int StateData_TypeDefinitionIndex = 69151;

	class StateData : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::BaseAction*>* Actions; // 0x18
		::RPG::Client::UIStateCtrl* _OwnerUIStateCtrl_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_EDD1E462DAA20B4E(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_EDD1E462DAA20B4E_OFFSET))(this, a1);
		}

		::System::Void Method_1_3FC863B885E15ED5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_3FC863B885E15ED5_OFFSET))(this);
		}

		::System::Single Method_1_2FDE146A62E65189()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_2FDE146A62E65189_OFFSET))(this);
		}

		::System::Void Method_1_56E8ED155DF34A44()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_56E8ED155DF34A44_OFFSET))(this);
		}

		::System::Int32 Method_1_30615810974CEB89(::RPG::Client::UI::UIStateCtrl::BaseAction* a1, ::RPG::Client::UI::UIStateCtrl::BaseAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::BaseAction*, ::RPG::Client::UI::UIStateCtrl::BaseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_30615810974CEB89_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIStateCtrl* get_OwnerUIStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET))(this);
		}

		::System::Void set_OwnerUIStateCtrl(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET))(this, a1);
		}
	};
}
