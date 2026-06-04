#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace RPG::Client { class ToggleButton; }
namespace RPG::Client { class ToggleButtonGroup_ToggleEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TOGGLEBUTTONGROUP_ANYTOGGLESON_OFFSET UNITYSDK_OFFSET(0xCA7BA60)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_GET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0xCA7C830)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_NOTIFYTOGGLEON_OFFSET UNITYSDK_OFFSET(0xCA7BBE0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_REGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0xCA7BF80)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_SETTOGGLEON_OFFSET UNITYSDK_OFFSET(0xCA7C560)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_SET_ALLOWSWITCHOFF_OFFSET UNITYSDK_OFFSET(0xCA7C840)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_START_OFFSET UNITYSDK_OFFSET(0xCA7C710)
#define RPG_CLIENT_TOGGLEBUTTONGROUP_UNREGISTERTOGGLE_OFFSET UNITYSDK_OFFSET(0xCA7BE40)
#define RPG_CLIENT_TOGGLEBUTTONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xCA7C310)
#define RPG_CLIENT_TOGGLEBUTTONGROUP__ENSUREVALIDSTATE_OFFSET UNITYSDK_OFFSET(0xCA7C760)
#define RPG_CLIENT_TOGGLEBUTTONGROUP__VALIDATETOGGLEISINGROUP_OFFSET UNITYSDK_OFFSET(0xCA7C3A0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xCA7C850)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButtonGroup_TypeDefinitionIndex = 67914;

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

		::System::Void RegisterToggle(::RPG::Client::ToggleButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_REGISTERTOGGLE_OFFSET))(this, a1);
		}

		::System::Void UnregisterToggle(::RPG::Client::ToggleButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_UNREGISTERTOGGLE_OFFSET))(this, a1);
		}

		::System::Boolean AnyTogglesOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_ANYTOGGLESON_OFFSET))(this);
		}

		::System::Void NotifyToggleOn(::RPG::Client::ToggleButton* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_NOTIFYTOGGLEON_OFFSET))(this, a1, a2);
		}

		::System::Void SetToggleOn(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_SETTOGGLEON_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_START_OFFSET))(this);
		}

		::System::Void _EnsureValidState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP__ENSUREVALIDSTATE_OFFSET))(this);
		}

		::System::Void _ValidateToggleIsInGroup(::RPG::Client::ToggleButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP__VALIDATETOGGLEISINGROUP_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowSwitchOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_GET_ALLOWSWITCHOFF_OFFSET))(this);
		}

		::System::Void set_AllowSwitchOff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_SET_ALLOWSWITCHOFF_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___IFIXBASEPROXY_START_OFFSET))(this);
		}
	};
}
