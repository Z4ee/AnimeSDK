#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x1F22B730)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GETPREBAKEDURATION_OFFSET UNITYSDK_OFFSET(0x1F22B740)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1F22B670)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F22B760)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_HASVIBRATOR_OFFSET UNITYSDK_OFFSET(0x1F22B720)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F22B660)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_ISRICHTAPEFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1F22B700)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_PLAYPREBAKE_OFFSET UNITYSDK_OFFSET(0x1F22B6B0)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_PLAY_OFFSET UNITYSDK_OFFSET(0x1F22B6C0)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_QUIT_OFFSET UNITYSDK_OFFSET(0x1F22B6F0)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_SETGAIN_OFFSET UNITYSDK_OFFSET(0x1F22B750)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_STOP_OFFSET UNITYSDK_OFFSET(0x1F22B6E0)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1F22B6D0)
#define RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F22B850)

namespace RichTap::Platforms::Mobile
{
	inline static constexpr unsigned int AndroidSDKBridge_TypeDefinitionIndex = 38757;

	class AndroidSDKBridge : public ::System::Object
	{
	public:
		static ::RichTap::Platforms::Mobile::AndroidSDKBridge** StaticGet__instance()
		{
			return (::RichTap::Platforms::Mobile::AndroidSDKBridge**)Il2CppClass::FromTypeDefinitionIndex(AndroidSDKBridge_TypeDefinitionIndex)->GetStaticField(0x2A750);
		}
		// static const ::System::Int32 ANDROID_OREO = 0x1A; // 0x0
		// static const ::System::Int32 ANDROID_12 = 0x1F; // 0x0
		::System::Int32 apiLevel; // 0x10
		::System::Boolean haveVibrator; // 0x14
		::System::Boolean isInitialized; // 0x15
		::System::Boolean isRichtapCore; // 0x16

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_INITIALIZE_OFFSET))(this);
		}

		::System::String* GetVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GETVERSION_OFFSET))(this);
		}

		::System::Void PlayPrebake(::System::Int32 prebakeId, ::System::Int32 amplitude)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_PLAYPREBAKE_OFFSET))(this, prebakeId, amplitude);
		}

		::System::Void Play(::System::String* content, ::System::Int32 amplitude, ::System::Int32 frequency, ::System::Int32 loopCount, ::System::Int32 loopInterval, ::System::Int32 offsetMillis)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_PLAY_OFFSET))(this, content, amplitude, frequency, loopCount, loopInterval, offsetMillis);
		}

		::System::Void UpdateParams(::System::Int32 amplitude, ::System::Int32 loopInterval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_UPDATEPARAMS_OFFSET))(this, amplitude, loopInterval, frequency);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_STOP_OFFSET))(this);
		}

		::System::Void Quit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_QUIT_OFFSET))(this);
		}

		::System::Boolean IsRichtapEffectSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_ISRICHTAPEFFECTSUPPORTED_OFFSET))(this);
		}

		::System::Boolean HasVibrator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_HASVIBRATOR_OFFSET))(this);
		}

		::System::Int64 GetDuration(::System::String* content)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GETDURATION_OFFSET))(this, content);
		}

		::System::Int64 GetPrebakeDuration(::System::Int32 prebakeId)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GETPREBAKEDURATION_OFFSET))(this, prebakeId);
		}

		::System::Void SetGain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_SETGAIN_OFFSET))(this);
		}

		static ::RichTap::Platforms::Mobile::AndroidSDKBridge* get_Instance()
		{
			return ((::RichTap::Platforms::Mobile::AndroidSDKBridge*(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_ANDROIDSDKBRIDGE_GET_INSTANCE_OFFSET))();
		}
	};
}
