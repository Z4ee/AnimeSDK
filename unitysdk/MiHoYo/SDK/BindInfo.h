#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BINDINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181EE660)
#define MIHOYO_SDK_BINDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x181D9CB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BindInfo_TypeDefinitionIndex = 7900;

	class BindInfo : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::System::String* mobile; // 0x18
		::System::String* idcard; // 0x20
		::System::String* is_email_verify; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BINDINFO__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BINDINFO_TOSTRING_OFFSET))(this);
		}
	};
}
