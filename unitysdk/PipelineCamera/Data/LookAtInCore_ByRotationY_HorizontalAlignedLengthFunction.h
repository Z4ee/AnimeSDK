#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/Sinusoidal.h"
#include "unitysdk/Foundation/Function/WithConstant_1.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_CALCULATEYAWRADIAN_OFFSET UNITYSDK_OFFSET(0x9D1B70)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_CONSTANT_OFFSET UNITYSDK_OFFSET(0x9D16D0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0x9D1780)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETCLOSESTINDECREASINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x9D19C0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETCLOSESTININCREASINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x9D1810)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETCLOSEST_OFFSET UNITYSDK_OFFSET(0x9D17C0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETMONOTONICALLYINTERVAL_OFFSET UNITYSDK_OFFSET(0x9D17A0)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_RESOLVE_OFFSET UNITYSDK_OFFSET(0x9D1770)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9D1660)
#define PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION__GETCLOSEST_G__UPDATERESULT_9_0_OFFSET UNITYSDK_OFFSET(0x1DCD5450)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInCore_ByRotationY_HorizontalAlignedLengthFunction_TypeDefinitionIndex = 38439;

	struct alignas(8) LookAtInCore_ByRotationY_HorizontalAlignedLengthFunction
	{
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> _right; // 0x10
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> _forward; // 0x40
		::System::Single _radius; // 0x70
		::System::Single _mainScreenOffsetXRatio; // 0x74

		::System::Void _ctor(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> right, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> forward, ::System::Single radius, ::System::Single mainScreenOffsetXRatio)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>, ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION__CTOR_OFFSET))(this, right, forward, radius, mainScreenOffsetXRatio);
		}

		::System::Single Constant()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_CONSTANT_OFFSET))(this);
		}

		::System::Single Resolve(::System::Single yawRadian)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_RESOLVE_OFFSET))(this, yawRadian);
		}

		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> Derivative()
		{
			return ((::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_DERIVATIVE_OFFSET))(this);
		}

		/*
		::System::ValueTuple_2<::Foundation::Unreal::Unsafe::Interval, ::Foundation::Unreal::Unsafe::Interval> GetMonotonicallyInterval()
		{
			return ((::System::ValueTuple_2<::Foundation::Unreal::Unsafe::Interval, ::Foundation::Unreal::Unsafe::Interval>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETMONOTONICALLYINTERVAL_OFFSET))(this);
		}
		*/

		/*
		::System::UInt32 GetClosest(::System::ReadOnlySpan_1<::Foundation::Unreal::Unsafe::Interval> yawRadianRanges, ::System::Single hintValue, ::System::Span_1<::System::Single> yawRadian, ::System::Single& alignedLength)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ReadOnlySpan_1<::Foundation::Unreal::Unsafe::Interval>, ::System::Single, ::System::Span_1<::System::Single>, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETCLOSEST_OFFSET))(this, yawRadianRanges, hintValue, yawRadian, alignedLength);
		}
		*/

		/*
		::System::Void GetClosestInIncreasingInterval(::Foundation::Unreal::Interval_1<::System::Single> interval, ::System::Single hintValue, ::System::Single& yawRadian, ::System::Single& alignedLength)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETCLOSESTININCREASINGINTERVAL_OFFSET))(this, interval, hintValue, yawRadian, alignedLength);
		}
		*/

		/*
		::System::Void GetClosestInDecreasingInterval(::Foundation::Unreal::Interval_1<::System::Single> interval, ::System::Single hintValue, ::System::Single& yawRadian, ::System::Single& alignedLength)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_GETCLOSESTINDECREASINGINTERVAL_OFFSET))(this, interval, hintValue, yawRadian, alignedLength);
		}
		*/

		/*
		::System::Single CalculateYawRadian(::Foundation::Unreal::Interval_1<::System::Single> interval, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION_CALCULATEYAWRADIAN_OFFSET))(this, interval, value);
		}
		*/

		/*
		static ::System::Void _GetClosest_g__UpdateResult_9_0(::System::Span_1<::System::Single> yaw, ::System::Single newYaw, ::System::Single newLength, ::System::Single& currentLength, ::PipelineCamera::Data::LookAtInCore_ByRotationY_HorizontalAlignedLengthFunction___c__DisplayClass9_0& a5)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Single>, ::System::Single, ::System::Single, ::System::Single&, ::PipelineCamera::Data::LookAtInCore_ByRotationY_HorizontalAlignedLengthFunction___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_BYROTATIONY_HORIZONTALALIGNEDLENGTHFUNCTION__GETCLOSEST_G__UPDATERESULT_9_0_OFFSET))(yaw, newYaw, newLength, currentLength, a5);
		}
		*/
	};
}
