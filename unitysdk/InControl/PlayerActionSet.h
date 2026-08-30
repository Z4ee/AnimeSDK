#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }
namespace InControl { class PlayerAction; }
namespace InControl { class PlayerOneAxisAction; }
namespace InControl { class PlayerTwoAxisAction; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_PLAYERACTIONSET_ADDPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1B571B70)
#define INCONTROL_PLAYERACTIONSET_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1B575650)
#define INCONTROL_PLAYERACTIONSET_CLEARACTIONSTATEWHENCOMBO_OFFSET UNITYSDK_OFFSET(0x1B577D30)
#define INCONTROL_PLAYERACTIONSET_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x1B576B30)
#define INCONTROL_PLAYERACTIONSET_CREATEONEAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1B575E30)
#define INCONTROL_PLAYERACTIONSET_CREATEPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1B575990)
#define INCONTROL_PLAYERACTIONSET_CREATETWOAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1B575F60)
#define INCONTROL_PLAYERACTIONSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B575920)
#define INCONTROL_PLAYERACTIONSET_FINDACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1B5759D0)
#define INCONTROL_PLAYERACTIONSET_GETPLAYERACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x1B576200)
#define INCONTROL_PLAYERACTIONSET_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1B575610)
#define INCONTROL_PLAYERACTIONSET_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1B576DE0)
#define INCONTROL_PLAYERACTIONSET_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1B5755B0)
#define INCONTROL_PLAYERACTIONSET_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B575710)
#define INCONTROL_PLAYERACTIONSET_GET_EXCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1B5755F0)
#define INCONTROL_PLAYERACTIONSET_GET_INCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1B5755D0)
#define INCONTROL_PLAYERACTIONSET_GET_ISLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1B574BA0)
#define INCONTROL_PLAYERACTIONSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B576120)
#define INCONTROL_PLAYERACTIONSET_GET_LISTENOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B576D90)
#define INCONTROL_PLAYERACTIONSET_GET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1B575730)
#define INCONTROL_PLAYERACTIONSET_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x1B575630)
#define INCONTROL_PLAYERACTIONSET_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1B575750)
#define INCONTROL_PLAYERACTIONSET_HASBINDING_OFFSET UNITYSDK_OFFSET(0x1B574BD0)
#define INCONTROL_PLAYERACTIONSET_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B5774B0)
#define INCONTROL_PLAYERACTIONSET_LOAD_OFFSET UNITYSDK_OFFSET(0x1B577C30)
#define INCONTROL_PLAYERACTIONSET_REMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x1B576CD0)
#define INCONTROL_PLAYERACTIONSET_REMOVETOWAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1B5760C0)
#define INCONTROL_PLAYERACTIONSET_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1B5756B0)
#define INCONTROL_PLAYERACTIONSET_RESET_OFFSET UNITYSDK_OFFSET(0x1B576AB0)
#define INCONTROL_PLAYERACTIONSET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0x1B576E20)
#define INCONTROL_PLAYERACTIONSET_SAVE_OFFSET UNITYSDK_OFFSET(0x1B577BD0)
#define INCONTROL_PLAYERACTIONSET_SET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1B575620)
#define INCONTROL_PLAYERACTIONSET_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1B5755C0)
#define INCONTROL_PLAYERACTIONSET_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B575720)
#define INCONTROL_PLAYERACTIONSET_SET_EXCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1B575600)
#define INCONTROL_PLAYERACTIONSET_SET_INCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1B5755E0)
#define INCONTROL_PLAYERACTIONSET_SET_LISTENOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B576DA0)
#define INCONTROL_PLAYERACTIONSET_SET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1B575740)
#define INCONTROL_PLAYERACTIONSET_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x1B575640)
#define INCONTROL_PLAYERACTIONSET_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1B575760)
#define INCONTROL_PLAYERACTIONSET_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B576280)
#define INCONTROL_PLAYERACTIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B575770)

namespace InControl
{
	inline static constexpr unsigned int PlayerActionSet_TypeDefinitionIndex = 39510;

	class PlayerActionSet : public ::System::Object
	{
	public:
		// static const ::System::UInt16 currentDataFormatVersion = 0x2; // 0x0
		::System::Collections::Generic::List_1<::InControl::PlayerAction*>* actions; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::InControl::PlayerAction*>* actionsByName; // 0x18
		::InControl::PlayerAction* listenWithAction; // 0x20
		::System::Collections::Generic::List_1<::InControl::PlayerTwoAxisAction*>* twoAxisActions; // 0x28
		::InControl::InputDevice* _Device_k__BackingField; // 0x30
		::System::Object* _UserData_k__BackingField; // 0x38
		::InControl::InputDevice* activeDevice; // 0x40
		::InControl::BindingListenOptions* listenOptions; // 0x48
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* _IncludeDevices_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::InControl::PlayerOneAxisAction*>* oneAxisActions; // 0x58
		::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* OnLastInputTypeChanged; // 0x60
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* _Actions_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* _ExcludeDevices_k__BackingField; // 0x70
		::InControl::InputDeviceStyle LastDeviceStyle; // 0x78
		::InControl::InputDeviceClass LastDeviceClass; // 0x7C
		::System::UInt64 LastInputTypeChangedTick; // 0x80
		::InControl::BindingSourceType LastInputType; // 0x88
		::System::Boolean _PreventInputWhileListeningForBinding_k__BackingField; // 0x8C
		::System::Boolean _Enabled_k__BackingField; // 0x8D
		::System::UInt64 _UpdateTick_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET__CTOR_OFFSET))(this);
		}

		::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_Device(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_DEVICE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::InControl::InputDevice*>* get_IncludeDevices()
		{
			return ((::System::Collections::Generic::List_1<::InControl::InputDevice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_INCLUDEDEVICES_OFFSET))(this);
		}

		::System::Void set_IncludeDevices(::System::Collections::Generic::List_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_INCLUDEDEVICES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::InControl::InputDevice*>* get_ExcludeDevices()
		{
			return ((::System::Collections::Generic::List_1<::InControl::InputDevice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_EXCLUDEDEVICES_OFFSET))(this);
		}

		::System::Void set_ExcludeDevices(::System::Collections::Generic::List_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_EXCLUDEDEVICES_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* get_Actions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ACTIONS_OFFSET))(this);
		}

		::System::Void set_Actions(::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_ACTIONS_OFFSET))(this, a1);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_UPDATETICK_OFFSET))(this, a1);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_PreventInputWhileListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Void set_PreventInputWhileListeningForBinding(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET))(this, a1);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_USERDATA_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_DESTROY_OFFSET))(this);
		}

		::InControl::PlayerAction* CreatePlayerAction(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CREATEPLAYERACTION_OFFSET))(this, a1);
		}

		::System::Void AddPlayerAction(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_ADDPLAYERACTION_OFFSET))(this, a1);
		}

		::InControl::PlayerOneAxisAction* CreateOneAxisPlayerAction(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2)
		{
			return ((::InControl::PlayerOneAxisAction*(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CREATEONEAXISPLAYERACTION_OFFSET))(this, a1, a2);
		}

		::InControl::PlayerTwoAxisAction* CreateTwoAxisPlayerAction(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2, ::InControl::PlayerAction* a3, ::InControl::PlayerAction* a4)
		{
			return ((::InControl::PlayerTwoAxisAction*(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CREATETWOAXISPLAYERACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveTowAxisPlayerAction(::InControl::PlayerTwoAxisAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerTwoAxisAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_REMOVETOWAXISPLAYERACTION_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* get_Item(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ITEM_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* GetPlayerActionByName(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GETPLAYERACTIONBYNAME_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_RESET_OFFSET))(this);
		}

		::InControl::InputDevice* FindActiveDevice()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_FINDACTIVEDEVICE_OFFSET))(this);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Boolean HasBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_HASBINDING_OFFSET))(this, a1);
		}

		::System::Void RemoveBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_REMOVEBINDING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ISLISTENINGFORBINDING_OFFSET))(this);
		}

		::InControl::BindingListenOptions* get_ListenOptions()
		{
			return ((::InControl::BindingListenOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_LISTENOPTIONS_OFFSET))(this);
		}

		::System::Void set_ListenOptions(::InControl::BindingListenOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingListenOptions*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_LISTENOPTIONS_OFFSET))(this, a1);
		}

		::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ACTIVEDEVICE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* SaveData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SAVEDATA_OFFSET))(this);
		}

		::System::Void LoadData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_LOADDATA_OFFSET))(this, a1);
		}

		::System::String* Save()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SAVE_OFFSET))(this);
		}

		::System::Void Load(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_LOAD_OFFSET))(this, a1);
		}

		::System::Void ClearActionStateWhenCombo(::Il2CppArray<::InControl::InputControlType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CLEARACTIONSTATEWHENCOMBO_OFFSET))(this, a1);
		}
	};
}
