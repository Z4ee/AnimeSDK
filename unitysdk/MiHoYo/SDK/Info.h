#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_INFO__CTOR_OFFSET UNITYSDK_OFFSET(0x183458B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Info_TypeDefinitionIndex = 8166;

	class Info : public ::System::Object
	{
	public:
		// static const ::System::String* VERSION; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INFO__CTOR_OFFSET))(this);
		}
	};
}
