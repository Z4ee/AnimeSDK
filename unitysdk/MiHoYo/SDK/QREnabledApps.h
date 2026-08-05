#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_QRENABLEDAPPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90DE50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int QREnabledApps_TypeDefinitionIndex = 20020;

	class QREnabledApps : public ::System::Object
	{
	public:
		::System::Boolean bbs; // 0x10
		::System::Boolean cloud; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_QRENABLEDAPPS__CTOR_OFFSET))(this);
		}
	};
}
