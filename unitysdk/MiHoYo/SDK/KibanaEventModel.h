#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaBaseModel.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANAEVENTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B987E80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaEventModel_TypeDefinitionIndex = 7838;

	class KibanaEventModel : public ::MiHoYo::SDK::KibanaBaseModel
	{
	public:
		::System::String* event_name; // 0xD8
		::System::String* msg; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAEVENTMODEL__CTOR_OFFSET))(this);
		}
	};
}
