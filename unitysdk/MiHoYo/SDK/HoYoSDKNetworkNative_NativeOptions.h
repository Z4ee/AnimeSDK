#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1753A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_NativeOptions_TypeDefinitionIndex = 43528;

	class HoYoSDKNetworkNative_NativeOptions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NETWORK_CONNECTION_LIMIT_OPTION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNetworkNative_NativeOptions_TypeDefinitionIndex)->GetStaticField(0xD940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVEOPTIONS__CCTOR_OFFSET))();
		}
	};
}
