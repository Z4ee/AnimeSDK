#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/BaseAction.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_GET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0xE309CF0)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_16480B1867AF51ED_OFFSET UNITYSDK_OFFSET(0xE309690)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xE309A70)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE309CB0)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xE3098C0)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xE309770)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_BA0DC2F7F154B425_OFFSET UNITYSDK_OFFSET(0xE309B30)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_SET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0xE309D00)
#define RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE309D10)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int AsyncAction_TypeDefinitionIndex = 73966;

	class AsyncAction : public ::RPG::Client::UI::UIStateCtrl::BaseAction
	{
	public:
		::System::Single Duration; // 0x20
		::System::Single _CurrentCostTime_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_16480B1867AF51ED(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_16480B1867AF51ED_OFFSET))(this, a1);
		}

		::System::Void Method_2_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_2_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_2450CFC043E97F54_OFFSET))(this);
		}

		::System::String* Method_2_BA0DC2F7F154B425()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_BA0DC2F7F154B425_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Single get_CurrentCostTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_GET_CURRENTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentCostTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_ASYNCACTION_SET_CURRENTCOSTTIME_OFFSET))(this, a1);
		}
	};
}
