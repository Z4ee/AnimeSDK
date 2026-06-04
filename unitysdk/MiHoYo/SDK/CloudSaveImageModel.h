#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUDSAVEIMAGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x181F29F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CloudSaveImageModel_TypeDefinitionIndex = 8011;

	class CloudSaveImageModel : public ::System::Object
	{
	public:
		::System::String* imageName; // 0x10
		::System::String* imageData; // 0x18
		::System::Int32 callbackIndex; // 0x20
		::System::Int32 totalPart; // 0x24
		::System::Int32 imageSize; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUDSAVEIMAGEMODEL__CTOR_OFFSET))(this);
		}
	};
}
