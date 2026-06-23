#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_AGEGATECONSTDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB33030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateConstDefine_TypeDefinitionIndex = 19308;

	class AgeGateConstDefine : public ::System::Object
	{
	public:
		// static const ::System::String* AGE_GATE_PAYLOAD; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATECONSTDEFINE__CTOR_OFFSET))(this);
		}
	};
}
