#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SWITCHBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1880D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SwitchBaseConfig_TypeDefinitionIndex = 18792;

	class SwitchBaseConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10

		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SWITCHBASECONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
