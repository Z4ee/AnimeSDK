#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAMCROSSCENTER_OFFSET UNITYSDK_OFFSET(0x18EE7020)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAM_OFFSET UNITYSDK_OFFSET(0x18EE6CB0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANFILTERKERNEL_OFFSET UNITYSDK_OFFSET(0x18EE7200)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SIGNWITHZERO_OFFSET UNITYSDK_OFFSET(0x18EE6C90)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SQUARE_OFFSET UNITYSDK_OFFSET(0x18EE6CA0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE74A0)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__GAUSSIAN_OFFSET UNITYSDK_OFFSET(0x18EE7000)
#define RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__RESET_OFFSET UNITYSDK_OFFSET(0x18EE7430)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GaussianFilterKernel_TypeDefinitionIndex = 35454;

	class GaussianFilterKernel : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxKernelLength = 0x20; // 0x0
		::Il2CppArray<::UnityEngine::Vector4>* OffsetArray; // 0x10
		::Il2CppArray<::System::Single>* WeightArray; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__CTOR_OFFSET))(this);
		}

		::System::Int32 SignWithZero(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SIGNWITHZERO_OFFSET))(this, a1);
		}

		::System::Single Square(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_SQUARE_OFFSET))(this, a1);
		}

		::System::Int32 Compute1DGaussianBlurParam(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Compute1DGaussianBlurParamCrossCenter(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANBLURPARAMCROSSCENTER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Compute1DGaussianFilterKernel(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL_COMPUTE1DGAUSSIANFILTERKERNEL_OFFSET))(this, a1, a2);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__RESET_OFFSET))(this);
		}

		::System::Single _Gaussian(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GAUSSIANFILTERKERNEL__GAUSSIAN_OFFSET))(this, a1, a2);
		}
	};
}
