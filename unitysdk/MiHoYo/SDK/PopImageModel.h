#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopImageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_POPIMAGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1C140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImageModel_TypeDefinitionIndex = 20370;

	class PopImageModel : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::String* img; // 0x18
		::System::String* url; // 0x20
		::MiHoYo::SDK::PopImageType mode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGEMODEL__CTOR_OFFSET))(this);
		}
	};
}
