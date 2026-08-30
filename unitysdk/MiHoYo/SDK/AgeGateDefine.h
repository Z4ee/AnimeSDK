#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A193860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateDefine_TypeDefinitionIndex = 7497;

	class AgeGateDefine : public ::System::Object
	{
	public:
		// static const ::System::Int32 NO_AGE_GATE = 0x0; // 0x0
		// static const ::System::Int32 AGE_GATE_REQUIRED = 0x1; // 0x0
		// static const ::System::Int32 AGE_GATE_THIRDPARTY_USER_REGISTERY = 0x2; // 0x0
		// static const ::System::Int32 ERROR = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 DISABLE = 0xFFFFFFFE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATEDEFINE__CTOR_OFFSET))(this);
		}
	};
}
