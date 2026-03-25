#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/KeyCombo.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/InControl/OneAxisInputControl.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class BindingSourceListener; }
namespace InControl { class DeviceBindingSource; }
namespace InControl { class InputDevice; }
namespace InControl { class PlayerActionSet; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_PLAYERACTION_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x15C043A0)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_1_OFFSET UNITYSDK_OFFSET(0x15C04180)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_2_OFFSET UNITYSDK_OFFSET(0x15C042B0)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_3_OFFSET UNITYSDK_OFFSET(0x15C04300)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_4_OFFSET UNITYSDK_OFFSET(0x15C04330)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_OFFSET UNITYSDK_OFFSET(0x15C04010)
#define INCONTROL_PLAYERACTION_ADDDEVICEBINDING_OFFSET UNITYSDK_OFFSET(0x15C06B80)
#define INCONTROL_PLAYERACTION_ADD_ONBINDINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x15C03A50)
#define INCONTROL_PLAYERACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C03990)
#define INCONTROL_PLAYERACTION_CLEARBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C05000)
#define INCONTROL_PLAYERACTION_COUNTBINDINGSOFTYPE_OFFSET UNITYSDK_OFFSET(0x15C04DA0)
#define INCONTROL_PLAYERACTION_DETECTBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C06100)
#define INCONTROL_PLAYERACTION_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x15C04980)
#define INCONTROL_PLAYERACTION_GETDEVICEBINDINGSOURCE_OFFSET UNITYSDK_OFFSET(0x15C06BE0)
#define INCONTROL_PLAYERACTION_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x15C067E0)
#define INCONTROL_PLAYERACTION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x15C05400)
#define INCONTROL_PLAYERACTION_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x15C06790)
#define INCONTROL_PLAYERACTION_GET_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15C06C90)
#define INCONTROL_PLAYERACTION_GET_ISINLEAVINGCOMBO_OFFSET UNITYSDK_OFFSET(0x15C06CB0)
#define INCONTROL_PLAYERACTION_GET_ISLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x15C053D0)
#define INCONTROL_PLAYERACTION_GET_LASTINPUTTYPEISDEVICE_OFFSET UNITYSDK_OFFSET(0x15C066D0)
#define INCONTROL_PLAYERACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C06820)
#define INCONTROL_PLAYERACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15C03950)
#define INCONTROL_PLAYERACTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x15C03970)
#define INCONTROL_PLAYERACTION_GET_UNFILTEREDBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C05410)
#define INCONTROL_PLAYERACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C06840)
#define INCONTROL_PLAYERACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C03B10)
#define INCONTROL_PLAYERACTION_HARDREMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x15C04A60)
#define INCONTROL_PLAYERACTION_HASBINDING_OFFSET UNITYSDK_OFFSET(0x15C04950)
#define INCONTROL_PLAYERACTION_INDEXOFFIRSTINVALIDBINDING_OFFSET UNITYSDK_OFFSET(0x15C04F70)
#define INCONTROL_PLAYERACTION_INSERTBINDINGAT_OFFSET UNITYSDK_OFFSET(0x15C044A0)
#define INCONTROL_PLAYERACTION_LISTENFORBINDINGREPLACING_OFFSET UNITYSDK_OFFSET(0x15C05210)
#define INCONTROL_PLAYERACTION_LISTENFORBINDING_OFFSET UNITYSDK_OFFSET(0x15C05200)
#define INCONTROL_PLAYERACTION_LOAD_OFFSET UNITYSDK_OFFSET(0x15C06860)
#define INCONTROL_PLAYERACTION_REMOVEBINDINGAT_OFFSET UNITYSDK_OFFSET(0x15C04CF0)
#define INCONTROL_PLAYERACTION_REMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x15C04CB0)
#define INCONTROL_PLAYERACTION_REMOVEFIRSTBINDINGOFTYPE_OFFSET UNITYSDK_OFFSET(0x15C04E40)
#define INCONTROL_PLAYERACTION_REMOVEORPHANEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C05420)
#define INCONTROL_PLAYERACTION_REMOVE_ONBINDINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x15C03AB0)
#define INCONTROL_PLAYERACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C039F0)
#define INCONTROL_PLAYERACTION_REPLACEBINDING_OFFSET UNITYSDK_OFFSET(0x15C046E0)
#define INCONTROL_PLAYERACTION_RESETBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C050C0)
#define INCONTROL_PLAYERACTION_SAVE_OFFSET UNITYSDK_OFFSET(0x15C06A80)
#define INCONTROL_PLAYERACTION_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x15C05600)
#define INCONTROL_PLAYERACTION_SET_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15C06CA0)
#define INCONTROL_PLAYERACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C06830)
#define INCONTROL_PLAYERACTION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15C03960)
#define INCONTROL_PLAYERACTION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x15C03980)
#define INCONTROL_PLAYERACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C06850)
#define INCONTROL_PLAYERACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C03B20)
#define INCONTROL_PLAYERACTION_STOPLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x15C05390)
#define INCONTROL_PLAYERACTION_UPDATEBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C05620)
#define INCONTROL_PLAYERACTION_UPDATEVISIBLEBINDINGS_OFFSET UNITYSDK_OFFSET(0x15C04BC0)
#define INCONTROL_PLAYERACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C05500)
#define INCONTROL_PLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15C03B30)
#define INCONTROL_PLAYERACTION__UPDATECOMBO_OFFSET UNITYSDK_OFFSET(0x15C05ED0)

namespace InControl
{
	inline static constexpr unsigned int PlayerAction_TypeDefinitionIndex = 31390;

	class PlayerAction : public ::InControl::OneAxisInputControl
	{
	public:
		::System::Action* OnBindingsChanged; // 0x68
		::Il2CppArray<::InControl::BindingSourceListener*>* bindingSourceListeners; // 0x70
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x78
		::InControl::PlayerActionSet* _Owner_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* defaultBindings; // 0x88
		::InControl::InputDevice* device; // 0x90
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* visibleBindings; // 0x98
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* unfilteredBindings; // 0xA0
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* bindings; // 0xA8
		::System::Object* _UserData_k__BackingField; // 0xB0
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* regularBindings; // 0xB8
		::InControl::InputDevice* activeDevice; // 0xC0
		::System::String* _Name_k__BackingField; // 0xC8
		::InControl::BindingListenOptions* ListenOptions; // 0xD0
		::System::Boolean _IsComboDuringReleased; // 0xD8
		::System::Boolean _IsComboControl_k__BackingField; // 0xD9
		::System::Boolean triggerBindingEnded; // 0xDA
		::System::Boolean triggerBindingChanged; // 0xDB
		::InControl::InputDeviceStyle LastDeviceStyle; // 0xDC
		::System::UInt64 LastInputTypeChangedTick; // 0xE0
		::InControl::BindingSourceType LastInputType; // 0xE8
		::InControl::InputDeviceClass LastDeviceClass; // 0xEC
		::System::UInt64 _ComboReleasedEndFrame; // 0xF0

		::System::Void _ctor(::System::String* name, ::InControl::PlayerActionSet* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION__CTOR_OFFSET))(this, name, owner);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_NAME_OFFSET))(this, value);
		}

		::InControl::PlayerActionSet* get_Owner()
		{
			return ((::InControl::PlayerActionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::InControl::PlayerActionSet* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_OWNER_OFFSET))(this, value);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void add_OnBindingsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADD_ONBINDINGSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnBindingsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVE_ONBINDINGSCHANGED_OFFSET))(this, value);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_USERDATA_OFFSET))(this, value);
		}

		::System::Void AddDefaultBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_OFFSET))(this, binding);
		}

		::System::Void AddDefaultBinding_1(::Il2CppArray<::InControl::Key>* keys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_1_OFFSET))(this, keys);
		}

		::System::Void AddDefaultBinding_2(::InControl::KeyCombo keyCombo)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_2_OFFSET))(this, keyCombo);
		}

		::System::Void AddDefaultBinding_3(::InControl::Mouse control)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_3_OFFSET))(this, control);
		}

		::System::Void AddDefaultBinding_4(::InControl::InputControlType control)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_4_OFFSET))(this, control);
		}

		::System::Boolean AddBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDBINDING_OFFSET))(this, binding);
		}

		::System::Boolean InsertBindingAt(::System::Int32 index, ::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_INSERTBINDINGAT_OFFSET))(this, index, binding);
		}

		::System::Boolean ReplaceBinding(::InControl::BindingSource* findBinding, ::InControl::BindingSource* withBinding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REPLACEBINDING_OFFSET))(this, findBinding, withBinding);
		}

		::System::Boolean HasBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_HASBINDING_OFFSET))(this, binding);
		}

		::InControl::BindingSource* FindBinding(::InControl::BindingSource* binding)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_FINDBINDING_OFFSET))(this, binding);
		}

		::System::Void HardRemoveBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_HARDREMOVEBINDING_OFFSET))(this, binding);
		}

		::System::Void RemoveBinding(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEBINDING_OFFSET))(this, binding);
		}

		::System::Void RemoveBindingAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEBINDINGAT_OFFSET))(this, index);
		}

		::System::Int32 CountBindingsOfType(::InControl::BindingSourceType bindingSourceType)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_COUNTBINDINGSOFTYPE_OFFSET))(this, bindingSourceType);
		}

		::System::Void RemoveFirstBindingOfType(::InControl::BindingSourceType bindingSourceType)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEFIRSTBINDINGOFTYPE_OFFSET))(this, bindingSourceType);
		}

		::System::Int32 IndexOfFirstInvalidBinding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_INDEXOFFIRSTINVALIDBINDING_OFFSET))(this);
		}

		::System::Void ClearBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_CLEARBINDINGS_OFFSET))(this);
		}

		::System::Void ResetBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_RESETBINDINGS_OFFSET))(this);
		}

		::System::Void ListenForBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LISTENFORBINDING_OFFSET))(this);
		}

		::System::Void ListenForBindingReplacing(::InControl::BindingSource* binding)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LISTENFORBINDINGREPLACING_OFFSET))(this, binding);
		}

		::System::Void StopListeningForBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_STOPLISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Boolean get_IsListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISLISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_BINDINGS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* get_UnfilteredBindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_UNFILTEREDBINDINGS_OFFSET))(this);
		}

		::System::Void RemoveOrphanedBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEORPHANEDBINDINGS_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime, ::InControl::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATE_OFFSET))(this, updateTick, deltaTime, device);
		}

		::System::Void UpdateBindings(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATEBINDINGS_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void DetectBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_DETECTBINDINGS_OFFSET))(this);
		}

		::System::Void UpdateVisibleBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATEVISIBLEBINDINGS_OFFSET))(this);
		}

		::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_Device(::InControl::InputDevice* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_DEVICE_OFFSET))(this, value);
		}

		::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ACTIVEDEVICE_OFFSET))(this);
		}

		::System::Boolean get_LastInputTypeIsDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_LASTINPUTTYPEISDEVICE_OFFSET))(this);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_UPPERDEADZONE_OFFSET))(this, value);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SAVE_OFFSET))(this, writer);
		}

		::System::Void AddDeviceBinding(::Il2CppArray<::InControl::InputControlType>* controls)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEVICEBINDING_OFFSET))(this, controls);
		}

		::InControl::DeviceBindingSource* GetDeviceBindingSource()
		{
			return ((::InControl::DeviceBindingSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GETDEVICEBINDINGSOURCE_OFFSET))(this);
		}

		::System::Void _UpdateCombo(::System::UInt64 updateTick, ::InControl::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION__UPDATECOMBO_OFFSET))(this, updateTick, device);
		}

		::System::Boolean get_IsComboControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISCOMBOCONTROL_OFFSET))(this);
		}

		::System::Void set_IsComboControl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_ISCOMBOCONTROL_OFFSET))(this, value);
		}

		::System::Boolean get_IsInLeavingCombo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISINLEAVINGCOMBO_OFFSET))(this);
		}
	};
}
