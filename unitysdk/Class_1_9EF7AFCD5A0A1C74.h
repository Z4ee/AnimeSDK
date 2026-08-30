#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIStateCtrlStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }

#define CLASS_1_9EF7AFCD5A0A1C74_GET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x15231D70)
#define CLASS_1_9EF7AFCD5A0A1C74_GET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x15231D30)
#define CLASS_1_9EF7AFCD5A0A1C74_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x15231D90)
#define CLASS_1_9EF7AFCD5A0A1C74_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x15231D50)
#define CLASS_1_9EF7AFCD5A0A1C74_GET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x15231DB0)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15231BB0)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15231AF0)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_482761CB050F1A57_OFFSET UNITYSDK_OFFSET(0x15231B60)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_8A1C979A2319B852_OFFSET UNITYSDK_OFFSET(0x15231C10)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_8C637C6318E207AD_OFFSET UNITYSDK_OFFSET(0x15231C60)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15231CE0)
#define CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_F754FB46877347EB_OFFSET UNITYSDK_OFFSET(0x152319F0)
#define CLASS_1_9EF7AFCD5A0A1C74_SET_CURRENTPLAYTIME_OFFSET UNITYSDK_OFFSET(0x15231D80)
#define CLASS_1_9EF7AFCD5A0A1C74_SET_CURRENTSTATEDATA_OFFSET UNITYSDK_OFFSET(0x15231D40)
#define CLASS_1_9EF7AFCD5A0A1C74_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x15231DA0)
#define CLASS_1_9EF7AFCD5A0A1C74_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET UNITYSDK_OFFSET(0x15231D60)
#define CLASS_1_9EF7AFCD5A0A1C74_SET_PARENTUISTATECTRL_OFFSET UNITYSDK_OFFSET(0x15231DC0)
#define CLASS_1_9EF7AFCD5A0A1C74__CTOR_OFFSET UNITYSDK_OFFSET(0x15231DD0)

inline static constexpr unsigned int Class_1_9EF7AFCD5A0A1C74_TypeDefinitionIndex = 73970;

class Class_1_9EF7AFCD5A0A1C74 : public ::System::Object
{
public:
	::RPG::Client::UI::UIStateCtrl::StateData* _CurrentStateData_k__BackingField; // 0x10
	::RPG::Client::UIStateCtrl* _ParentUIStateCtrl_k__BackingField; // 0x18
	::System::Action* _OnUIStatePlayCompletedAction_k__BackingField; // 0x20
	::System::Single _CurrentPlayTime_k__BackingField; // 0x28
	::RPG::Client::UIStateCtrlStatus _CurrentStatus_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F754FB46877347EB(::RPG::Client::UIStateCtrlStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrlStatus))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_F754FB46877347EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_482761CB050F1A57(::RPG::Client::UI::UIStateCtrl::StateData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::StateData*))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_482761CB050F1A57_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A1C979A2319B852(::RPG::Client::UIStateCtrl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_8A1C979A2319B852_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C637C6318E207AD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_8C637C6318E207AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::Client::UI::UIStateCtrl::StateData* get_CurrentStateData()
	{
		return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_GET_CURRENTSTATEDATA_OFFSET))(this);
	}

	::System::Void set_CurrentStateData(::RPG::Client::UI::UIStateCtrl::StateData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::StateData*))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_SET_CURRENTSTATEDATA_OFFSET))(this, a1);
	}

	::System::Action* get_OnUIStatePlayCompletedAction()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_GET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET))(this);
	}

	::System::Void set_OnUIStatePlayCompletedAction(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_SET_ONUISTATEPLAYCOMPLETEDACTION_OFFSET))(this, a1);
	}

	::System::Single get_CurrentPlayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_GET_CURRENTPLAYTIME_OFFSET))(this);
	}

	::System::Void set_CurrentPlayTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_SET_CURRENTPLAYTIME_OFFSET))(this, a1);
	}

	::RPG::Client::UIStateCtrlStatus get_CurrentStatus()
	{
		return ((::RPG::Client::UIStateCtrlStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_GET_CURRENTSTATUS_OFFSET))(this);
	}

	::System::Void set_CurrentStatus(::RPG::Client::UIStateCtrlStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrlStatus))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_SET_CURRENTSTATUS_OFFSET))(this, a1);
	}

	::RPG::Client::UIStateCtrl* get_ParentUIStateCtrl()
	{
		return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_GET_PARENTUISTATECTRL_OFFSET))(this);
	}

	::System::Void set_ParentUIStateCtrl(::RPG::Client::UIStateCtrl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + CLASS_1_9EF7AFCD5A0A1C74_SET_PARENTUISTATECTRL_OFFSET))(this, a1);
	}
};
