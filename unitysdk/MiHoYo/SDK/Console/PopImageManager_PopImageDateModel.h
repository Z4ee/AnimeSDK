#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopImageType.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_POPIMAGEDATEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF60E00)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PopImageManager_PopImageDateModel_TypeDefinitionIndex = 20733;

	class PopImageManager_PopImageDateModel : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::MiHoYo::SDK::PopImageType mode; // 0x14
		::System::Int32 days; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER_POPIMAGEDATEMODEL__CTOR_OFFSET))(this);
		}
	};
}
