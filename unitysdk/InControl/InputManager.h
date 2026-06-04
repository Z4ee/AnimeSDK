#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/VersionInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace InControl { class IKeyboardProvider; }
namespace InControl { class IMouseProvider; }
namespace InControl { class InputDevice; }
namespace InControl { class InputDeviceManager; }
namespace InControl { class PlayerActionSet; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_INPUTMANAGER_ADDDEVICEMANAGER_OFFSET UNITYSDK_OFFSET(0x17FC0690)
#define INCONTROL_INPUTMANAGER_ADD_ONACTIVEDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x17FBEC70)
#define INCONTROL_INPUTMANAGER_ADD_ONCOMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBEEF0)
#define INCONTROL_INPUTMANAGER_ADD_ONDEVICEATTACHED_OFFSET UNITYSDK_OFFSET(0x17FBE9F0)
#define INCONTROL_INPUTMANAGER_ADD_ONDEVICEDETACHED_OFFSET UNITYSDK_OFFSET(0x17FBEB30)
#define INCONTROL_INPUTMANAGER_ADD_ONRESET_OFFSET UNITYSDK_OFFSET(0x17FBE8B0)
#define INCONTROL_INPUTMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x17FBE630)
#define INCONTROL_INPUTMANAGER_ADD_ONUPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBEDB0)
#define INCONTROL_INPUTMANAGER_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17FBE770)
#define INCONTROL_INPUTMANAGER_ASSERTISSETUP_OFFSET UNITYSDK_OFFSET(0x17FBF750)
#define INCONTROL_INPUTMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x17FC09F0)
#define INCONTROL_INPUTMANAGER_ATTACHPLAYERACTIONSET_OFFSET UNITYSDK_OFFSET(0x17FC1290)
#define INCONTROL_INPUTMANAGER_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x17FC0450)
#define INCONTROL_INPUTMANAGER_COMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBFB50)
#define INCONTROL_INPUTMANAGER_DESTROYDEVICEMANAGERS_OFFSET UNITYSDK_OFFSET(0x17FBF390)
#define INCONTROL_INPUTMANAGER_DESTROYDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBF560)
#define INCONTROL_INPUTMANAGER_DETACHDEVICE_OFFSET UNITYSDK_OFFSET(0x17FC0E60)
#define INCONTROL_INPUTMANAGER_DETACHPLAYERACTIONSET_OFFSET UNITYSDK_OFFSET(0x17FC1430)
#define INCONTROL_INPUTMANAGER_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x17FB0E00)
#define INCONTROL_INPUTMANAGER_GET_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x17FC1490)
#define INCONTROL_INPUTMANAGER_GET_APPLICATIONISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x17FBF260)
#define INCONTROL_INPUTMANAGER_GET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x17FBF030)
#define INCONTROL_INPUTMANAGER_GET_CURRENTTICK_OFFSET UNITYSDK_OFFSET(0x17FC2420)
#define INCONTROL_INPUTMANAGER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x17FC2460)
#define INCONTROL_INPUTMANAGER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x17FC1DE0)
#define INCONTROL_INPUTMANAGER_GET_ENABLEICADE_OFFSET UNITYSDK_OFFSET(0x17FC2280)
#define INCONTROL_INPUTMANAGER_GET_ENABLENATIVEINPUT_OFFSET UNITYSDK_OFFSET(0x17FC1F30)
#define INCONTROL_INPUTMANAGER_GET_ENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x17FC1FA0)
#define INCONTROL_INPUTMANAGER_GET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x17FBF0A0)
#define INCONTROL_INPUTMANAGER_GET_ISSETUP_OFFSET UNITYSDK_OFFSET(0x17FBF110)
#define INCONTROL_INPUTMANAGER_GET_KEYBOARDPROVIDER_OFFSET UNITYSDK_OFFSET(0x17FBF1F0)
#define INCONTROL_INPUTMANAGER_GET_MENUWASPRESSED_OFFSET UNITYSDK_OFFSET(0x17FBF340)
#define INCONTROL_INPUTMANAGER_GET_MOUSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x17FBF180)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEMFI_OFFSET UNITYSDK_OFFSET(0x17FC2140)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x17FC20D0)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTPREVENTSLEEP_OFFSET UNITYSDK_OFFSET(0x17FC21B0)
#define INCONTROL_INPUTMANAGER_GET_NATIVEINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x17FC2220)
#define INCONTROL_INPUTMANAGER_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x17FBF2D0)
#define INCONTROL_INPUTMANAGER_GET_SUSPENDINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x17FC1EC0)
#define INCONTROL_INPUTMANAGER_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x17FC22F0)
#define INCONTROL_INPUTMANAGER_GET_XINPUTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x17FC2070)
#define INCONTROL_INPUTMANAGER_GET_XINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x17FC2010)
#define INCONTROL_INPUTMANAGER_HIDEDEVICESWITHPROFILE_OFFSET UNITYSDK_OFFSET(0x17FC1170)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x17FB2FE0)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x17FB30C0)
#define INCONTROL_INPUTMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x17FB3130)
#define INCONTROL_INPUTMANAGER_ONLEVELWASLOADED_OFFSET UNITYSDK_OFFSET(0x17FB31D0)
#define INCONTROL_INPUTMANAGER_RELOAD_OFFSET UNITYSDK_OFFSET(0x17FC0180)
#define INCONTROL_INPUTMANAGER_REMOVE_ONACTIVEDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x17FBED10)
#define INCONTROL_INPUTMANAGER_REMOVE_ONCOMMITDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBEF90)
#define INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEATTACHED_OFFSET UNITYSDK_OFFSET(0x17FBEA90)
#define INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEDETACHED_OFFSET UNITYSDK_OFFSET(0x17FBEBD0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x17FBE950)
#define INCONTROL_INPUTMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x17FBE6D0)
#define INCONTROL_INPUTMANAGER_REMOVE_ONUPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBEE50)
#define INCONTROL_INPUTMANAGER_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17FBE810)
#define INCONTROL_INPUTMANAGER_RESETINTERNAL_OFFSET UNITYSDK_OFFSET(0x17FB25A0)
#define INCONTROL_INPUTMANAGER_SETUPINTERNAL_OFFSET UNITYSDK_OFFSET(0x17FB1B40)
#define INCONTROL_INPUTMANAGER_SETZEROTICKONALLCONTROLS_OFFSET UNITYSDK_OFFSET(0x17FC01C0)
#define INCONTROL_INPUTMANAGER_SET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x17FC0990)
#define INCONTROL_INPUTMANAGER_SET_APPLICATIONISFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x17FBF2A0)
#define INCONTROL_INPUTMANAGER_SET_COMMANDWASPRESSED_OFFSET UNITYSDK_OFFSET(0x17FBF070)
#define INCONTROL_INPUTMANAGER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x17FC1E20)
#define INCONTROL_INPUTMANAGER_SET_ENABLEICADE_OFFSET UNITYSDK_OFFSET(0x17FC22C0)
#define INCONTROL_INPUTMANAGER_SET_ENABLENATIVEINPUT_OFFSET UNITYSDK_OFFSET(0x17FC1F70)
#define INCONTROL_INPUTMANAGER_SET_ENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x17FC1FE0)
#define INCONTROL_INPUTMANAGER_SET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x17FBF0E0)
#define INCONTROL_INPUTMANAGER_SET_ISSETUP_OFFSET UNITYSDK_OFFSET(0x17FBF150)
#define INCONTROL_INPUTMANAGER_SET_KEYBOARDPROVIDER_OFFSET UNITYSDK_OFFSET(0x17FBF220)
#define INCONTROL_INPUTMANAGER_SET_MOUSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x17FBF1B0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEMFI_OFFSET UNITYSDK_OFFSET(0x17FC2180)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEXINPUT_OFFSET UNITYSDK_OFFSET(0x17FC2110)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTPREVENTSLEEP_OFFSET UNITYSDK_OFFSET(0x17FC21F0)
#define INCONTROL_INPUTMANAGER_SET_NATIVEINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x17FC2250)
#define INCONTROL_INPUTMANAGER_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x17FBF300)
#define INCONTROL_INPUTMANAGER_SET_SUSPENDINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x17FC1F00)
#define INCONTROL_INPUTMANAGER_SET_XINPUTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x17FC20A0)
#define INCONTROL_INPUTMANAGER_SET_XINPUTUPDATERATE_OFFSET UNITYSDK_OFFSET(0x17FC2040)
#define INCONTROL_INPUTMANAGER_UPDATEACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x17FBFD60)
#define INCONTROL_INPUTMANAGER_UPDATECURRENTTIME_OFFSET UNITYSDK_OFFSET(0x17FBF7C0)
#define INCONTROL_INPUTMANAGER_UPDATEDEVICEMANAGERS_OFFSET UNITYSDK_OFFSET(0x17FBF870)
#define INCONTROL_INPUTMANAGER_UPDATEDEVICES_OFFSET UNITYSDK_OFFSET(0x17FBF990)
#define INCONTROL_INPUTMANAGER_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17FB28F0)
#define INCONTROL_INPUTMANAGER_UPDATEPLAYERACTIONSETS_OFFSET UNITYSDK_OFFSET(0x17FC0060)
#define INCONTROL_INPUTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17FBF720)
#define INCONTROL_INPUTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FC24A0)

namespace InControl
{
	inline static constexpr unsigned int InputManager_TypeDefinitionIndex = 37891;

	class InputManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::InControl::PlayerActionSet*>** StaticGet_playerActionSets()
		{
			return (::System::Collections::Generic::List_1<::InControl::PlayerActionSet*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11E90);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDevice*>** StaticGet_activeDevices()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11E98);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>** StaticGet_ActiveDevices()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EA0);
		}
		static ::InControl::InputDevice** StaticGet_activeDevice()
		{
			return (::InControl::InputDevice**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::InControl::InputDeviceManager*>** StaticGet_deviceManagerTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::InControl::InputDeviceManager*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EB0);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDeviceManager*>** StaticGet_deviceManagers()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDeviceManager*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EB8);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnUpdate()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EC0);
		}
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EC8);
		}
		static ::System::Action** StaticGet_OnReset()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11ED0);
		}
		static ::InControl::IKeyboardProvider** StaticGet__KeyboardProvider_k__BackingField()
		{
			return (::InControl::IKeyboardProvider**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11ED8);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnCommitDevices()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EE0);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnDeviceAttached()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EE8);
		}
		static ::System::String** StaticGet__Platform_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EF0);
		}
		static ::System::Action_2<::System::UInt64, ::System::Single>** StaticGet_OnUpdateDevices()
		{
			return (::System::Action_2<::System::UInt64, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11EF8);
		}
		static ::InControl::IMouseProvider** StaticGet__MouseProvider_k__BackingField()
		{
			return (::InControl::IMouseProvider**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11F00);
		}
		static ::System::Collections::Generic::List_1<::InControl::InputDevice*>** StaticGet_devices()
		{
			return (::System::Collections::Generic::List_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11F08);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnActiveDeviceChanged()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11F10);
		}
		static ::System::Action_1<::InControl::InputDevice*>** StaticGet_OnDeviceDetached()
		{
			return (::System::Action_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11F18);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>** StaticGet_Devices()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x11F20);
		}
		static ::System::UInt32* StaticGet__XInputUpdateRate_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5470);
		}
		static ::System::UInt32* StaticGet__XInputBufferSize_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5474);
		}
		static ::System::UInt64* StaticGet_currentTick()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5478);
		}
		static ::System::Boolean* StaticGet__IsSetup_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5480);
		}
		static ::System::Boolean* StaticGet__SuspendInBackground_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5481);
		}
		static ::System::Boolean* StaticGet__NativeInputEnableXInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5482);
		}
		static ::System::Boolean* StaticGet__NativeInputEnableMFi_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5483);
		}
		static ::InControl::VersionInfo* StaticGet_Version()
		{
			return (::InControl::VersionInfo*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5484);
		}
		static ::System::UInt32* StaticGet__NativeInputUpdateRate_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5494);
		}
		static ::System::Single* StaticGet_currentTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x5498);
		}
		static ::System::Single* StaticGet_lastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x549C);
		}
		static ::System::Boolean* StaticGet_applicationIsFocused()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A0);
		}
		static ::System::Boolean* StaticGet__CommandWasPressed_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A1);
		}
		static ::System::Boolean* StaticGet__EnableNativeInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A2);
		}
		static ::System::Boolean* StaticGet__EnableXInput_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A3);
		}
		static ::System::Single* StaticGet_initialTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A4);
		}
		static ::System::Boolean* StaticGet__InvertYAxis_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A8);
		}
		static ::System::Boolean* StaticGet_enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54A9);
		}
		static ::System::Boolean* StaticGet__EnableICade_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54AA);
		}
		static ::System::Nullable_1<::InControl::VersionInfo>* StaticGet_unityVersion()
		{
			return (::System::Nullable_1<::InControl::VersionInfo>*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54AC);
		}
		static ::System::Boolean* StaticGet__NativeInputPreventSleep_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}
		static ::System::Boolean* StaticGet__ApplicationisForegroundWindow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputManager_TypeDefinitionIndex)->GetStaticField(0x54C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void add_OnSetup(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONSETUP_OFFSET))(a1);
		}

		static ::System::Void remove_OnSetup(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONSETUP_OFFSET))(a1);
		}

		static ::System::Void add_OnUpdate(::System::Action_2<::System::UInt64, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONUPDATE_OFFSET))(a1);
		}

		static ::System::Void remove_OnUpdate(::System::Action_2<::System::UInt64, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONUPDATE_OFFSET))(a1);
		}

		static ::System::Void add_OnReset(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONRESET_OFFSET))(a1);
		}

		static ::System::Void remove_OnReset(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONRESET_OFFSET))(a1);
		}

		static ::System::Void add_OnDeviceAttached(::System::Action_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONDEVICEATTACHED_OFFSET))(a1);
		}

		static ::System::Void remove_OnDeviceAttached(::System::Action_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEATTACHED_OFFSET))(a1);
		}

		static ::System::Void add_OnDeviceDetached(::System::Action_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONDEVICEDETACHED_OFFSET))(a1);
		}

		static ::System::Void remove_OnDeviceDetached(::System::Action_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONDEVICEDETACHED_OFFSET))(a1);
		}

		static ::System::Void add_OnActiveDeviceChanged(::System::Action_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONACTIVEDEVICECHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_OnActiveDeviceChanged(::System::Action_1<::InControl::InputDevice*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::InputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONACTIVEDEVICECHANGED_OFFSET))(a1);
		}

		static ::System::Void add_OnUpdateDevices(::System::Action_2<::System::UInt64, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONUPDATEDEVICES_OFFSET))(a1);
		}

		static ::System::Void remove_OnUpdateDevices(::System::Action_2<::System::UInt64, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONUPDATEDEVICES_OFFSET))(a1);
		}

		static ::System::Void add_OnCommitDevices(::System::Action_2<::System::UInt64, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADD_ONCOMMITDEVICES_OFFSET))(a1);
		}

		static ::System::Void remove_OnCommitDevices(::System::Action_2<::System::UInt64, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_REMOVE_ONCOMMITDEVICES_OFFSET))(a1);
		}

		static ::System::Boolean get_CommandWasPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_COMMANDWASPRESSED_OFFSET))();
		}

		static ::System::Void set_CommandWasPressed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_COMMANDWASPRESSED_OFFSET))(a1);
		}

		static ::System::Boolean get_InvertYAxis()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_INVERTYAXIS_OFFSET))();
		}

		static ::System::Void set_InvertYAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_INVERTYAXIS_OFFSET))(a1);
		}

		static ::System::Boolean get_IsSetup()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ISSETUP_OFFSET))();
		}

		static ::System::Void set_IsSetup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ISSETUP_OFFSET))(a1);
		}

		static ::InControl::IMouseProvider* get_MouseProvider()
		{
			return ((::InControl::IMouseProvider*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_MOUSEPROVIDER_OFFSET))();
		}

		static ::System::Void set_MouseProvider(::InControl::IMouseProvider* a1)
		{
			return ((::System::Void(*)(::InControl::IMouseProvider*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_MOUSEPROVIDER_OFFSET))(a1);
		}

		static ::InControl::IKeyboardProvider* get_KeyboardProvider()
		{
			return ((::InControl::IKeyboardProvider*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_KEYBOARDPROVIDER_OFFSET))();
		}

		static ::System::Void set_KeyboardProvider(::InControl::IKeyboardProvider* a1)
		{
			return ((::System::Void(*)(::InControl::IKeyboardProvider*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_KEYBOARDPROVIDER_OFFSET))(a1);
		}

		static ::System::Boolean get_ApplicationisForegroundWindow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_APPLICATIONISFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::Void set_ApplicationisForegroundWindow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_APPLICATIONISFOREGROUNDWINDOW_OFFSET))(a1);
		}

		static ::System::String* get_Platform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_PLATFORM_OFFSET))();
		}

		static ::System::Void set_Platform(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_PLATFORM_OFFSET))(a1);
		}

		static ::System::Boolean get_MenuWasPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_MENUWASPRESSED_OFFSET))();
		}

		static ::System::Boolean SetupInternal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SETUPINTERNAL_OFFSET))();
		}

		static ::System::Void ResetInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_RESETINTERNAL_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATE_OFFSET))();
		}

		static ::System::Void UpdateInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEINTERNAL_OFFSET))();
		}

		static ::System::Void Reload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_RELOAD_OFFSET))();
		}

		static ::System::Void AssertIsSetup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ASSERTISSETUP_OFFSET))();
		}

		static ::System::Void SetZeroTickOnAllControls()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SETZEROTICKONALLCONTROLS_OFFSET))();
		}

		static ::System::Void ClearInputState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_CLEARINPUTSTATE_OFFSET))();
		}

		static ::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONAPPLICATIONFOCUS_OFFSET))(a1);
		}

		static ::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONAPPLICATIONPAUSE_OFFSET))(a1);
		}

		static ::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONAPPLICATIONQUIT_OFFSET))();
		}

		static ::System::Void OnLevelWasLoaded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ONLEVELWASLOADED_OFFSET))();
		}

		static ::System::Void AddDeviceManager(::InControl::InputDeviceManager* a1)
		{
			return ((::System::Void(*)(::InControl::InputDeviceManager*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ADDDEVICEMANAGER_OFFSET))(a1);
		}

		static ::System::Void UpdateCurrentTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATECURRENTTIME_OFFSET))();
		}

		static ::System::Void UpdateDeviceManagers(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEDEVICEMANAGERS_OFFSET))(a1);
		}

		static ::System::Void DestroyDeviceManagers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DESTROYDEVICEMANAGERS_OFFSET))();
		}

		static ::System::Void DestroyDevices()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DESTROYDEVICES_OFFSET))();
		}

		static ::System::Void UpdateDevices(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEDEVICES_OFFSET))(a1);
		}

		static ::System::Void CommitDevices(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_COMMITDEVICES_OFFSET))(a1);
		}

		static ::System::Void UpdateActiveDevice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEACTIVEDEVICE_OFFSET))();
		}

		static ::System::Void AttachDevice(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ATTACHDEVICE_OFFSET))(a1);
		}

		static ::System::Void DetachDevice(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DETACHDEVICE_OFFSET))(a1);
		}

		static ::System::Void HideDevicesWithProfile(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_HIDEDEVICESWITHPROFILE_OFFSET))(a1);
		}

		static ::System::Void AttachPlayerActionSet(::InControl::PlayerActionSet* a1)
		{
			return ((::System::Void(*)(::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_ATTACHPLAYERACTIONSET_OFFSET))(a1);
		}

		static ::System::Void DetachPlayerActionSet(::InControl::PlayerActionSet* a1)
		{
			return ((::System::Void(*)(::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_DETACHPLAYERACTIONSET_OFFSET))(a1);
		}

		static ::System::Void UpdatePlayerActionSets(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_UPDATEPLAYERACTIONSETS_OFFSET))(a1);
		}

		static ::System::Boolean get_AnyKeyIsPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ANYKEYISPRESSED_OFFSET))();
		}

		static ::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ACTIVEDEVICE_OFFSET))();
		}

		static ::System::Void set_ActiveDevice(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ACTIVEDEVICE_OFFSET))(a1);
		}

		static ::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLED_OFFSET))(a1);
		}

		static ::System::Boolean get_SuspendInBackground()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_SUSPENDINBACKGROUND_OFFSET))();
		}

		static ::System::Void set_SuspendInBackground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_SUSPENDINBACKGROUND_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableNativeInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLENATIVEINPUT_OFFSET))();
		}

		static ::System::Void set_EnableNativeInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLENATIVEINPUT_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableXInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLEXINPUT_OFFSET))();
		}

		static ::System::Void set_EnableXInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLEXINPUT_OFFSET))(a1);
		}

		static ::System::UInt32 get_XInputUpdateRate()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_XINPUTUPDATERATE_OFFSET))();
		}

		static ::System::Void set_XInputUpdateRate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_XINPUTUPDATERATE_OFFSET))(a1);
		}

		static ::System::UInt32 get_XInputBufferSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_XINPUTBUFFERSIZE_OFFSET))();
		}

		static ::System::Void set_XInputBufferSize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_XINPUTBUFFERSIZE_OFFSET))(a1);
		}

		static ::System::Boolean get_NativeInputEnableXInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEXINPUT_OFFSET))();
		}

		static ::System::Void set_NativeInputEnableXInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEXINPUT_OFFSET))(a1);
		}

		static ::System::Boolean get_NativeInputEnableMFi()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTENABLEMFI_OFFSET))();
		}

		static ::System::Void set_NativeInputEnableMFi(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTENABLEMFI_OFFSET))(a1);
		}

		static ::System::Boolean get_NativeInputPreventSleep()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTPREVENTSLEEP_OFFSET))();
		}

		static ::System::Void set_NativeInputPreventSleep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTPREVENTSLEEP_OFFSET))(a1);
		}

		static ::System::UInt32 get_NativeInputUpdateRate()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_NATIVEINPUTUPDATERATE_OFFSET))();
		}

		static ::System::Void set_NativeInputUpdateRate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_NATIVEINPUTUPDATERATE_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableICade()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_ENABLEICADE_OFFSET))();
		}

		static ::System::Void set_EnableICade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_SET_ENABLEICADE_OFFSET))(a1);
		}

		static ::InControl::VersionInfo get_UnityVersion()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_UNITYVERSION_OFFSET))();
		}

		static ::System::UInt64 get_CurrentTick()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_CURRENTTICK_OFFSET))();
		}

		static ::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTMANAGER_GET_CURRENTTIME_OFFSET))();
		}
	};
}
