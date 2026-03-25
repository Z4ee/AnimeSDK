#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAMCROSSCENTER_OFFSET UNITYSDK_OFFSET(0x16A9D5A0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAM_OFFSET UNITYSDK_OFFSET(0x16A9D1F0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANFILTERKERNEL_OFFSET UNITYSDK_OFFSET(0x16A9D780)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SIGNWITHZERO_OFFSET UNITYSDK_OFFSET(0x16A9D1D0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SQUARE_OFFSET UNITYSDK_OFFSET(0x16A9D1E0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D9F0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__GAUSSIAN_OFFSET UNITYSDK_OFFSET(0x16A9D580)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__RESET_OFFSET UNITYSDK_OFFSET(0x16A9D970)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GaussianFilterKernel_TypeDefinitionIndex = 29387;

	class GaussianFilterKernel : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxKernelLength = 0x20; // 0x0
		::Il2CppArray<::System::Single>* WeightArray; // 0x10
		::Il2CppArray<::UnityEngine::Vector4>* OffsetArray; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__CTOR_OFFSET))(this);
		}

		::System::Int32 SignWithZero(::System::Int32 testValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SIGNWITHZERO_OFFSET))(this, testValue);
		}

		::System::Single Square(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SQUARE_OFFSET))(this, value);
		}

		::System::Int32 Compute1DGaussianBlurParam(::System::Int32 textureWidth, ::System::Int32 textureHeight, ::System::Int32 kerelLength, ::System::Single blurSigma)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAM_OFFSET))(this, textureWidth, textureHeight, kerelLength, blurSigma);
		}

		::System::Int32 Compute1DGaussianBlurParamCrossCenter(::System::Int32 textureWidth, ::System::Int32 textureHeight, ::System::Int32 kerelLength, ::System::Single blurSigma)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAMCROSSCENTER_OFFSET))(this, textureWidth, textureHeight, kerelLength, blurSigma);
		}

		::System::Void Compute1DGaussianFilterKernel(::System::Int32 kernelRadius, ::System::Single blurSigma)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANFILTERKERNEL_OFFSET))(this, kernelRadius, blurSigma);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__RESET_OFFSET))(this);
		}

		::System::Single _Gaussian(::System::Single index, ::System::Single blurSigma)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__GAUSSIAN_OFFSET))(this, index, blurSigma);
		}
	};
}
