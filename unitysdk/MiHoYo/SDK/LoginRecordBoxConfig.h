#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_LOGINRECORDBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A628AF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoginRecordBoxConfig_TypeDefinitionIndex = 7880;

	class LoginRecordBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean is_checked; // 0x10
		::System::Boolean enable_account_list_decode_opt; // 0x11

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOGINRECORDBOXCONFIG__CTOR_OFFSET))(this, a1);
		}
	};
}
