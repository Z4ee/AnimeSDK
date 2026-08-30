#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PS4BINDMOBILECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E79960)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PS4BindMobileConfig_TypeDefinitionIndex = 7881;

	class PS4BindMobileConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Int32 cd; // 0x14
		::System::Boolean show_skip; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS4BINDMOBILECONFIG__CTOR_OFFSET))(this, a1);
		}
	};
}
