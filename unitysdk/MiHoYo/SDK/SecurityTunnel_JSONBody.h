#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_JSONBODY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA214200)
#define MIHOYO_SDK_SECURITYTUNNEL_JSONBODY__CTOR_OFFSET UNITYSDK_OFFSET(0xA2105C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_JSONBody_TypeDefinitionIndex = 43793;

	class SecurityTunnel_JSONBody : public ::System::Object
	{
	public:
		::System::String* Msg; // 0x10
		::System::Int32 Code; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_JSONBODY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_JSONBODY_TOSTRING_OFFSET))(this);
		}
	};
}
