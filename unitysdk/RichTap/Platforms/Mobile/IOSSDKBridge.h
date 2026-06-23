#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ADD_ONPLAYEVENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DE18140)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1DE18670)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE18640)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETPREBAKEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE18630)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1DE182C0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DE182A0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ISRICHTAPEFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1DE182B0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ONPLAYEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DE18350)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_PLAYPREBAKE_OFFSET UNITYSDK_OFFSET(0x1DE18300)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_PLAY_OFFSET UNITYSDK_OFFSET(0x1DE18310)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_QUIT_OFFSET UNITYSDK_OFFSET(0x1DE18330)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_REMOVE_ONPLAYEVENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DE181F0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_SETGAIN_OFFSET UNITYSDK_OFFSET(0x1DE18650)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_SETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1DE18660)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_STOP_OFFSET UNITYSDK_OFFSET(0x1DE18320)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1DE18340)

namespace RichTap::Platforms::Mobile
{
	inline static constexpr unsigned int IOSSDKBridge_TypeDefinitionIndex = 38097;

	class IOSSDKBridge : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet_OnPlayEventCompleted()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IOSSDKBridge_TypeDefinitionIndex)->GetStaticField(0x28E40);
		}

		static ::System::Void add_OnPlayEventCompleted(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ADD_ONPLAYEVENTCOMPLETED_OFFSET))(value);
		}

		static ::System::Void remove_OnPlayEventCompleted(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_REMOVE_ONPLAYEVENTCOMPLETED_OFFSET))(value);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_INITIALIZE_OFFSET))();
		}

		static ::System::Boolean IsRichtapEffectSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ISRICHTAPEFFECTSUPPORTED_OFFSET))();
		}

		static ::System::String* GetVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETVERSION_OFFSET))();
		}

		static ::System::Int32 PlayPrebake(::System::Int32 prebakeId, ::System::Int32 amplitude)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_PLAYPREBAKE_OFFSET))(prebakeId, amplitude);
		}

		static ::System::Int32 Play(::System::String* content, ::System::Int32 amplitude, ::System::Int32 frequency, ::System::Int32 loopCount, ::System::Int32 loopInterval, ::System::Int32 offsetMillis)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_PLAY_OFFSET))(content, amplitude, frequency, loopCount, loopInterval, offsetMillis);
		}

		static ::System::Void Stop(::System::Int32 id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_STOP_OFFSET))(id);
		}

		static ::System::Void Quit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_QUIT_OFFSET))();
		}

		static ::System::Void UpdateParams(::System::Int32 id, ::System::Int32 amplitude, ::System::Int32 loopInterval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_UPDATEPARAMS_OFFSET))(id, amplitude, loopInterval, frequency);
		}

		static ::System::Void OnPlayerEventCallback(::System::Int32 state, ::System::Int32 _id)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ONPLAYEREVENTCALLBACK_OFFSET))(state, _id);
		}

		static ::System::Int32 GetPrebakedLength(::System::Int32 prebakeId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETPREBAKEDLENGTH_OFFSET))(prebakeId);
		}

		static ::System::Int32 GetLength(::System::String* data)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETLENGTH_OFFSET))(data);
		}

		static ::System::Boolean SetGain(::System::Int32 playId, ::System::Int32 amplitude)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_SETGAIN_OFFSET))(playId, amplitude);
		}

		static ::System::Void SetHapticMode(::System::Int32 mode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_SETHAPTICMODE_OFFSET))(mode);
		}

		static ::System::Int32 GetHapticMode()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETHAPTICMODE_OFFSET))();
		}
	};
}
