#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x84E9B40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_NativeOptions_TypeDefinitionIndex = 36899;

	class HoYoSDKNetworkNative_NativeOptions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NETWORK_CONNECTION_LIMIT_OPTION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNetworkNative_NativeOptions_TypeDefinitionIndex)->GetStaticField(0xFD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVEOPTIONS__CCTOR_OFFSET))();
		}
	};
}
