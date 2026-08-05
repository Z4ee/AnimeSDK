#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class ControllerConnectionListener; }
namespace RichTap::Common { class ControllerStateChangeCallback; }
namespace System { class String; }

#define RICHTAP_COMMON_RICHTAPSDKROUTER_ENABLEALLCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1F22A7C0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETCONNECTEDCONTROLLERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F22A5A0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1F22A470)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1F228AF0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1F229160)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETPREBAKEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1F229400)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETRECENTINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1F22A8C0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_GETRICHTAPSDKVERSION_OFFSET UNITYSDK_OFFSET(0x1F22AE10)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_INIT_OFFSET UNITYSDK_OFFSET(0x1F228A10)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_ISRICHTAPSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1F228AB0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_PLAYPREBAKE_OFFSET UNITYSDK_OFFSET(0x1F228110)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_PLAY_OFFSET UNITYSDK_OFFSET(0x1F228050)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_REGISTERCONTROLLERCONNECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F22A940)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_REGISTERCONTROLLERSTATECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F22A9D0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_SENDLOOPPARAM_OFFSET UNITYSDK_OFFSET(0x1F229900)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_SETGAIN_OFFSET UNITYSDK_OFFSET(0x1F229590)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_SETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1F228AD0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_SETTARGETCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1F22A6B0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_STOP_OFFSET UNITYSDK_OFFSET(0x1F2286E0)
#define RICHTAP_COMMON_RICHTAPSDKROUTER_UNINIT_OFFSET UNITYSDK_OFFSET(0x1F228A30)
#define RICHTAP_COMMON_RICHTAPSDKROUTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F22B580)

namespace RichTap::Common
{
	inline static constexpr unsigned int RichTapSDKRouter_TypeDefinitionIndex = 38766;

	class RichTapSDKRouter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_INIT_OFFSET))();
		}

		static ::System::Void UnInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_UNINIT_OFFSET))();
		}

		static ::System::Boolean IsRichtapSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_ISRICHTAPSUPPORTED_OFFSET))();
		}

		static ::System::String* GetRichtapSDKVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETRICHTAPSDKVERSION_OFFSET))();
		}

		static ::System::Void SetHapticMode(::System::Int32 mode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_SETHAPTICMODE_OFFSET))(mode);
		}

		static ::System::Int32 GetHapticMode()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETHAPTICMODE_OFFSET))();
		}

		static ::System::Int32 Play(::System::String* data, ::System::String* name, ::System::Int32 amplitude, ::System::Int32 frequency, ::System::Int32 loop, ::System::Int32 interval, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_PLAY_OFFSET))(data, name, amplitude, frequency, loop, interval, offset);
		}

		static ::System::Int32 PlayPrebake(::System::Int32 prebakedId, ::System::Int32 amplitude)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_PLAYPREBAKE_OFFSET))(prebakedId, amplitude);
		}

		static ::System::Int32 GetLength(::System::String* data)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETLENGTH_OFFSET))(data);
		}

		static ::System::Int32 GetPrebakedLength(::System::Int32 prebakeId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETPREBAKEDLENGTH_OFFSET))(prebakeId);
		}

		static ::System::Void SetGain(::System::Int32 playId, ::System::Int32 gain)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_SETGAIN_OFFSET))(playId, gain);
		}

		static ::System::Void SendLoopParam(::System::Int32 playId, ::System::Int32 amplitude, ::System::Int32 interval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_SENDLOOPPARAM_OFFSET))(playId, amplitude, interval, frequency);
		}

		static ::System::Void Stop(::System::Int32 playId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_STOP_OFFSET))(playId);
		}

		static ::System::String* GetConnectedControllers()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETCONNECTEDCONTROLLERS_OFFSET))();
		}

		static ::System::Int32 GetConnectedControllerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETCONNECTEDCONTROLLERCOUNT_OFFSET))();
		}

		static ::System::Void SetTargetControllers(::System::Int32 count, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_SETTARGETCONTROLLERS_OFFSET))(count, indices);
		}

		static ::System::Void EnableAllConnectedControllers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_ENABLEALLCONNECTEDCONTROLLERS_OFFSET))();
		}

		static ::System::Int32 GetRecentInputController()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_GETRECENTINPUTCONTROLLER_OFFSET))();
		}

		static ::System::Void RegisterControllerConnectionChange(::RichTap::Common::ControllerConnectionListener* listener)
		{
			return ((::System::Void(*)(::RichTap::Common::ControllerConnectionListener*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_REGISTERCONTROLLERCONNECTIONCHANGE_OFFSET))(listener);
		}

		static ::System::Void RegisterControllerStateChangedCallback(::RichTap::Common::ControllerStateChangeCallback* callback)
		{
			return ((::System::Void(*)(::RichTap::Common::ControllerStateChangeCallback*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPSDKROUTER_REGISTERCONTROLLERSTATECHANGEDCALLBACK_OFFSET))(callback);
		}
	};
}
