#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace RPG::Client { class ToggleButton; }
namespace RPG::Client { class ToggleButtonGroup_ToggleEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TOGGLEBUTTONGROUP_ANYTOGGLESON_OFFSET UNITYSDK_OFFSET(0xB3230A0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_GET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0xB323CA0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_NOTIFYTOGGLEON_OFFSET UNITYSDK_OFFSET(0xB3231F0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_REGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0xB323550)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_SETTOGGLEON_OFFSET UNITYSDK_OFFSET(0xB3239C0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_SET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0xB323CB0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_START_OFFSET UNITYSDK_OFFSET(0xB323B70)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_UNREGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0xB3234A0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB323800)
#define RPG_CLIENT_TOGGLEBUTTONGROUP__ENSUREVALIDSTATE_OFFSET UNITYSDK_OFFSET(0xB323BC0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP__VALIDATETOGGLEISINGROUP_OFFSET UNITYSDK_OFFSET(0xB323890)
#define RPG_CLIENT_TOGGLEBUTTONGROUP___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xB323CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButtonGroup_TypeDefinitionIndex = 66972;

	class ToggleButtonGroup : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::RPG::Client::ToggleButtonGroup_ToggleEvent* onValueChanged; // 0x18
		::System::Boolean _AllowSwitchOff; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ToggleButton*>* _ToggleBtns; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterToggle(::RPG::Client::ToggleButton* toggleBtn)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_REGISTERTOGGLE_OFFSET))(this, toggleBtn);
		}

		::System::Void UnregisterToggle(::RPG::Client::ToggleButton* toggleBtn)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_UNREGISTERTOGGLE_OFFSET))(this, toggleBtn);
		}

		::System::Boolean AnyTogglesOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_ANYTOGGLESON_OFFSET))(this);
		}

		::System::Void NotifyToggleOn(::RPG::Client::ToggleButton* toggleBtn, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_NOTIFYTOGGLEON_OFFSET))(this, toggleBtn, sendCallback);
		}

		::System::Void SetToggleOn(::System::Int32 index, ::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_SETTOGGLEON_OFFSET))(this, index, on);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_START_OFFSET))(this);
		}

		::System::Void _EnsureValidState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP__ENSUREVALIDSTATE_OFFSET))(this);
		}

		::System::Void _ValidateToggleIsInGroup(::RPG::Client::ToggleButton* toggleBtn)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP__VALIDATETOGGLEISINGROUP_OFFSET))(this, toggleBtn);
		}

		::System::Boolean get_AllowSwitchOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_GET_ALLOWSWITCHOFF_OFFSET))(this);
		}

		::System::Void set_AllowSwitchOff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_SET_ALLOWSWITCHOFF_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___IFIXBASEPROXY_START_OFFSET))(this);
		}
	};
}
