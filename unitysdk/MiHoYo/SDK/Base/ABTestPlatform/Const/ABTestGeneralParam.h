#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE97000)

namespace MiHoYo::SDK::Base::ABTestPlatform::Const
{
	inline static constexpr unsigned int ABTestGeneralParam_TypeDefinitionIndex = 20950;

	class ABTestGeneralParam : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM__CTOR_OFFSET))(this);
		}
	};
}
