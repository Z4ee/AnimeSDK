#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATEFLOWDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x181DEE40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateFlowDefine_TypeDefinitionIndex = 7507;

	class AgeGateFlowDefine : public ::System::Object
	{
	public:
		// static const ::System::Int32 COMBO = 0x0; // 0x0
		// static const ::System::Int32 ACCOUNT_PLATFORM = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATEFLOWDEFINE__CTOR_OFFSET))(this);
		}
	};
}
