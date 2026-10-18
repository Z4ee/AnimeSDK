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

#define INCONTROL_PLAYERACTIONSET_ADDPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1BA70830)
#define INCONTROL_PLAYERACTIONSET_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1BA74310)
#define INCONTROL_PLAYERACTIONSET_CLEARACTIONSTATEWHENCOMBO_OFFSET UNITYSDK_OFFSET(0x1BA76A00)
#define INCONTROL_PLAYERACTIONSET_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x1BA75810)
#define INCONTROL_PLAYERACTIONSET_CREATEONEAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1BA74AF0)
#define INCONTROL_PLAYERACTIONSET_CREATEPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1BA74650)
#define INCONTROL_PLAYERACTIONSET_CREATETWOAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1BA74C20)
#define INCONTROL_PLAYERACTIONSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x1BA745E0)
#define INCONTROL_PLAYERACTIONSET_FINDACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1BA74690)
#define INCONTROL_PLAYERACTIONSET_GETPLAYERACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x1BA74EC0)
#define INCONTROL_PLAYERACTIONSET_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1BA742D0)
#define INCONTROL_PLAYERACTIONSET_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1BA75AB0)
#define INCONTROL_PLAYERACTIONSET_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1BA74270)
#define INCONTROL_PLAYERACTIONSET_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BA743D0)
#define INCONTROL_PLAYERACTIONSET_GET_EXCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1BA742B0)
#define INCONTROL_PLAYERACTIONSET_GET_INCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1BA74290)
#define INCONTROL_PLAYERACTIONSET_GET_ISLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1BA73860)
#define INCONTROL_PLAYERACTIONSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BA74DE0)
#define INCONTROL_PLAYERACTIONSET_GET_LISTENOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BA75A60)
#define INCONTROL_PLAYERACTIONSET_GET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1BA743F0)
#define INCONTROL_PLAYERACTIONSET_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x1BA742F0)
#define INCONTROL_PLAYERACTIONSET_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1BA74410)
#define INCONTROL_PLAYERACTIONSET_HASBINDING_OFFSET UNITYSDK_OFFSET(0x1BA73890)
#define INCONTROL_PLAYERACTIONSET_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BA76180)
#define INCONTROL_PLAYERACTIONSET_LOAD_OFFSET UNITYSDK_OFFSET(0x1BA76900)
#define INCONTROL_PLAYERACTIONSET_REMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x1BA759A0)
#define INCONTROL_PLAYERACTIONSET_REMOVETOWAXISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x1BA74D80)
#define INCONTROL_PLAYERACTIONSET_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1BA74370)
#define INCONTROL_PLAYERACTIONSET_RESET_OFFSET UNITYSDK_OFFSET(0x1BA75790)
#define INCONTROL_PLAYERACTIONSET_SAVEDATA_OFFSET UNITYSDK_OFFSET(0x1BA75AF0)
#define INCONTROL_PLAYERACTIONSET_SAVE_OFFSET UNITYSDK_OFFSET(0x1BA768A0)
#define INCONTROL_PLAYERACTIONSET_SET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1BA742E0)
#define INCONTROL_PLAYERACTIONSET_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1BA74280)
#define INCONTROL_PLAYERACTIONSET_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BA743E0)
#define INCONTROL_PLAYERACTIONSET_SET_EXCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1BA742C0)
#define INCONTROL_PLAYERACTIONSET_SET_INCLUDEDEVICES_OFFSET UNITYSDK_OFFSET(0x1BA742A0)
#define INCONTROL_PLAYERACTIONSET_SET_LISTENOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BA75A70)
#define INCONTROL_PLAYERACTIONSET_SET_PREVENTINPUTWHILELISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1BA74400)
#define INCONTROL_PLAYERACTIONSET_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x1BA74300)
#define INCONTROL_PLAYERACTIONSET_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1BA74420)
#define INCONTROL_PLAYERACTIONSET_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA74F40)
#define INCONTROL_PLAYERACTIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA74430)

namespace InControl
{
	inline static constexpr unsigned int PlayerActionSet_TypeDefinitionIndex = 40807;

	class PlayerActionSet : public ::System::Object
	{
	public:
		// static const ::System::UInt16 currentDataFormatVersion = 0x2; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::InControl::PlayerAction*>* actionsByName; // 0x10
		::System::Collections::Generic::List_1<::InControl::PlayerOneAxisAction*>* oneAxisActions; // 0x18
		::InControl::BindingListenOptions* listenOptions; // 0x20
		::System::Collections::Generic::List_1<::InControl::PlayerTwoAxisAction*>* twoAxisActions; // 0x28
		::InControl::InputDevice* _Device_k__BackingField; // 0x30
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::PlayerAction*>* _Actions_k__BackingField; // 0x38
		::System::Object* _UserData_k__BackingField; // 0x40
		::InControl::InputDevice* activeDevice; // 0x48
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* _IncludeDevices_k__BackingField; // 0x50
		::System::Action_3<::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle>* OnLastInputTypeChanged; // 0x58
		::System::Collections::Generic::List_1<::InControl::PlayerAction*>* actions; // 0x60
		::System::Collections::Generic::List_1<::InControl::InputDevice*>* _ExcludeDevices_k__BackingField; // 0x68
		::InControl::PlayerAction* listenWithAction; // 0x70
		::System::UInt64 _UpdateTick_k__BackingField; // 0x78
		::System::UInt64 LastInputTypeChangedTick; // 0x80
		::InControl::InputDeviceStyle LastDeviceStyle; // 0x88
		::System::Boolean _PreventInputWhileListeningForBinding_k__BackingField; // 0x8C
		::System::Boolean _Enabled_k__BackingField; // 0x8D
		::InControl::BindingSourceType LastInputType; // 0x90
		::InControl::InputDeviceClass LastDeviceClass; // 0x94

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
