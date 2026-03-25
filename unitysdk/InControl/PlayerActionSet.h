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

#define INCONTROL_PLAYERACTIONSET_ADDPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x15C03EB0)
#define INCONTROL_PLAYERACTIONSET_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C06DB0)
#define INCONTROL_PLAYERACTIONSET_CLEARACTIONSTATEWHENCOMBO_OFFSET UNITYSDK_OFFSET(0x15C08D90)
#define INCONTROL_PLAYERACTIONSET_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x15C081D0)
#define INCONTROL_PLAYERACTIONSET_CREATEONEAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x15C07590)
#define INCONTROL_PLAYERACTIONSET_CREATEPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x15C070F0)
#define INCONTROL_PLAYERACTIONSET_CREATETWOAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x15C07670)
#define INCONTROL_PLAYERACTIONSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x15C07080)
#define INCONTROL_PLAYERACTIONSET_FINDACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15C07130)
#define INCONTROL_PLAYERACTIONSET_GETPLAYERACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x15C078E0)
#define INCONTROL_PLAYERACTIONSET_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x15C06D70)
#define INCONTROL_PLAYERACTIONSET_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15C08410)
#define INCONTROL_PLAYERACTIONSET_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x15C06D10)
#define INCONTROL_PLAYERACTIONSET_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15C06E70)
#define INCONTROL_PLAYERACTIONSET_GET_EXCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x15C06D50)
#define INCONTROL_PLAYERACTIONSET_GET_INCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x15C06D30)
#define INCONTROL_PLAYERACTIONSET_GET_ISLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x15C066C0)
#define INCONTROL_PLAYERACTIONSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15C077F0)
#define INCONTROL_PLAYERACTIONSET_GET_LISTENOPTIONS_OFFSET UNITYSDK_OFFSET(0x15C083C0)
#define INCONTROL_PLAYERACTIONSET_GET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x15C06E90)
#define INCONTROL_PLAYERACTIONSET_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x15C06D90)
#define INCONTROL_PLAYERACTIONSET_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C06EB0)
#define INCONTROL_PLAYERACTIONSET_HASBINDING_OFFSET UNITYSDK_OFFSET(0x15C066F0)
#define INCONTROL_PLAYERACTIONSET_LOADDATA_OFFSET UNITYSDK_OFFSET(0x15C08790)
#define INCONTROL_PLAYERACTIONSET_LOAD_OFFSET UNITYSDK_OFFSET(0x15C08CB0)
#define INCONTROL_PLAYERACTIONSET_REMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x15C08320)
#define INCONTROL_PLAYERACTIONSET_REMOVETOWAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x15C07790)
#define INCONTROL_PLAYERACTIONSET_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C06E10)
#define INCONTROL_PLAYERACTIONSET_RESET_OFFSET UNITYSDK_OFFSET(0x15C08160)
#define INCONTROL_PLAYERACTIONSET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0x15C08450)
#define INCONTROL_PLAYERACTIONSET_SAVE_OFFSET UNITYSDK_OFFSET(0x15C08C50)
#define INCONTROL_PLAYERACTIONSET_SET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x15C06D80)
#define INCONTROL_PLAYERACTIONSET_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x15C06D20)
#define INCONTROL_PLAYERACTIONSET_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15C06E80)
#define INCONTROL_PLAYERACTIONSET_SET_EXCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x15C06D60)
#define INCONTROL_PLAYERACTIONSET_SET_INCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x15C06D40)
#define INCONTROL_PLAYERACTIONSET_SET_LISTENOPTIONS_OFFSET UNITYSDK_OFFSET(0x15C083D0)
#define INCONTROL_PLAYERACTIONSET_SET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x15C06EA0)
#define INCONTROL_PLAYERACTIONSET_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x15C06DA0)
#define INCONTROL_PLAYERACTIONSET_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C06EC0)
#define INCONTROL_PLAYERACTIONSET_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C07970)
#define INCONTROL_PLAYERACTIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x15C06ED0)

namespace InControl
{
	inline static constexpr unsigned int PlayerActionSet_TypeDefinitionIndex = 31391;

	class PlayerActionSet : public ::System::Object
	{
	public:
		// static const ::System::UInt16 currentDataFormatVersion = 0x2; // 0x0
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* _IncludeDevices_k__BackingField; // 0x10
		::System::Object* _UserData_k__BackingField; // 0x18
		::InControl::BindingListenOptions* listenOptions; // 0x20
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* _ExcludeDevices_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::InControl::PlayerAction*>* actionsByName; // 0x30
		::InControl::InputDevice* _Device_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::InControl::PlayerTwoAxisAction*>* twoAxisActions; // 0x40
		::InControl::InputDevice* activeDevice; // 0x48
		::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* OnLastInputTypeChanged; // 0x50
		::System::Collections::Generic::List_1<::InControl::PlayerOneAxisAction*>* oneAxisActions; // 0x58
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* _Actions_k__BackingField; // 0x60
		::InControl::PlayerAction* listenWithAction; // 0x68
		::System::Collections::Generic::List_1<::InControl::PlayerAction*>* actions; // 0x70
		::System::UInt64 LastInputTypeChangedTick; // 0x78
		::System::Boolean _PreventInputWhileListeningForBinding_k__BackingField; // 0x80
		::System::Boolean _Enabled_k__BackingField; // 0x81
		::InControl::InputDeviceClass LastDeviceClass; // 0x84
		::System::UInt64 _UpdateTick_k__BackingField; // 0x88
		::InControl::BindingSourceType LastInputType; // 0x90
		::InControl::InputDeviceStyle LastDeviceStyle; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET__CTOR_OFFSET))(this);
		}

		::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_Device(::InControl::InputDevice* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_DEVICE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::InControl::InputDevice*>* get_IncludeDevices()
		{
			return ((::System::Collections::Generic::List_1<::InControl::InputDevice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_INCLUDEDEVICES_OFFSET))(this);
		}

		::System::Void set_IncludeDevices(::System::Collections::Generic::List_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_INCLUDEDEVICES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::InControl::InputDevice*>* get_ExcludeDevices()
		{
			return ((::System::Collections::Generic::List_1<::InControl::InputDevice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_EXCLUDEDEVICES_OFFSET))(this);
		}

		::System::Void set_ExcludeDevices(::System::Collections::Generic::List_1<::InControl::InputDevice*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_EXCLUDEDEVICES_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* get_Actions()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ACTIONS_OFFSET))(this);
		}

		::System::Void set_Actions(::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_ACTIONS_OFFSET))(this, value);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_UPDATETICK_OFFSET))(this, value);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_PreventInputWhileListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Void set_PreventInputWhileListeningForBinding(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET))(this, value);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_USERDATA_OFFSET))(this, value);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_DESTROY_OFFSET))(this);
		}

		::InControl::PlayerAction* CreatePlayerAction(::System::String* name)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CREATEPLAYERACTION_OFFSET))(this, name);
		}

		::System::Void AddPlayerAction(::InControl::PlayerAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_ADDPLAYERACTION_OFFSET))(this, action);
		}

		::InControl::PlayerOneAxisAction* CreateOneAxisPlayerAction(::InControl::PlayerAction* negativeAction, ::InControl::PlayerAction* positiveAction)
		{
			return ((::InControl::PlayerOneAxisAction*(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CREATEONEAXISPLAYERACTION_OFFSET))(this, negativeAction, positiveAction);
		}

		::InControl::PlayerTwoAxisAction* CreateTwoAxisPlayerAction(::InControl::PlayerAction* negativeXAction, ::InControl::PlayerAction* positiveXAction, ::InControl::PlayerAction* negativeYAction, ::InControl::PlayerAction* positiveYAction)
		{
			return ((::InControl::PlayerTwoAxisAction*(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CREATETWOAXISPLAYERACTION_OFFSET))(this, negativeXAction, positiveXAction, negativeYAction, positiveYAction);
		}

		::System::Void RemoveTowAxisPlayerAction(::InControl::PlayerTwoAxisAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerTwoAxisAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_REMOVETOWAXISPLAYERACTION_OFFSET))(this, action);
		}

		::InControl::PlayerAction* get_Item(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ITEM_OFFSET))(this, actionName);
		}

		::InControl::PlayerAction* GetPlayerActionByName(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GETPLAYERACTIONBYNAME_OFFSET))(this, actionName);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_UPDATE_OFFSET))(this, updateTick, deltaTime);
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

		::System::Boolean HasBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_HASBINDING_OFFSET))(this, binding);
		}

		::System::Void RemoveBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_REMOVEBINDING_OFFSET))(this, binding);
		}

		::System::Boolean get_IsListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ISLISTENINGFORBINDING_OFFSET))(this);
		}

		::InControl::BindingListenOptions* get_ListenOptions()
		{
			return ((::InControl::BindingListenOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_LISTENOPTIONS_OFFSET))(this);
		}

		::System::Void set_ListenOptions(::InControl::BindingListenOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingListenOptions*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SET_LISTENOPTIONS_OFFSET))(this, value);
		}

		::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_GET_ACTIVEDEVICE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* SaveData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SAVEDATA_OFFSET))(this);
		}

		::System::Void LoadData(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_LOADDATA_OFFSET))(this, data);
		}

		::System::String* Save()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_SAVE_OFFSET))(this);
		}

		::System::Void Load(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_LOAD_OFFSET))(this, data);
		}

		::System::Void ClearActionStateWhenCombo(::Il2CppArray<::InControl::InputControlType>* inputControlTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTIONSET_CLEARACTIONSTATEWHENCOMBO_OFFSET))(this, inputControlTypes);
		}
	};
}
