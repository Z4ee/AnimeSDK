#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class BaseAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xB3A69E0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB3A6550)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_30615810974CEB89_OFFSET UNITYSDK_OFFSET(0xB3A6920)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_57CD51AAF699439D_OFFSET UNITYSDK_OFFSET(0xB3A6070)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_867AF37B6C9E4C74_OFFSET UNITYSDK_OFFSET(0xB3A65B0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0xB3A6800)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB3A6730)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xB3A69F0)
#define RPG_CLIENT_UI_UISTATECTRL_STATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A6A00)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int StateData_TypeDefinitionIndex = 68177;

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

		::System::Void Method_1_867AF37B6C9E4C74(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_867AF37B6C9E4C74_OFFSET))(this, a1);
		}

		::System::Void Method_1_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Single Method_1_57CD51AAF699439D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_57CD51AAF699439D_OFFSET))(this);
		}

		::System::Void Method_1_A66B981E1EA3E23D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_A66B981E1EA3E23D_OFFSET))(this);
		}

		::System::Int32 Method_1_30615810974CEB89(::RPG::Client::UI::UIStateCtrl::BaseAction* a1, ::RPG::Client::UI::UIStateCtrl::BaseAction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::BaseAction*, ::RPG::Client::UI::UIStateCtrl::BaseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_METHOD_1_30615810974CEB89_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIStateCtrl* get_OwnerUIStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_GET_OWNERUISTATECTRL_OFFSET))(this);
		}

		::System::Void set_OwnerUIStateCtrl(::RPG::Client::UIStateCtrl* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_STATEDATA_SET_OWNERUISTATECTRL_OFFSET))(this, value);
		}
	};
}
