#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MHYSDKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D94B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_TypeDefinitionIndex = 34960;

	class MHYSDKC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MHYSDKC__CTOR_OFFSET))(this);
		}
	};
}
