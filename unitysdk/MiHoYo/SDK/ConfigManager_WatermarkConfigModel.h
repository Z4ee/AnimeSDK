#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class WatermarkInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_WATERMARKCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1888C950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_WatermarkConfigModel_TypeDefinitionIndex = 8157;

	class ConfigManager_WatermarkConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::WatermarkInfo*>* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_WATERMARKCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
