#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_USERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17688E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UserInfo_TypeDefinitionIndex = 6920;

	class UserInfo : public ::System::Object
	{
	public:
		::System::String* uid; // 0x10
		::System::String* level; // 0x18
		::System::String* account_type; // 0x20
		::System::String* open_id; // 0x28
		::System::String* tag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_USERINFO__CTOR_OFFSET))(this);
		}
	};
}
