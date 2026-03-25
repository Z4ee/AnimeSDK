#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_BLOOMSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5BD80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BloomStage_TypeDefinitionIndex = 29394;

	class BloomStage : public ::System::Object
	{
	public:
		::System::Int32 KernelSize; // 0x10
		::System::Single KernelSigma; // 0x14
		::System::Single LayerIntensity; // 0x18

		::System::Void _ctor(::System::Int32 kernelSize, ::System::Single kernelSigma, ::System::Single layerIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLOOMSTAGE__CTOR_OFFSET))(this, kernelSize, kernelSigma, layerIntensity);
		}
	};
}
