#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class BaseAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x16FE4220)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16FE3C70)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_2FDE146A62E65189_OFFSET UNITYSDK_OFFSET(0x16FE3820)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_30615810974CEB89_OFFSET UNITYSDK_OFFSET(0x16FE4160)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x16FE3ED0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_6D22709430EDAB68_OFFSET UNITYSDK_OFFSET(0x16FE3CD0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0x16FE3FC0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x16FE4230)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE4240)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int StateData_TypeDefinitionIndex = 70671;

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

		::System::Void Method_1_6D22709430EDAB68(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_6D22709430EDAB68_OFFSET))(this, a1);
		}

		::System::Void Method_1_3FC863B885E15ED5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_3FC863B885E15ED5_OFFSET))(this);
		}

		::System::Single Method_1_2FDE146A62E65189()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_2FDE146A62E65189_OFFSET))(this);
		}

		::System::Void Method_1_A07C2061B55C1547()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_A07C2061B55C1547_OFFSET))(this);
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
