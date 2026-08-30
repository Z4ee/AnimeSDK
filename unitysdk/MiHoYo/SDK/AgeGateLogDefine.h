#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_AGEGATELOGDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72C160)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateLogDefine_TypeDefinitionIndex = 7501;

	class AgeGateLogDefine : public ::System::Object
	{
	public:
		// static const ::System::String* LOG_KEY; // 0x0
		// static const ::System::String* LOG_HEADER_KEY; // 0x0
		// static const ::System::String* COUNTRY_KEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATELOGDEFINE__CTOR_OFFSET))(this);
		}
	};
}
