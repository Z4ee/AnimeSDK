#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CONFIGINIMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FF060)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigIniModel_TypeDefinitionIndex = 19650;

	class ConfigIniModel : public ::System::Object
	{
	public:
		::System::String* channel; // 0x10
		::System::String* sub_channel; // 0x18
		::System::String* cps; // 0x20
		::System::String* uapc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGINIMODEL__CTOR_OFFSET))(this);
		}
	};
}
