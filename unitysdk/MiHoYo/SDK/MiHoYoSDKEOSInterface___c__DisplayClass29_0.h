#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB22A660)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS29_0__INITSDK_B__1_OFFSET UNITYSDK_OFFSET(0xB22A670)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass29_0_TypeDefinitionIndex = 46762;

	class MiHoYoSDKEOSInterface___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* objectJson; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSDK_b__1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS29_0__INITSDK_B__1_OFFSET))(this, a1, a2);
		}
	};
}
