#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Internal/SingletonBase_1.h"
#include "unitysdk/RichTap/Types/RichtapPrebakeId.h"

namespace RichTap::Common { class ControllerConnectionListener; }
namespace RichTap::Common { class ControllerStateChangeCallback; }
namespace System { class String; }

#define RICHTAP_COMMON_RICHTAPCONTROLLER_ENABLEALLCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1DE16F90)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_ENABLEALTERNATIVEASSETS_OFFSET UNITYSDK_OFFSET(0x1DE16690)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_ENABLESHOWPLAYINGHEDIALOG_OFFSET UNITYSDK_OFFSET(0x1DE16860)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETCONNECTEDCONTROLLERCOUNT_OFFSET UNITYSDK_OFFSET(0x1DE16D70)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1DE16C10)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1DE15340)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE16600)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETPLUGINVERSION_OFFSET UNITYSDK_OFFSET(0x1DE152A0)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETRECENTINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1DE17090)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_GETRICHTAPENABLE_OFFSET UNITYSDK_OFFSET(0x1DE152F0)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1DE15260)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_ISRICHTAPSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1DE15300)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_PLAYPREBAKE_OFFSET UNITYSDK_OFFSET(0x1DE15A40)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x1DE15360)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_REGISTERCONTROLLERCONNECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1DE15140)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_REGISTERCONTROLLERSTATECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DE151D0)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_SENDLOOPPARAM_OFFSET UNITYSDK_OFFSET(0x1DE15E10)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_SETGAIN_OFFSET UNITYSDK_OFFSET(0x1DE15C60)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_SETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1DE15320)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_SETINTLEVEL_OFFSET UNITYSDK_OFFSET(0x1DE15DF0)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_SETRICHTAPENABLE_OFFSET UNITYSDK_OFFSET(0x1DE152E0)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_SETTARGETCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1DE16E70)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x1DE16160)
#define RICHTAP_COMMON_RICHTAPCONTROLLER_UNINIT_OFFSET UNITYSDK_OFFSET(0x1DE15280)
#define RICHTAP_COMMON_RICHTAPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE172B0)

namespace RichTap::Common
{
	inline static constexpr unsigned int RichTapController_TypeDefinitionIndex = 38109;

	class RichTapController : public ::RichTap::Internal::SingletonBase_1<::RichTap::Common::RichTapController*>
	{
	public:
		// static const ::System::String* RichtapPluginVersion; // 0x0
		::System::Single intLevel; // 0x10
		::System::Boolean enableRichtap; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_UNINIT_OFFSET))(this);
		}

		::System::String* GetPluginVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETPLUGINVERSION_OFFSET))(this);
		}

		::System::Void SetRichtapEnable(::System::Boolean On)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_SETRICHTAPENABLE_OFFSET))(this, On);
		}

		::System::Boolean GetRichtapEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETRICHTAPENABLE_OFFSET))(this);
		}

		::System::Boolean IsRichtapSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_ISRICHTAPSUPPORTED_OFFSET))(this);
		}

		::System::Void SetHapticMode(::System::Int32 mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_SETHAPTICMODE_OFFSET))(this, mode);
		}

		::System::Int32 GetHapticMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETHAPTICMODE_OFFSET))(this);
		}

		::System::Void Play(::System::String* data, ::System::Int32 amplitude, ::System::Int32 frequency, ::System::Int32 priority, ::System::Int32 loop, ::System::Int32 interval, ::System::String* uuid, ::System::String* name, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_PLAY_OFFSET))(this, data, amplitude, frequency, priority, loop, interval, uuid, name, offset);
		}

		::System::Void PlayPrebake(::RichTap::Types::RichtapPrebakeId prebakedId, ::System::Int32 amplitude, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::RichTap::Types::RichtapPrebakeId, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_PLAYPREBAKE_OFFSET))(this, prebakedId, amplitude, priority);
		}

		::System::Void SetGain(::System::Int32 gain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_SETGAIN_OFFSET))(this, gain);
		}

		::System::Void SetIntLevel(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_SETINTLEVEL_OFFSET))(this, val);
		}

		::System::Void SendLoopParam(::System::Int32 amplitude, ::System::Int32 interval, ::System::Int32 frequency, ::System::String* uuid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_SENDLOOPPARAM_OFFSET))(this, amplitude, interval, frequency, uuid);
		}

		::System::Void Stop(::System::String* uuid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_STOP_OFFSET))(this, uuid);
		}

		::System::Int32 GetLength(::System::String* data)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETLENGTH_OFFSET))(this, data);
		}

		::System::Void EnableAlternativeAssets(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_ENABLEALTERNATIVEASSETS_OFFSET))(this, enabled);
		}

		::System::Void EnableShowPlayingHeDialog(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_ENABLESHOWPLAYINGHEDIALOG_OFFSET))(this, enabled);
		}

		::System::String* GetConnectedControllers()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETCONNECTEDCONTROLLERS_OFFSET))(this);
		}

		::System::Int32 GetConnectedControllerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETCONNECTEDCONTROLLERCOUNT_OFFSET))(this);
		}

		::System::Void SetTargetControllers(::System::Int32 count, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_SETTARGETCONTROLLERS_OFFSET))(this, count, indices);
		}

		::System::Void EnableAllConnectedControllers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_ENABLEALLCONNECTEDCONTROLLERS_OFFSET))(this);
		}

		::System::Int32 GetRecentInputController()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_GETRECENTINPUTCONTROLLER_OFFSET))(this);
		}

		static ::System::Void RegisterControllerConnectionChange(::RichTap::Common::ControllerConnectionListener* listener)
		{
			return ((::System::Void(*)(::RichTap::Common::ControllerConnectionListener*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_REGISTERCONTROLLERCONNECTIONCHANGE_OFFSET))(listener);
		}

		static ::System::Void RegisterControllerStateChangedCallback(::RichTap::Common::ControllerStateChangeCallback* callback)
		{
			return ((::System::Void(*)(::RichTap::Common::ControllerStateChangeCallback*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER_REGISTERCONTROLLERSTATECHANGEDCALLBACK_OFFSET))(callback);
		}
	};
}
