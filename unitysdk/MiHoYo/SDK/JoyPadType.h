#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_JOYPADTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B987E60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JoyPadType_TypeDefinitionIndex = 7522;

	class JoyPadType : public ::System::Object
	{
	public:
		// static const ::System::String* DEFAULT; // 0x0
		// static const ::System::String* SONY; // 0x0
		// static const ::System::String* XBOX; // 0x0
		// static const ::System::String* SONYPS5; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JOYPADTYPE__CTOR_OFFSET))(this);
		}
	};
}
