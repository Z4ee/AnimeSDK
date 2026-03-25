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

#define INCONTROL_INPUTDEVICE_ADDALIASCONTROLS_OFFSET UNITYSDK_OFFSET(0x15B6F250)
#define INCONTROL_INPUTDEVICE_ADDCONTROL_1_OFFSET UNITYSDK_OFFSET(0x15B6FCF0)
#define INCONTROL_INPUTDEVICE_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6F640)
#define INCONTROL_INPUTDEVICE_CLEARCONTROLS_OFFSET UNITYSDK_OFFSET(0x15B6FA00)
#define INCONTROL_INPUTDEVICE_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x15B6FD50)
#define INCONTROL_INPUTDEVICE_COMMITLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x15B70AD0)
#define INCONTROL_INPUTDEVICE_COMMITRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x15B71B20)
#define INCONTROL_INPUTDEVICE_COMMIT_OFFSET UNITYSDK_OFFSET(0x15B75C30)
#define INCONTROL_INPUTDEVICE_EXPIRECONTROLCACHE_OFFSET UNITYSDK_OFFSET(0x15B6F890)
#define INCONTROL_INPUTDEVICE_GETCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x15B6FC60)
#define INCONTROL_INPUTDEVICE_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x15B66920)
#define INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDANALOG_OFFSET UNITYSDK_OFFSET(0x15B77770)
#define INCONTROL_INPUTDEVICE_GETFIRSTPRESSEDBUTTON_OFFSET UNITYSDK_OFFSET(0x15B77A60)
#define INCONTROL_INPUTDEVICE_GETINPUTCONTROLTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x15B6FB50)
#define INCONTROL_INPUTDEVICE_GET_ACTION1_OFFSET UNITYSDK_OFFSET(0x15B770D0)
#define INCONTROL_INPUTDEVICE_GET_ACTION2_OFFSET UNITYSDK_OFFSET(0x15B77150)
#define INCONTROL_INPUTDEVICE_GET_ACTION3_OFFSET UNITYSDK_OFFSET(0x15B771D0)
#define INCONTROL_INPUTDEVICE_GET_ACTION4_OFFSET UNITYSDK_OFFSET(0x15B77250)
#define INCONTROL_INPUTDEVICE_GET_ANALOGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15B6E670)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x15B76DB0)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15B76E50)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTONWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15B76F90)
#define INCONTROL_INPUTDEVICE_GET_ANYBUTTON_OFFSET UNITYSDK_OFFSET(0x15B76D00)
#define INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15B76EF0)
#define INCONTROL_INPUTDEVICE_GET_ANYCONTROLWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15B77030)
#define INCONTROL_INPUTDEVICE_GET_COMMANDISPRESSED_OFFSET UNITYSDK_OFFSET(0x15B76A90)
#define INCONTROL_INPUTDEVICE_GET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15B76B60)
#define INCONTROL_INPUTDEVICE_GET_COMMANDWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15B76C30)
#define INCONTROL_INPUTDEVICE_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x15B76530)
#define INCONTROL_INPUTDEVICE_GET_CONTROLSBYTARGET_OFFSET UNITYSDK_OFFSET(0x15B6E5B0)
#define INCONTROL_INPUTDEVICE_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x15B6E590)
#define INCONTROL_INPUTDEVICE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15B6E4B0)
#define INCONTROL_INPUTDEVICE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x15B6E4D0)
#define INCONTROL_INPUTDEVICE_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x15B6B0C0)
#define INCONTROL_INPUTDEVICE_GET_DPADDOWN_OFFSET UNITYSDK_OFFSET(0x15B75A30)
#define INCONTROL_INPUTDEVICE_GET_DPADLEFT_OFFSET UNITYSDK_OFFSET(0x15B75920)
#define INCONTROL_INPUTDEVICE_GET_DPADRIGHT_OFFSET UNITYSDK_OFFSET(0x15B759A0)
#define INCONTROL_INPUTDEVICE_GET_DPADUP_OFFSET UNITYSDK_OFFSET(0x15B75AB0)
#define INCONTROL_INPUTDEVICE_GET_DPADX_OFFSET UNITYSDK_OFFSET(0x15B75B30)
#define INCONTROL_INPUTDEVICE_GET_DPADY_OFFSET UNITYSDK_OFFSET(0x15B75BB0)
#define INCONTROL_INPUTDEVICE_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x15B6E610)
#define INCONTROL_INPUTDEVICE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x15B6E4F0)
#define INCONTROL_INPUTDEVICE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B6E530)
#define INCONTROL_INPUTDEVICE_GET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x15B6E550)
#define INCONTROL_INPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x15B76810)
#define INCONTROL_INPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x15B76800)
#define INCONTROL_INPUTDEVICE_GET_ISUNKNOWN_OFFSET UNITYSDK_OFFSET(0x15B67540)
#define INCONTROL_INPUTDEVICE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15B6FAE0)
#define INCONTROL_INPUTDEVICE_GET_LASTINPUTTICK_OFFSET UNITYSDK_OFFSET(0x15B6E510)
#define INCONTROL_INPUTDEVICE_GET_LEFTBUMPER_OFFSET UNITYSDK_OFFSET(0x15B773D0)
#define INCONTROL_INPUTDEVICE_GET_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6E630)
#define INCONTROL_INPUTDEVICE_GET_LEFTCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B765C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x15B774D0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x15B705C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x15B70440)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x15B704C0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKUP_OFFSET UNITYSDK_OFFSET(0x15B70540)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKX_OFFSET UNITYSDK_OFFSET(0x15B732F0)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICKY_OFFSET UNITYSDK_OFFSET(0x15B73370)
#define INCONTROL_INPUTDEVICE_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x15B6E5D0)
#define INCONTROL_INPUTDEVICE_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15B772D0)
#define INCONTROL_INPUTDEVICE_GET_MENUISPRESSED_OFFSET UNITYSDK_OFFSET(0x15B76820)
#define INCONTROL_INPUTDEVICE_GET_MENUWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15B768F0)
#define INCONTROL_INPUTDEVICE_GET_MENUWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15B769C0)
#define INCONTROL_INPUTDEVICE_GET_META_OFFSET UNITYSDK_OFFSET(0x15B6E470)
#define INCONTROL_INPUTDEVICE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B6E450)
#define INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x15B775D0)
#define INCONTROL_INPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x15B775E0)
#define INCONTROL_INPUTDEVICE_GET_RAWSTICKS_OFFSET UNITYSDK_OFFSET(0x15B6E570)
#define INCONTROL_INPUTDEVICE_GET_RIGHTBUMPER_OFFSET UNITYSDK_OFFSET(0x15B77450)
#define INCONTROL_INPUTDEVICE_GET_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6E650)
#define INCONTROL_INPUTDEVICE_GET_RIGHTCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B76650)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x15B77550)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x15B71640)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x15B714C0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x15B71540)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKUP_OFFSET UNITYSDK_OFFSET(0x15B715C0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKX_OFFSET UNITYSDK_OFFSET(0x15B745C0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICKY_OFFSET UNITYSDK_OFFSET(0x15B74650)
#define INCONTROL_INPUTDEVICE_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x15B6E5F0)
#define INCONTROL_INPUTDEVICE_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15B77350)
#define INCONTROL_INPUTDEVICE_GET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x15B6E490)
#define INCONTROL_INPUTDEVICE_HASCONTROL_OFFSET UNITYSDK_OFFSET(0x15B67380)
#define INCONTROL_INPUTDEVICE_LASTINPUTAFTER_OFFSET UNITYSDK_OFFSET(0x15B766D0)
#define INCONTROL_INPUTDEVICE_ONATTACHED_OFFSET UNITYSDK_OFFSET(0x15B6F240)
#define INCONTROL_INPUTDEVICE_ONDETACHED_OFFSET UNITYSDK_OFFSET(0x15B6F5F0)
#define INCONTROL_INPUTDEVICE_PROCESSDPAD_OFFSET UNITYSDK_OFFSET(0x15B746D0)
#define INCONTROL_INPUTDEVICE_PROCESSLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x15B720A0)
#define INCONTROL_INPUTDEVICE_PROCESSRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x15B733F0)
#define INCONTROL_INPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x15B77600)
#define INCONTROL_INPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x15B775F0)
#define INCONTROL_INPUTDEVICE_REMOVEALIASCONTROLS_OFFSET UNITYSDK_OFFSET(0x15B6EA00)
#define INCONTROL_INPUTDEVICE_REMOVECONTROL_OFFSET UNITYSDK_OFFSET(0x15B6F910)
#define INCONTROL_INPUTDEVICE_REQUESTACTIVATION_OFFSET UNITYSDK_OFFSET(0x15B766F0)
#define INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x15B76790)
#define INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x15B76780)
#define INCONTROL_INPUTDEVICE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x15B767D0)
#define INCONTROL_INPUTDEVICE_SET_ANALOGSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15B6E680)
#define INCONTROL_INPUTDEVICE_SET_CONTROLSBYTARGET_OFFSET UNITYSDK_OFFSET(0x15B6E5C0)
#define INCONTROL_INPUTDEVICE_SET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x15B6E5A0)
#define INCONTROL_INPUTDEVICE_SET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15B6E4C0)
#define INCONTROL_INPUTDEVICE_SET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x15B6E4E0)
#define INCONTROL_INPUTDEVICE_SET_DPAD_OFFSET UNITYSDK_OFFSET(0x15B6E620)
#define INCONTROL_INPUTDEVICE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x15B6E500)
#define INCONTROL_INPUTDEVICE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B6E540)
#define INCONTROL_INPUTDEVICE_SET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x15B6E560)
#define INCONTROL_INPUTDEVICE_SET_LASTINPUTTICK_OFFSET UNITYSDK_OFFSET(0x15B6E520)
#define INCONTROL_INPUTDEVICE_SET_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6E640)
#define INCONTROL_INPUTDEVICE_SET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x15B6E5E0)
#define INCONTROL_INPUTDEVICE_SET_META_OFFSET UNITYSDK_OFFSET(0x15B6E480)
#define INCONTROL_INPUTDEVICE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15B6E460)
#define INCONTROL_INPUTDEVICE_SET_RAWSTICKS_OFFSET UNITYSDK_OFFSET(0x15B6E580)
#define INCONTROL_INPUTDEVICE_SET_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6E660)
#define INCONTROL_INPUTDEVICE_SET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x15B6E600)
#define INCONTROL_INPUTDEVICE_SET_SORTORDER_OFFSET UNITYSDK_OFFSET(0x15B6E4A0)
#define INCONTROL_INPUTDEVICE_STOPLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x15B767E0)
#define INCONTROL_INPUTDEVICE_STOPVIBRATION_OFFSET UNITYSDK_OFFSET(0x15B6F620)
#define INCONTROL_INPUTDEVICE_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15B77610)
#define INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x15B70640)
#define INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHVALUE_OFFSET UNITYSDK_OFFSET(0x15B6FFB0)
#define INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x15B716C0)
#define INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHVALUE_OFFSET UNITYSDK_OFFSET(0x15B71060)
#define INCONTROL_INPUTDEVICE_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x15B6FE50)
#define INCONTROL_INPUTDEVICE_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x15B6FF00)
#define INCONTROL_INPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15B72090)
#define INCONTROL_INPUTDEVICE_VIBRATETRIGGERS_OFFSET UNITYSDK_OFFSET(0x15B76770)
#define INCONTROL_INPUTDEVICE_VIBRATE_1_OFFSET UNITYSDK_OFFSET(0x15B76750)
#define INCONTROL_INPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x15B76740)
#define INCONTROL_INPUTDEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B77B30)
#define INCONTROL_INPUTDEVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B6E7C0)
#define INCONTROL_INPUTDEVICE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15B6E8E0)
#define INCONTROL_INPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6E690)

namespace InControl
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 31419;

	class InputDevice : public ::System::Object
	{
	public:
		static ::InControl::InputDevice** StaticGet_Null()
		{
			return (::InControl::InputDevice**)Il2CppClass::FromTypeDefinitionIndex(InputDevice_TypeDefinitionIndex)->GetStaticField(0x35BC0);
		}
		::InControl::InputControl* cachedLeftStickY; // 0x10
		::InControl::InputControl* cachedDPadUp; // 0x18
		::InControl::InputControl* cachedRightCommand; // 0x20
		::InControl::InputControl* cachedAction3; // 0x28
		::InControl::InputControl* cachedRightStickDown; // 0x30
		::InControl::InputControl* cachedLeftStickX; // 0x38
		::InControl::InputControl* cachedAction1; // 0x40
		::System::Collections::Generic::List_1<::InControl::InputControl*>* controls; // 0x48
		::InControl::InputControl* cachedRightStickLeft; // 0x50
		::InControl::InputControl* cachedDPadX; // 0x58
		::InControl::InputControl* cachedRightStickY; // 0x60
		::InControl::InputControl* cachedRightStickUp; // 0x68
		::InControl::InputControl* cachedRightBumper; // 0x70
		::InControl::InputControl* cachedDPadY; // 0x78
		::InControl::InputControl* rightCommandSource; // 0x80
		::InControl::InputControl* cachedDPadRight; // 0x88
		::InControl::InputControl* cachedLeftCommand; // 0x90
		::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* _AnalogSnapshot_k__BackingField; // 0x98
		::Il2CppArray<::InControl::InputControl*>* _ControlsByTarget_k__BackingField; // 0xA0
		::InControl::InputControl* cachedRightStickButton; // 0xA8
		::InControl::InputControl* cachedLeftStickRight; // 0xB0
		::InControl::InputControl* cachedDPadDown; // 0xB8
		::InControl::InputControl* leftCommandSource; // 0xC0
		::InControl::InputControl* cachedLeftStickDown; // 0xC8
		::InControl::InputControl* cachedLeftBumper; // 0xD0
		::InControl::InputControl* cachedLeftStickUp; // 0xD8
		::InControl::InputControl* cachedRightTrigger; // 0xE0
		::InControl::InputControl* cachedAction4; // 0xE8
		::InControl::InputControl* cachedRightStickRight; // 0xF0
		::InControl::InputControl* cachedDPadLeft; // 0xF8
		::InControl::InputControl* cachedCommand; // 0x100
		::System::String* _Name_k__BackingField; // 0x108
		::InControl::InputControl* cachedLeftStickLeft; // 0x110
		::InControl::InputControl* cachedRightStickX; // 0x118
		::InControl::TwoAxisInputControl* _RightStick_k__BackingField; // 0x120
		::InControl::TwoAxisInputControl* _LeftStick_k__BackingField; // 0x128
		::InControl::InputControl* cachedAction2; // 0x130
		::InControl::InputControl* cachedLeftTrigger; // 0x138
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* _Controls_k__BackingField; // 0x140
		::System::String* _Meta_k__BackingField; // 0x148
		::InControl::InputControl* cachedLeftStickButton; // 0x150
		::InControl::TwoAxisInputControl* _DPad_k__BackingField; // 0x158
		::System::UInt64 _LastInputTick_k__BackingField; // 0x160
		::System::Boolean _IsActive_k__BackingField; // 0x168
		::System::Boolean hasRightCommandControl; // 0x169
		::InControl::InputDeviceClass _DeviceClass_k__BackingField; // 0x16C
		::InControl::InputDeviceStyle _DeviceStyle_k__BackingField; // 0x170
		::InControl::InputControlType _LeftCommandControl_k__BackingField; // 0x174
		::System::Boolean _IsAttached_k__BackingField; // 0x178
		::System::Boolean _RawSticks_k__BackingField; // 0x179
		::System::Boolean hasLeftCommandControl; // 0x17A
		::System::Boolean Passive; // 0x17B
		::System::Int32 _SortOrder_k__BackingField; // 0x17C
		::InControl::InputControlType _RightCommandControl_k__BackingField; // 0x180
		::System::Guid _GUID_k__BackingField; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Boolean rawSticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CTOR_2_OFFSET))(this, name, rawSticks);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Meta()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_META_OFFSET))(this);
		}

		::System::Void set_Meta(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_META_OFFSET))(this, value);
		}

		::System::Int32 get_SortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_SORTORDER_OFFSET))(this);
		}

		::System::Void set_SortOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_SORTORDER_OFFSET))(this, value);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DEVICECLASS_OFFSET))(this);
		}

		::System::Void set_DeviceClass(::InControl::InputDeviceClass value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DEVICECLASS_OFFSET))(this, value);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Void set_DeviceStyle(::InControl::InputDeviceStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DEVICESTYLE_OFFSET))(this, value);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_GUID_OFFSET))(this);
		}

		::System::Void set_GUID(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_GUID_OFFSET))(this, value);
		}

		::System::UInt64 get_LastInputTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LASTINPUTTICK_OFFSET))(this);
		}

		::System::Void set_LastInputTick(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LASTINPUTTICK_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ISATTACHED_OFFSET))(this);
		}

		::System::Void set_IsAttached(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ISATTACHED_OFFSET))(this, value);
		}

		::System::Boolean get_RawSticks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RAWSTICKS_OFFSET))(this);
		}

		::System::Void set_RawSticks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RAWSTICKS_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* get_Controls()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_CONTROLS_OFFSET))(this);
		}

		::System::Void set_Controls(::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputControl*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_CONTROLS_OFFSET))(this, value);
		}

		::Il2CppArray<::InControl::InputControl*>* get_ControlsByTarget()
		{
			return ((::Il2CppArray<::InControl::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_CONTROLSBYTARGET_OFFSET))(this);
		}

		::System::Void set_ControlsByTarget(::Il2CppArray<::InControl::InputControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControl*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_CONTROLSBYTARGET_OFFSET))(this, value);
		}

		::InControl::TwoAxisInputControl* get_LeftStick()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTSTICK_OFFSET))(this);
		}

		::System::Void set_LeftStick(::InControl::TwoAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LEFTSTICK_OFFSET))(this, value);
		}

		::InControl::TwoAxisInputControl* get_RightStick()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTSTICK_OFFSET))(this);
		}

		::System::Void set_RightStick(::InControl::TwoAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RIGHTSTICK_OFFSET))(this, value);
		}

		::InControl::TwoAxisInputControl* get_DPad()
		{
			return ((::InControl::TwoAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_DPAD_OFFSET))(this);
		}

		::System::Void set_DPad(::InControl::TwoAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_DPAD_OFFSET))(this, value);
		}

		::InControl::InputControlType get_LeftCommandControl()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_LEFTCOMMANDCONTROL_OFFSET))(this);
		}

		::System::Void set_LeftCommandControl(::InControl::InputControlType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_LEFTCOMMANDCONTROL_OFFSET))(this, value);
		}

		::InControl::InputControlType get_RightCommandControl()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_RIGHTCOMMANDCONTROL_OFFSET))(this);
		}

		::System::Void set_RightCommandControl(::InControl::InputControlType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_RIGHTCOMMANDCONTROL_OFFSET))(this, value);
		}

		::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* get_AnalogSnapshot()
		{
			return ((::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ANALOGSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_AnalogSnapshot(::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputDevice_AnalogSnapshotEntry>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SET_ANALOGSNAPSHOT_OFFSET))(this, value);
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

		::System::Boolean HasControl(::InControl::InputControlType controlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_HASCONTROL_OFFSET))(this, controlType);
		}

		::InControl::InputControl* GetControl(::InControl::InputControlType controlType)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETCONTROL_OFFSET))(this, controlType);
		}

		::InControl::InputControl* get_Item(::InControl::InputControlType controlType)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GET_ITEM_OFFSET))(this, controlType);
		}

		static ::InControl::InputControlType GetInputControlTypeByName(::System::String* inputControlName)
		{
			return ((::InControl::InputControlType(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETINPUTCONTROLTYPEBYNAME_OFFSET))(inputControlName);
		}

		::InControl::InputControl* GetControlByName(::System::String* controlName)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_GETCONTROLBYNAME_OFFSET))(this, controlName);
		}

		::InControl::InputControl* AddControl(::InControl::InputControlType controlType, ::System::String* handle)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDCONTROL_OFFSET))(this, controlType, handle);
		}

		::InControl::InputControl* AddControl_1(::InControl::InputControlType controlType, ::System::String* handle, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ADDCONTROL_1_OFFSET))(this, controlType, handle, lowerDeadZone, upperDeadZone);
		}

		::System::Void RemoveControl(::InControl::InputControlType controlType)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REMOVECONTROL_OFFSET))(this, controlType);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void UpdateWithState(::InControl::InputControlType controlType, ::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATEWITHSTATE_OFFSET))(this, controlType, state, updateTick, deltaTime);
		}

		::System::Void UpdateWithValue(::InControl::InputControlType controlType, ::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATEWITHVALUE_OFFSET))(this, controlType, value, updateTick, deltaTime);
		}

		::System::Void UpdateLeftStickWithValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void UpdateLeftStickWithRawValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATELEFTSTICKWITHRAWVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void CommitLeftStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMITLEFTSTICK_OFFSET))(this);
		}

		::System::Void UpdateRightStickWithValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void UpdateRightStickWithRawValue(::UnityEngine::Vector2 value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATERIGHTSTICKWITHRAWVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void CommitRightStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMITRIGHTSTICK_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessLeftStick(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSLEFTSTICK_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessRightStick(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSRIGHTSTICK_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessDPad(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_PROCESSDPAD_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void Commit(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_COMMIT_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Boolean LastInputAfter(::InControl::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_LASTINPUTAFTER_OFFSET))(this, device);
		}

		::System::Void RequestActivation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_REQUESTACTIVATION_OFFSET))(this);
		}

		::System::Void Vibrate(::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATE_OFFSET))(this, leftMotor, rightMotor);
		}

		::System::Void Vibrate_1(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATE_1_OFFSET))(this, intensity);
		}

		::System::Void VibrateTriggers(::System::Single leftTrigger, ::System::Single rightTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_VIBRATETRIGGERS_OFFSET))(this, leftTrigger, rightTrigger);
		}

		::System::Void StopVibration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_STOPVIBRATION_OFFSET))(this);
		}

		::System::Void SetLightColor(::System::Single red, ::System::Single green, ::System::Single blue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_OFFSET))(this, red, green, blue);
		}

		::System::Void SetLightColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTCOLOR_1_OFFSET))(this, color);
		}

		::System::Void SetLightFlash(::System::Single flashOnDuration, ::System::Single flashOffDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_SETLIGHTFLASH_OFFSET))(this, flashOnDuration, flashOffDuration);
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

		::System::Boolean ReadRawButtonState(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, index);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, index);
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
