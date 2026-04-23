#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSource.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class InputDeviceProfile; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_NATIVEINPUTDEVICE_FLOATTOBYTE_OFFSET UNITYSDK_OFFSET(0x171FA120)
#define INCONTROL_NATIVEINPUTDEVICE_GETAPPLEGLYPHNAMEFORCONTROL_OFFSET UNITYSDK_OFFSET(0x171FA1D0)
#define INCONTROL_NATIVEINPUTDEVICE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x171F8880)
#define INCONTROL_NATIVEINPUTDEVICE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x171F88A0)
#define INCONTROL_NATIVEINPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x171F90F0)
#define INCONTROL_NATIVEINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x171FA4F0)
#define INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x171FA520)
#define INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x171FA510)
#define INCONTROL_NATIVEINPUTDEVICE_GET_PROFILENAME_OFFSET UNITYSDK_OFFSET(0x171FA470)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMELOCATION_OFFSET UNITYSDK_OFFSET(0x171FA3F0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEPRODUCTID_OFFSET UNITYSDK_OFFSET(0x171FA3D0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMESERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x171FA430)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEVENDORID_OFFSET UNITYSDK_OFFSET(0x171FA3C0)
#define INCONTROL_NATIVEINPUTDEVICE_HASSAMEVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x171FA3E0)
#define INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x171F9160)
#define INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x171F89A0)
#define INCONTROL_NATIVEINPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x171FA0D0)
#define INCONTROL_NATIVEINPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x171FA080)
#define INCONTROL_NATIVEINPUTDEVICE_SENDSTATUSUPDATES_OFFSET UNITYSDK_OFFSET(0x171F98A0)
#define INCONTROL_NATIVEINPUTDEVICE_SETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x171FA190)
#define INCONTROL_NATIVEINPUTDEVICE_SETLIGHTFLASH_OFFSET UNITYSDK_OFFSET(0x171FA1B0)
#define INCONTROL_NATIVEINPUTDEVICE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x171F8890)
#define INCONTROL_NATIVEINPUTDEVICE_SET_INFO_OFFSET UNITYSDK_OFFSET(0x171F88D0)
#define INCONTROL_NATIVEINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x171F91A0)
#define INCONTROL_NATIVEINPUTDEVICE_VIBRATETRIGGERS_OFFSET UNITYSDK_OFFSET(0x171FA170)
#define INCONTROL_NATIVEINPUTDEVICE_VIBRATE_OFFSET UNITYSDK_OFFSET(0x171FA150)
#define INCONTROL_NATIVEINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x171F8900)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDevice_TypeDefinitionIndex = 37170;

	class NativeInputDevice : public ::InControl::InputDevice
	{
	public:
		// static const ::System::Int32 maxUnknownButtons = 0x14; // 0x0
		// static const ::System::Int32 maxUnknownAnalogs = 0x14; // 0x0
		// static const ::System::String* defaultGlyphName; // 0x0
		::System::Text::StringBuilder* glyphName; // 0x198
		::Il2CppArray<::System::Int16>* buttons; // 0x1A0
		::Il2CppArray<::InControl::InputControlSource>* controlSourceByTarget; // 0x1A8
		::InControl::InputDeviceInfo _Info_k__BackingField; // 0x1B0
		::InControl::InputDeviceProfile* profile; // 0x1E0
		::Il2CppArray<::System::Int16>* analogs; // 0x1E8
		::UnityEngine::Vector2 vibrateTriggersToSend; // 0x1F0
		::System::Single lastTimeVibrateTriggersWasSent; // 0x1F8
		::System::Single lastTimeLightFlashWasSent; // 0x1FC
		::System::Int32 skipUpdateFrames; // 0x200
		::System::UInt32 _Handle_k__BackingField; // 0x204
		::System::Single lastTimeVibrateWasSent; // 0x208
		::System::Single lastTimeLightColorWasSent; // 0x20C
		::System::Int32 numUnknownButtons; // 0x210
		::UnityEngine::Vector2 vibrateToSend; // 0x214
		::System::Int32 numUnknownAnalogs; // 0x21C
		::UnityEngine::Vector3 lightColorToSend; // 0x220
		::System::Boolean sendLightFlash; // 0x22C
		::System::Boolean sendVibrateTriggers; // 0x22D
		::System::Boolean sendLightColor; // 0x22E
		::System::Boolean sendVibrate; // 0x22F
		::UnityEngine::Vector2 lightFlashToSend; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Handle()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SET_HANDLE_OFFSET))(this, value);
		}

		::InControl::InputDeviceInfo get_Info()
		{
			return ((::InControl::InputDeviceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::InControl::InputDeviceInfo value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SET_INFO_OFFSET))(this, value);
		}

		::System::Void Initialize(::System::UInt32 deviceHandle, ::InControl::InputDeviceInfo deviceInfo, ::InControl::InputDeviceProfile* deviceProfile)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_OFFSET))(this, deviceHandle, deviceInfo, deviceProfile);
		}

		::System::Void Initialize_1(::System::UInt32 deviceHandle, ::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_INITIALIZE_1_OFFSET))(this, deviceHandle, deviceInfo);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Boolean ReadRawButtonState(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, index);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, index);
		}

		static ::System::Byte FloatToByte(::System::Single value)
		{
			return ((::System::Byte(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_FLOATTOBYTE_OFFSET))(value);
		}

		::System::Void Vibrate(::System::Single leftMotor, ::System::Single rightMotor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_VIBRATE_OFFSET))(this, leftMotor, rightMotor);
		}

		::System::Void VibrateTriggers(::System::Single leftTrigger, ::System::Single rightTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_VIBRATETRIGGERS_OFFSET))(this, leftTrigger, rightTrigger);
		}

		::System::Void SetLightColor(::System::Single red, ::System::Single green, ::System::Single blue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SETLIGHTCOLOR_OFFSET))(this, red, green, blue);
		}

		::System::Void SetLightFlash(::System::Single flashOnDuration, ::System::Single flashOffDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SETLIGHTFLASH_OFFSET))(this, flashOnDuration, flashOffDuration);
		}

		::System::Void SendStatusUpdates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_SENDSTATUSUPDATES_OFFSET))(this);
		}

		::System::String* GetAppleGlyphNameForControl(::InControl::InputControlType controlType)
		{
			return ((::System::String*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GETAPPLEGLYPHNAMEFORCONTROL_OFFSET))(this, controlType);
		}

		::System::Boolean HasSameVendorID(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEVENDORID_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameProductID(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEPRODUCTID_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameVersionNumber(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMEVERSIONNUMBER_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameLocation(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMELOCATION_OFFSET))(this, deviceInfo);
		}

		::System::Boolean HasSameSerialNumber(::InControl::InputDeviceInfo deviceInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_HASSAMESERIALNUMBER_OFFSET))(this, deviceInfo);
		}

		::System::String* get_ProfileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_PROFILENAME_OFFSET))(this);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}
	};
}
