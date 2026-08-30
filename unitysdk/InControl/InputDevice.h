#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/InputDevice_AnalogSnapshotEntry.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class InputControl; }
namespace InControl { class TwoAxisInputControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_INPUTDEVICE_ADDALIASCONTROLS_OFFSET UNITYSDK_OFFSET(0x18E850A0)
#define INCONTROL_INPUTDEVICE_ADDCONTROL_1_OFFSET UNITYSDK_OFFSET(0x18E85D10)
#define INCONTROL_INPUTDEVICE_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x18E855D0)
#define INCONTROL_INPUTDEVICE_CLEARCONTROLS_OFFSET UNITYSDK_OFFSET(0x18E859E0)
#define INCONTROL_INPUTDEVICE_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x18E85D70)
#define INCONTROL_INPUTDEVICE_COMMITLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x18E869C0)
#define INCONTROL_INPUTDEVICE_COMMITRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x18E878C0)
#define INCONTROL_INPUTDEVICE_COMMIT_OFFSET UNITYSDK_OFFSET(0x18E8AC00)
#define INCONTROL_INPUTDEVICE_EXPIRECONTROLCACHE_OFFSET UNITYSDK_OFFSET(0x18E85860)
#define INCONTROL_INPUTDEVICE_GETCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x18E85C90)
#define INCONTROL_INPUTDEVICE_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x18E7BD80)
#define INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDANALOG_OFFSET UNITYSDK_OFFSET(0x18E8CCA0)
#define INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDBUTTON_OFFSET UNITYSDK_OFFSET(0x18E8D060)
#define INCONTROL_INPUTDEVICE_GETINPUTCONTROLTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x18E85B60)
#define INCONTROL_INPUTDEVICE_GET_ACTION1_OFFSET UNITYSDK_OFFSET(0x18E8C500)
#define INCONTROL_INPUTDEVICE_GET_ACTION2_OFFSET UNITYSDK_OFFSET(0x18E8C580)
#define INCONTROL_INPUTDEVICE_GET_ACTION3_OFFSET UNITYSDK_OFFSET(0x18E8C5F0)
#define INCONTROL_INPUTDEVICE_GET_ACTION4_OFFSET UNITYSDK_OFFSET(0x18E8C660)
#define INCONTROL_INPUTDEVICE_GET_ANALOGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18E844A0)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8C1E0)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8C280)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASRELEASED_OFFSET UNITYSDK_OFFSET(0x18E8C3C0)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTON_OFFSET UNITYSDK_OFFSET(0x18E8C130)
#define INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8C320)
#define INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASRELEASED_OFFSET UNITYSDK_OFFSET(0x18E8C460)
#define INCONTROL_INPUTDEVICE_GET_COMMANDISPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8BD80)
#define INCONTROL_INPUTDEVICE_GET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8BEB0)
#define INCONTROL_INPUTDEVICE_GET_COMMANDWASRELEASED_OFFSET UNITYSDK_OFFSET(0x18E8BFF0)
#define INCONTROL_INPUTDEVICE_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x18E8B570)
#define INCONTROL_INPUTDEVICE_GET_CONTROLSBYTARGET_OFFSET UNITYSDK_OFFSET(0x18E843E0)
#define INCONTROL_INPUTDEVICE_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x18E843C0)
#define INCONTROL_INPUTDEVICE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x18E842E0)
#define INCONTROL_INPUTDEVICE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x18E84300)
#define INCONTROL_INPUTDEVICE_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x18E80B80)
#define INCONTROL_INPUTDEVICE_GET_DPADDOWN_OFFSET UNITYSDK_OFFSET(0x18E8AA00)
#define INCONTROL_INPUTDEVICE_GET_DPADLEFT_OFFSET UNITYSDK_OFFSET(0x18E8A910)
#define INCONTROL_INPUTDEVICE_GET_DPADRIGHT_OFFSET UNITYSDK_OFFSET(0x18E8A980)
#define INCONTROL_INPUTDEVICE_GET_DPADUP_OFFSET UNITYSDK_OFFSET(0x18E8AA80)
#define INCONTROL_INPUTDEVICE_GET_DPADX_OFFSET UNITYSDK_OFFSET(0x18E8AB00)
#define INCONTROL_INPUTDEVICE_GET_DPADY_OFFSET UNITYSDK_OFFSET(0x18E8AB80)
#define INCONTROL_INPUTDEVICE_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x18E84440)
#define INCONTROL_INPUTDEVICE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x18E84320)
#define INCONTROL_INPUTDEVICE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18E84360)
#define INCONTROL_INPUTDEVICE_GET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x18E84380)
#define INCONTROL_INPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x18E8B9C0)
#define INCONTROL_INPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x18E8B9B0)
#define INCONTROL_INPUTDEVICE_GET_ISUNKNOWN_OFFSET UNITYSDK_OFFSET(0x18E7CD50)
#define INCONTROL_INPUTDEVICE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18E85B00)
#define INCONTROL_INPUTDEVICE_GET_LASTINPUTTICK_OFFSET UNITYSDK_OFFSET(0x18E84340)
#define INCONTROL_INPUTDEVICE_GET_LEFTBUMPER_OFFSET UNITYSDK_OFFSET(0x18E8C7C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x18E84460)
#define INCONTROL_INPUTDEVICE_GET_LEFTCOMMAND_OFFSET UNITYSDK_OFFSET(0x18E8B5F0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x18E8C8C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x18E86530)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x18E863B0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x18E86430)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKUP_OFFSET UNITYSDK_OFFSET(0x18E864B0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKX_OFFSET UNITYSDK_OFFSET(0x18E88BA0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKY_OFFSET UNITYSDK_OFFSET(0x18E88C20)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x18E84400)
#define INCONTROL_INPUTDEVICE_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x18E8C6D0)
#define INCONTROL_INPUTDEVICE_GET_MENUISPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8B9D0)
#define INCONTROL_INPUTDEVICE_GET_MENUWASPRESSED_OFFSET UNITYSDK_OFFSET(0x18E8BB00)
#define INCONTROL_INPUTDEVICE_GET_MENUWASRELEASED_OFFSET UNITYSDK_OFFSET(0x18E8BC40)
#define INCONTROL_INPUTDEVICE_GET_META_OFFSET UNITYSDK_OFFSET(0x18E842A0)
#define INCONTROL_INPUTDEVICE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18E84280)
#define INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x18E8C9C0)
#define INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x18E8C9D0)
#define INCONTROL_INPUTDEVICE_GET_RAWSTICKS_OFFSET UNITYSDK_OFFSET(0x18E843A0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTBUMPER_OFFSET UNITYSDK_OFFSET(0x18E8C840)
#define INCONTROL_INPUTDEVICE_GET_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x18E84480)
#define INCONTROL_INPUTDEVICE_GET_RIGHTCOMMAND_OFFSET UNITYSDK_OFFSET(0x18E8B670)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x18E8C940)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x18E87450)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x18E872E0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x18E87360)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKUP_OFFSET UNITYSDK_OFFSET(0x18E873E0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKX_OFFSET UNITYSDK_OFFSET(0x18E89A40)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKY_OFFSET UNITYSDK_OFFSET(0x18E89AC0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x18E84420)
#define INCONTROL_INPUTDEVICE_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x18E8C740)
#define INCONTROL_INPUTDEVICE_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x18E842C0)
#define INCONTROL_INPUTDEVICE_HASCONTROL_OFFSET UNITYSDK_OFFSET(0x18E7CA70)
#define INCONTROL_INPUTDEVICE_LASTINPUTAFTER_OFFSET UNITYSDK_OFFSET(0x18E8B6F0)
#define INCONTROL_INPUTDEVICE_ONATTACHED_OFFSET UNITYSDK_OFFSET(0x18E85090)
#define INCONTROL_INPUTDEVICE_ONDETACHED_OFFSET UNITYSDK_OFFSET(0x18E854B0)
#define INCONTROL_INPUTDEVICE_PROCESSDPAD_OFFSET UNITYSDK_OFFSET(0x18E89B40)
#define INCONTROL_INPUTDEVICE_PROCESSLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x18E87DF0)
#define INCONTROL_INPUTDEVICE_PROCESSRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x18E88CA0)
#define INCONTROL_INPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x18E8C9F0)
#define INCONTROL_INPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x18E8C9E0)
#define INCONTROL_INPUTDEVICE_REMOVEALIASCONTROLS_OFFSET UNITYSDK_OFFSET(0x18E84820)
#define INCONTROL_INPUTDEVICE_REMOVECONTROL_OFFSET UNITYSDK_OFFSET(0x18E858F0)
#define INCONTROL_INPUTDEVICE_REQUESTACTIVATION_OFFSET UNITYSDK_OFFSET(0x18E8B710)
#define INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x18E8B830)
#define INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x18E8B820)
#define INCONTROL_INPUTDEVICE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x18E8B910)
#define INCONTROL_INPUTDEVICE_SET_ANALOGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18E844B0)
#define INCONTROL_INPUTDEVICE_SET_CONTROLSBYTARGET_OFFSET UNITYSDK_OFFSET(0x18E843F0)
#define INCONTROL_INPUTDEVICE_SET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x18E843D0)
#define INCONTROL_INPUTDEVICE_SET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x18E842F0)
#define INCONTROL_INPUTDEVICE_SET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x18E84310)
#define INCONTROL_INPUTDEVICE_SET_DPAD_OFFSET UNITYSDK_OFFSET(0x18E84450)
#define INCONTROL_INPUTDEVICE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x18E84330)
#define INCONTROL_INPUTDEVICE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18E84370)
#define INCONTROL_INPUTDEVICE_SET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x18E84390)
#define INCONTROL_INPUTDEVICE_SET_LASTINPUTTICK_OFFSET UNITYSDK_OFFSET(0x18E84350)
#define INCONTROL_INPUTDEVICE_SET_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x18E84470)
#define INCONTROL_INPUTDEVICE_SET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x18E84410)
#define INCONTROL_INPUTDEVICE_SET_META_OFFSET UNITYSDK_OFFSET(0x18E842B0)
#define INCONTROL_INPUTDEVICE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18E84290)
#define INCONTROL_INPUTDEVICE_SET_RAWSTICKS_OFFSET UNITYSDK_OFFSET(0x18E843B0)
#define INCONTROL_INPUTDEVICE_SET_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x18E84490)
#define INCONTROL_INPUTDEVICE_SET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x18E84430)
#define INCONTROL_INPUTDEVICE_SET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x18E842D0)
#define INCONTROL_INPUTDEVICE_STOPLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x18E8B920)
#define INCONTROL_INPUTDEVICE_STOPVIBRATION_OFFSET UNITYSDK_OFFSET(0x18E85540)
#define INCONTROL_INPUTDEVICE_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18E8CA00)
#define INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x18E865B0)
#define INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHVALUE_OFFSET UNITYSDK_OFFSET(0x18E85FA0)
#define INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x18E874D0)
#define INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHVALUE_OFFSET UNITYSDK_OFFSET(0x18E86EF0)
#define INCONTROL_INPUTDEVICE_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x18E85E50)
#define INCONTROL_INPUTDEVICE_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x18E85EF0)
#define INCONTROL_INPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18E87DE0)
#define INCONTROL_INPUTDEVICE_VIBRATETRIGGERS_OFFSET UNITYSDK_OFFSET(0x18E8B810)
#define INCONTROL_INPUTDEVICE_VIBRATE_1_OFFSET UNITYSDK_OFFSET(0x18E8B770)
#define INCONTROL_INPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x18E8B760)
#define INCONTROL_INPUTDEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E8D200)
#define INCONTROL_INPUTDEVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18E845E0)
#define INCONTROL_INPUTDEVICE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18E84700)
#define INCONTROL_INPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E844C0)

namespace InControl
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 39538;

	class InputDevice : public ::System::Object
	{
	public:
		static ::InControl::InputDevice** StaticGet_Null()
		{
			return (::InControl::InputDevice**)Il2CppClass::FromTypeDefinitionIndex(InputDevice_TypeDefinitionIndex)->GetStaticField(0x1D00);
		}
		::InControl::InputControl* cachedLeftCommand; // 0x10
		::InControl::InputControl* cachedLeftTrigger; // 0x18
		::InControl::TwoAxisInputControl* _LeftStick_k__BackingField; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* _Controls_k__BackingField; // 0x28
		::InControl::InputControl* cachedCommand; // 0x30
		::InControl::InputControl* cachedLeftStickX; // 0x38
		::InControl::InputControl* cachedDPadX; // 0x40
		::InControl::InputControl* leftCommandSource; // 0x48
		::InControl::InputControl* cachedAction3; // 0x50
		::InControl::InputControl* cachedAction4; // 0x58
		::InControl::InputControl* cachedRightStickUp; // 0x60
		::InControl::InputControl* cachedAction2; // 0x68
		::InControl::TwoAxisInputControl* _RightStick_k__BackingField; // 0x70
		::InControl::InputControl* cachedDPadLeft; // 0x78
		::InControl::InputControl* cachedDPadUp; // 0x80
		::InControl::InputControl* cachedRightStickX; // 0x88
		::InControl::InputControl* cachedRightBumper; // 0x90
		::InControl::InputControl* cachedLeftStickY; // 0x98
		::System::Collections::Generic::List_1<::InControl::InputControl*>* controls; // 0xA0
		::InControl::InputControl* cachedRightStickLeft; // 0xA8
		::InControl::InputControl* cachedLeftStickLeft; // 0xB0
		::InControl::InputControl* cachedLeftStickRight; // 0xB8
		::InControl::InputControl* cachedDPadY; // 0xC0
		::InControl::InputControl* cachedRightStickY; // 0xC8
		::InControl::InputControl* cachedLeftBumper; // 0xD0
		::InControl::InputControl* cachedRightTrigger; // 0xD8
		::InControl::InputControl* cachedLeftStickButton; // 0xE0
		::System::String* _Name_k__BackingField; // 0xE8
		::InControl::InputControl* rightCommandSource; // 0xF0
		::System::String* _Meta_k__BackingField; // 0xF8
		::InControl::InputControl* cachedRightStickDown; // 0x100
		::InControl::InputControl* cachedRightStickButton; // 0x108
		::InControl::TwoAxisInputControl* _DPad_k__BackingField; // 0x110
		::InControl::InputControl* cachedLeftStickDown; // 0x118
		::InControl::InputControl* cachedDPadRight; // 0x120
		::InControl::InputControl* cachedLeftStickUp; // 0x128
		::Il2CppArray<::InControl::InputControl*>* _ControlsByTarget_k__BackingField; // 0x130
		::InControl::InputControl* cachedRightCommand; // 0x138
		::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* _AnalogSnapshot_k__BackingField; // 0x140
		::InControl::InputControl* cachedRightStickRight; // 0x148
		::InControl::InputControl* cachedAction1; // 0x150
		::InControl::InputControl* cachedDPadDown; // 0x158
		::System::UInt64 _LastInputTick_k__BackingField; // 0x160
		::System::Boolean hasLeftCommandControl; // 0x168
		::System::Boolean hasRightCommandControl; // 0x169
		::InControl::InputControlType _LeftCommandControl_k__BackingField; // 0x16C
		::System::Boolean Passive; // 0x170
		::System::Boolean _IsActive_k__BackingField; // 0x171
		::System::Boolean _RawSticks_k__BackingField; // 0x172
		::System::Boolean _IsAttached_k__BackingField; // 0x173
		::System::Int32 _SortOrder_k__BackingField; // 0x174
		::InControl::InputDeviceClass _DeviceClass_k__BackingField; // 0x178
		::InControl::InputDeviceStyle _DeviceStyle_k__BackingField; // 0x17C
		::InControl::InputControlType _RightCommandControl_k__BackingField; // 0x180
		::System::Guid _GUID_k__BackingField; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Meta()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_META_OFFSET))(this);
		}

		::System::Void set_Meta(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_META_OFFSET))(this, a1);
		}

		::System::Int32 get_SortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_SORTORDER_OFFSET))(this);
		}

		::System::Void set_SortOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_SORTORDER_OFFSET))(this, a1);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DEVICECLASS_OFFSET))(this);
		}

		::System::Void set_DeviceClass(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DEVICECLASS_OFFSET))(this, a1);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Void set_DeviceStyle(::InControl::InputDeviceStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DEVICESTYLE_OFFSET))(this, a1);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_GUID_OFFSET))(this);
		}

		::System::Void set_GUID(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_GUID_OFFSET))(this, a1);
		}

		::System::UInt64 get_LastInputTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LASTINPUTTICK_OFFSET))(this);
		}

		::System::Void set_LastInputTick(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LASTINPUTTICK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISATTACHED_OFFSET))(this);
		}

		::System::Void set_IsAttached(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ISATTACHED_OFFSET))(this, a1);
		}

		::System::Boolean get_RawSticks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RAWSTICKS_OFFSET))(this);
		}

		::System::Void set_RawSticks(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RAWSTICKS_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* get_Controls()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_CONTROLS_OFFSET))(this);
		}

		::System::Void set_Controls(::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_CONTROLS_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputControl*>* get_ControlsByTarget()
		{
			return ((::Il2CppArray<::InControl::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_CONTROLSBYTARGET_OFFSET))(this);
		}

		::System::Void set_ControlsByTarget(::Il2CppArray<::InControl::InputControl*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControl*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_CONTROLSBYTARGET_OFFSET))(this, a1);
		}

		::InControl::TwoAxisInputControl* get_LeftStick()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICK_OFFSET))(this);
		}

		::System::Void set_LeftStick(::InControl::TwoAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LEFTSTICK_OFFSET))(this, a1);
		}

		::InControl::TwoAxisInputControl* get_RightStick()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICK_OFFSET))(this);
		}

		::System::Void set_RightStick(::InControl::TwoAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RIGHTSTICK_OFFSET))(this, a1);
		}

		::InControl::TwoAxisInputControl* get_DPad()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPAD_OFFSET))(this);
		}

		::System::Void set_DPad(::InControl::TwoAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DPAD_OFFSET))(this, a1);
		}

		::InControl::InputControlType get_LeftCommandControl()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTCOMMANDCONTROL_OFFSET))(this);
		}

		::System::Void set_LeftCommandControl(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LEFTCOMMANDCONTROL_OFFSET))(this, a1);
		}

		::InControl::InputControlType get_RightCommandControl()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTCOMMANDCONTROL_OFFSET))(this);
		}

		::System::Void set_RightCommandControl(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RIGHTCOMMANDCONTROL_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* get_AnalogSnapshot()
		{
			return ((::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANALOGSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_AnalogSnapshot(::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ANALOGSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void OnAttached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ONATTACHED_OFFSET))(this);
		}

		::System::Void OnDetached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ONDETACHED_OFFSET))(this);
		}

		::System::Void AddAliasControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDALIASCONTROLS_OFFSET))(this);
		}

		::System::Void RemoveAliasControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REMOVEALIASCONTROLS_OFFSET))(this);
		}

		::System::Void ClearControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_CLEARCONTROLS_OFFSET))(this);
		}

		::System::Boolean HasControl(::InControl::InputControlType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_HASCONTROL_OFFSET))(this, a1);
		}

		::InControl::InputControl* GetControl(::InControl::InputControlType a1)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETCONTROL_OFFSET))(this, a1);
		}

		::InControl::InputControl* get_Item(::InControl::InputControlType a1)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ITEM_OFFSET))(this, a1);
		}

		static ::InControl::InputControlType GetInputControlTypeByName(::System::String* a1)
		{
			return ((::InControl::InputControlType(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETINPUTCONTROLTYPEBYNAME_OFFSET))(a1);
		}

		::InControl::InputControl* GetControlByName(::System::String* a1)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETCONTROLBYNAME_OFFSET))(this, a1);
		}

		::InControl::InputControl* AddControl(::InControl::InputControlType a1, ::System::String* a2)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDCONTROL_OFFSET))(this, a1, a2);
		}

		::InControl::InputControl* AddControl_1(::InControl::InputControlType a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDCONTROL_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveControl(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REMOVECONTROL_OFFSET))(this, a1);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void UpdateWithState(::InControl::InputControlType a1, ::System::Boolean a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATEWITHSTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateWithValue(::InControl::InputControlType a1, ::System::Single a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATEWITHVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateLeftStickWithValue(::UnityEngine::Vector2 a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateLeftStickWithRawValue(::UnityEngine::Vector2 a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHRAWVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitLeftStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMITLEFTSTICK_OFFSET))(this);
		}

		::System::Void UpdateRightStickWithValue(::UnityEngine::Vector2 a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateRightStickWithRawValue(::UnityEngine::Vector2 a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHRAWVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitRightStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMITRIGHTSTICK_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessLeftStick(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSLEFTSTICK_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessRightStick(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSRIGHTSTICK_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessDPad(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSDPAD_OFFSET))(this, a1, a2);
		}

		::System::Void Commit(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean LastInputAfter(::InControl::InputDevice* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_LASTINPUTAFTER_OFFSET))(this, a1);
		}

		::System::Void RequestActivation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REQUESTACTIVATION_OFFSET))(this);
		}

		::System::Void Vibrate(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATE_OFFSET))(this, a1, a2);
		}

		::System::Void Vibrate_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATE_1_OFFSET))(this, a1);
		}

		::System::Void VibrateTriggers(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATETRIGGERS_OFFSET))(this, a1, a2);
		}

		::System::Void StopVibration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_STOPVIBRATION_OFFSET))(this);
		}

		::System::Void SetLightColor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLightColor_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_1_OFFSET))(this, a1);
		}

		::System::Void SetLightFlash(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTFLASH_OFFSET))(this, a1, a2);
		}

		::System::Void StopLightFlash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_STOPLIGHTFLASH_OFFSET))(this);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Boolean get_IsUnknown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISUNKNOWN_OFFSET))(this);
		}

		::System::Boolean get_MenuIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_MENUISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_MenuWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_MENUWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_MenuWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_MENUWASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_CommandIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMANDISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_CommandWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMANDWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_CommandWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMANDWASRELEASED_OFFSET))(this);
		}

		::InControl::InputControl* get_AnyButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTON_OFFSET))(this);
		}

		::System::Boolean get_AnyButtonIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTONISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_AnyButtonWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_AnyControlWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_AnyButtonWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_AnyControlWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASRELEASED_OFFSET))(this);
		}

		::InControl::TwoAxisInputControl* get_Direction()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DIRECTION_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickUp()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKUP_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickDown()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKDOWN_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickLeft()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKLEFT_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickRight()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKRIGHT_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickUp()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKUP_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickDown()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKDOWN_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickLeft()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKLEFT_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickRight()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKRIGHT_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadUp()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADUP_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadDown()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADDOWN_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadLeft()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADLEFT_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadRight()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADRIGHT_OFFSET))(this);
		}

		::InControl::InputControl* get_Action1()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION1_OFFSET))(this);
		}

		::InControl::InputControl* get_Action2()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION2_OFFSET))(this);
		}

		::InControl::InputControl* get_Action3()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION3_OFFSET))(this);
		}

		::InControl::InputControl* get_Action4()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ACTION4_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftTrigger()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTTRIGGER_OFFSET))(this);
		}

		::InControl::InputControl* get_RightTrigger()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTTRIGGER_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftBumper()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTBUMPER_OFFSET))(this);
		}

		::InControl::InputControl* get_RightBumper()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTBUMPER_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKBUTTON_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKBUTTON_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickX()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKX_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftStickY()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICKY_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickX()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKX_OFFSET))(this);
		}

		::InControl::InputControl* get_RightStickY()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICKY_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadX()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADX_OFFSET))(this);
		}

		::InControl::InputControl* get_DPadY()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPADY_OFFSET))(this);
		}

		::InControl::InputControl* get_Command()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_COMMAND_OFFSET))(this);
		}

		::InControl::InputControl* get_LeftCommand()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTCOMMAND_OFFSET))(this);
		}

		::InControl::InputControl* get_RightCommand()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTCOMMAND_OFFSET))(this);
		}

		::System::Void ExpireControlCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_EXPIRECONTROLCACHE_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Boolean ReadRawButtonState(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, a1);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, a1);
		}

		::System::Void TakeSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_TAKESNAPSHOT_OFFSET))(this);
		}

		::InControl::UnknownDeviceControl GetFirstPressedAnalog()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDANALOG_OFFSET))(this);
		}

		::InControl::UnknownDeviceControl GetFirstPressedButton()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDBUTTON_OFFSET))(this);
		}
	};
}
