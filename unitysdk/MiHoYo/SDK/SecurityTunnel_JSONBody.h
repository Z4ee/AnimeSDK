#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_JSONBODY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x858F8E0)
#define MIHOYO_SDK_SECURITYTUNNEL_JSONBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x85877C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_JSONBody_TypeDefinitionIndex = 37145;

	class SecurityTunnel_JSONBody : public ::System::Object
	{
	public:
		::System::String* Msg; // 0x10
		::System::Int32 Code; // 0x18

		::System::Void _ctor(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_JSONBODY__CTOR_OFFSET))(this, jsonString);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_JSONBODY_TOSTRING_OFFSET))(this);
		}
	};
}
