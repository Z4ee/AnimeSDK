#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class ControllerConnectionListener; }
namespace RichTap::Common { class ControllerStateChangeCallback; }
namespace System { class String; }

#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F22C250)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1F22C290)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_ENABLEALLCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1F22B3E0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_ENABLELOG_OFFSET UNITYSDK_OFFSET(0x1F22BFF0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_ENABLETARGETCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1F22B350)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETCONNECTEDCONTROLLERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F22B2D0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETCONNECTEDGAMECONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1F22B250)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x1F22B010)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETRECENTINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1F22C1D0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETVERSIONNAME_OFFSET UNITYSDK_OFFSET(0x1F22BEE0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1F22AE20)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F22BDE0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_INIT_OFFSET UNITYSDK_OFFSET(0x1F22ABB0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_PLAY_OFFSET UNITYSDK_OFFSET(0x1F22AF50)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_QUIT_OFFSET UNITYSDK_OFFSET(0x1F22AD00)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_REGISTERCONTROLLERCONNECTIONLISTENER_OFFSET UNITYSDK_OFFSET(0x1F22B460)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_REGISTERCONTROLLERSTATECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F22B4F0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F22BE60)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_SENDLOOPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F22BF60)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_SETMULTIPOINTTRIGGERMODE_OFFSET UNITYSDK_OFFSET(0x1F22C130)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_SETTRIGGERMODE_OFFSET UNITYSDK_OFFSET(0x1F22C070)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_STOP_OFFSET UNITYSDK_OFFSET(0x1F22B1D0)
#define RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1F22B090)

namespace RichTap::Platforms::XInput
{
	inline static constexpr unsigned int XInputNativeBridge_TypeDefinitionIndex = 38755;

	class XInputNativeBridge : public ::System::Object
	{
	public:
		// static const ::System::String* DLL_NAME; // 0x0
		// static const ::System::String* DEVICE_NAME; // 0x0
		// static const ::System::String* Field_1_7; // 0x0

		static ::System::Int32 Initialize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_INITIALIZE_OFFSET))();
		}

		static ::System::Void Release()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_RELEASE_OFFSET))();
		}

		static ::System::IntPtr GetVersionName()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETVERSIONNAME_OFFSET))();
		}

		static ::System::Void Play(::System::IntPtr str, ::System::Int32 loop, ::System::Int32 interval, ::System::Int32 intensity, ::System::Int32 frequency, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_PLAY_OFFSET))(str, loop, interval, intensity, frequency, start, end);
		}

		static ::System::Void SendLoopParameters(::System::Int32 intensity, ::System::Int32 frequency, ::System::Int32 interval)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_SENDLOOPPARAMETERS_OFFSET))(intensity, frequency, interval);
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_STOP_OFFSET))();
		}

		static ::System::Void EnableLog(::System::Boolean enable, ::System::Int32 level)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_ENABLELOG_OFFSET))(enable, level);
		}

		static ::System::Int32 GetConnectedControllerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETCONNECTEDCONTROLLERCOUNT_OFFSET))();
		}

		static ::System::IntPtr GetConnectedGameControllers()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETCONNECTEDGAMECONTROLLERS_OFFSET))();
		}

		static ::System::Int64 GetDuration(::System::IntPtr str)
		{
			return ((::System::Int64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETDURATION_OFFSET))(str);
		}

		static ::System::Void EnableTargetControllers(::System::Int32 count, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_ENABLETARGETCONTROLLERS_OFFSET))(count, indices);
		}

		static ::System::Void EnableAllConnectedControllers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_ENABLEALLCONNECTEDCONTROLLERS_OFFSET))();
		}

		static ::System::Void SetTriggerMode(::System::Int32 index, ::System::Int32 mode, ::System::Int32 amplitude, ::System::Int32 frequency, ::System::Int32 strength, ::System::Int32 startPosition, ::System::Int32 endPosition)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_SETTRIGGERMODE_OFFSET))(index, mode, amplitude, frequency, strength, startPosition, endPosition);
		}

		static ::System::Void SetMultiPointTriggerMode(::System::Int32 index, ::System::Int32 mode, ::Il2CppArray<::System::Int32>* points, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_SETMULTIPOINTTRIGGERMODE_OFFSET))(index, mode, points, len);
		}

		static ::System::Int32 GetRecentInputController()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETRECENTINPUTCONTROLLER_OFFSET))();
		}

		static ::System::Void RegisterControllerConnectionListener(::RichTap::Common::ControllerConnectionListener* listener)
		{
			return ((::System::Void(*)(::RichTap::Common::ControllerConnectionListener*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_REGISTERCONTROLLERCONNECTIONLISTENER_OFFSET))(listener);
		}

		static ::System::Void RegisterControllerStateChangedCallback(::RichTap::Common::ControllerStateChangeCallback* callback)
		{
			return ((::System::Void(*)(::RichTap::Common::ControllerStateChangeCallback*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_REGISTERCONTROLLERSTATECHANGEDCALLBACK_OFFSET))(callback);
		}

		static ::System::String* Description()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_DESCRIPTION_OFFSET))();
		}

		static ::System::String* DeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_DEVICENAME_OFFSET))();
		}

		static ::System::String* GetVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_GETVERSION_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_INIT_OFFSET))();
		}

		static ::System::Void Quit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_QUIT_OFFSET))();
		}

		static ::System::Void UpdateParams(::System::Int32 amplitude, ::System::Int32 loopInterval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_XINPUT_XINPUTNATIVEBRIDGE_UPDATEPARAMS_OFFSET))(amplitude, loopInterval, frequency);
		}
	};
}
