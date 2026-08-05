#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM_ABTESTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A9470)

namespace MiHoYo::SDK::Base::ABTestPlatform::Const
{
	inline static constexpr unsigned int ABTestGeneralParam_ABTestType_TypeDefinitionIndex = 20952;

	class ABTestGeneralParam_ABTestType : public ::System::Object
	{
	public:
		// static const ::System::Int32 EXPERIMENT = 0x1; // 0x0
		// static const ::System::Int32 SCENE = 0x2; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM_ABTESTTYPE__CTOR_OFFSET))(this);
		}
	};
}
