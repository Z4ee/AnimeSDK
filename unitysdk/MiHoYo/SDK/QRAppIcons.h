#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_QRAPPICONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB5ED0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int QRAppIcons_TypeDefinitionIndex = 7867;

	class QRAppIcons : public ::System::Object
	{
	public:
		::System::String* app; // 0x10
		::System::String* bbs; // 0x18
		::System::String* cloud; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_QRAPPICONS__CTOR_OFFSET))(this);
		}
	};
}
