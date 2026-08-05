#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/ConfinerOven_AspectStretcher.h"
#include "unitysdk/Cinemachine/ConfinerOven_BakingState.h"
#include "unitysdk/Cinemachine/ConfinerOven_BakingStateCache.h"
#include "unitysdk/Cinemachine/ConfinerOven_PolygonSolution.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Cinemachine { class ConfinerOven_BakedSolution; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CONFINEROVEN_BAKECONFINER_OFFSET UNITYSDK_OFFSET(0x1FA361B0)
#define CINEMACHINE_CONFINEROVEN_COMPUTESKELETON_OFFSET UNITYSDK_OFFSET(0x1FA36680)
#define CINEMACHINE_CONFINEROVEN_GETBAKEDSOLUTION_OFFSET UNITYSDK_OFFSET(0x1FA35CD0)
#define CINEMACHINE_CONFINEROVEN_GETPOLYGONBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1FA360C0)
#define CINEMACHINE_CONFINEROVEN_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1FA360A0)
#define CINEMACHINE_CONFINEROVEN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FA35680)
#define CINEMACHINE_CONFINEROVEN_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1FA360B0)
#define CINEMACHINE_CONFINEROVEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA355A0)

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_TypeDefinitionIndex = 34768;

	class ConfinerOven : public ::System::Object
	{
	public:
		// static const ::System::Int64 k_FloatToIntScaler = 0x186A0; // 0x0
		// static const ::System::Single k_IntToFloatScaler; // 0x0
		// static const ::System::Single k_MinStepSize; // 0x0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* m_OriginalPolygon; // 0x10
		::Cinemachine::ConfinerOven_BakingStateCache m_Cache; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* m_Skeleton; // 0x60
		::System::Single m_MinFrustumHeightWithBones; // 0x68
		::System::Single m_BakeProgress; // 0x6C
		::UnityEngine::Rect m_PolygonRect; // 0x70
		::System::Single m_maxComputationTimeForFullSkeletonBakeInSeconds; // 0x80
		::Cinemachine::ConfinerOven_BakingState _State_k__BackingField; // 0x84
		::Cinemachine::ConfinerOven_AspectStretcher m_AspectStretcher; // 0x88

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*& inputPath, ::System::Single& aspectRatio, ::System::Single maxFrustumHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN__CTOR_OFFSET))(this, inputPath, aspectRatio, maxFrustumHeight);
		}

		::Cinemachine::ConfinerOven_BakedSolution* GetBakedSolution(::System::Single frustumHeight)
		{
			return ((::Cinemachine::ConfinerOven_BakedSolution*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_GETBAKEDSOLUTION_OFFSET))(this, frustumHeight);
		}

		::Cinemachine::ConfinerOven_BakingState get_State()
		{
			return ((::Cinemachine::ConfinerOven_BakingState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Cinemachine::ConfinerOven_BakingState value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ConfinerOven_BakingState))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_SET_STATE_OFFSET))(this, value);
		}

		::System::Void Initialize(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*& inputPath, ::System::Single& aspectRatio, ::System::Single maxFrustumHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_INITIALIZE_OFFSET))(this, inputPath, aspectRatio, maxFrustumHeight);
		}

		::System::Void BakeConfiner(::System::Single maxComputationTimePerFrameInSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKECONFINER_OFFSET))(this, maxComputationTimePerFrameInSeconds);
		}

		static ::UnityEngine::Rect GetPolygonBoundingBox(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*& polygons)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_GETPOLYGONBOUNDINGBOX_OFFSET))(polygons);
		}

		::System::Void ComputeSkeleton(::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven_PolygonSolution>*& solutions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven_PolygonSolution>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_COMPUTESKELETON_OFFSET))(this, solutions);
		}
	};
}
