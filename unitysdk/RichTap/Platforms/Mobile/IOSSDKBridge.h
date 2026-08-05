#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ADD_ONPLAYEVENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F22B8E0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1F22BDD0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1F22BDA0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETPREBAKEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1F22BD90)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1F22BA20)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F22BA00)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ISRICHTAPEFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1F22BA10)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_ONPLAYEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F22BAB0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_PLAYPREBAKE_OFFSET UNITYSDK_OFFSET(0x1F22BA60)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_PLAY_OFFSET UNITYSDK_OFFSET(0x1F22BA70)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_QUIT_OFFSET UNITYSDK_OFFSET(0x1F22BA90)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_REMOVE_ONPLAYEVENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F22B970)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_SETGAIN_OFFSET UNITYSDK_OFFSET(0x1F22BDB0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_SETHAPTICMODE_OFFSET UNITYSDK_OFFSET(0x1F22BDC0)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_STOP_OFFSET UNITYSDK_OFFSET(0x1F22BA80)
#define RICHTAP_PLATFORMS_MOBILE_IOSSDKBRIDGE_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1F22BAA0)

namespace RichTap::Platforms::Mobile
{
	inline static constexpr unsigned int IOSSDKBridge_TypeDefinitionIndex = 38758;

	class IOSSDKBridge : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet_OnPlayEventCompleted()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IOSSDKBridge_TypeDefinitionIndex)->GetStaticField(0x2A760);
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
