#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/ActionStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xA64CA10)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA64C9F0)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_METHOD_1_8A1C979A2319B852_OFFSET UNITYSDK_OFFSET(0xA64C550)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA64C9B0)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_METHOD_1_FC25C1AE120A80A5_OFFSET UNITYSDK_OFFSET(0xA64C630)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_OWNERUISTATECTRL_OFFSET UNITYSDK_OFFSET(0xA64CA20)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA64CA00)
#define RPG_CLIENT_UI_UISTATECTRL_BASEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA64C950)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int BaseAction_TypeDefinitionIndex = 60728;

	class BaseAction : public ::System::Object
	{
	public:
		::System::Single StartTime; // 0x10
		::RPG::Client::UI::UIStateCtrl::ActionStatus _Status_k__BackingField; // 0x14
		::RPG::Client::UIStateCtrl* _OwnerUIStateCtrl_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FC25C1AE120A80A5(::RPG::Client::UI::UIStateCtrl::ActionStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::ActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_METHOD_1_FC25C1AE120A80A5_OFFSET))(this, a1);
		}

		::System::Void Method_1_8A1C979A2319B852(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_METHOD_1_8A1C979A2319B852_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::RPG::Client::UI::UIStateCtrl::ActionStatus get_Status()
		{
			return ((::RPG::Client::UI::UIStateCtrl::ActionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::UI::UIStateCtrl::ActionStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::ActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::Client::UIStateCtrl* get_OwnerUIStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_GET_OWNERUISTATECTRL_OFFSET))(this);
		}

		::System::Void set_OwnerUIStateCtrl(::RPG::Client::UIStateCtrl* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_BASEACTION_SET_OWNERUISTATECTRL_OFFSET))(this, value);
		}
	};
}
