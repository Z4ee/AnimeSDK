#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x181EE680)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Bool_TypeDefinitionIndex = 7520;

	class Bool : public ::System::Object
	{
	public:
		// static const ::System::String* FALSE; // 0x0
		// static const ::System::String* TRUE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOOL__CTOR_OFFSET))(this);
		}
	};
}
