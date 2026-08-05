#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/CurveFrame.h"
#include "unitysdk/Dest/Math/PositionTangent.h"
#include "unitysdk/Dest/Math/SplinePlaneTypes.h"
#include "unitysdk/Dest/Math/SplineTypes.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class SplineBase_ArcLengthParametrization; }
namespace Dest::Math { class SplineBase_ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEST_MATH_SPLINEBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EE965F0)
#define DEST_MATH_SPLINEBASE_CALCTOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x1EE99550)
#define DEST_MATH_SPLINEBASE_EVALCURVATUREPARAMETRIZED_OFFSET UNITYSDK_OFFSET(0x1EE98F90)
#define DEST_MATH_SPLINEBASE_EVALCURVATURE_OFFSET UNITYSDK_OFFSET(0x1EE97A30)
#define DEST_MATH_SPLINEBASE_EVALFRAMEPARAMETRIZED_OFFSET UNITYSDK_OFFSET(0x1EE98BE0)
#define DEST_MATH_SPLINEBASE_EVALFRAME_OFFSET UNITYSDK_OFFSET(0x1EE97690)
#define DEST_MATH_SPLINEBASE_EVALPOSITIONPARAMETRIZED_1_OFFSET UNITYSDK_OFFSET(0x1EE98610)
#define DEST_MATH_SPLINEBASE_EVALPOSITIONPARAMETRIZED_OFFSET UNITYSDK_OFFSET(0x1EE97FB0)
#define DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENTPARAMETRIZED_1_OFFSET UNITYSDK_OFFSET(0x1EE989A0)
#define DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENTPARAMETRIZED_OFFSET UNITYSDK_OFFSET(0x1EE98340)
#define DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENT_1_OFFSET UNITYSDK_OFFSET(0x1EE97470)
#define DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENT_OFFSET UNITYSDK_OFFSET(0x1EE96E50)
#define DEST_MATH_SPLINEBASE_EVALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1EE97110)
#define DEST_MATH_SPLINEBASE_EVALPOSITION_OFFSET UNITYSDK_OFFSET(0x1EE96AE0)
#define DEST_MATH_SPLINEBASE_EVALTANGENTPARAMETRIZED_1_OFFSET UNITYSDK_OFFSET(0x1EE987B0)
#define DEST_MATH_SPLINEBASE_EVALTANGENTPARAMETRIZED_OFFSET UNITYSDK_OFFSET(0x1EE98150)
#define DEST_MATH_SPLINEBASE_EVALTANGENT_1_OFFSET UNITYSDK_OFFSET(0x1EE97290)
#define DEST_MATH_SPLINEBASE_EVALTANGENT_OFFSET UNITYSDK_OFFSET(0x1EE96C70)
#define DEST_MATH_SPLINEBASE_EVALTORSIONPARAMETRIZED_OFFSET UNITYSDK_OFFSET(0x1EE99270)
#define DEST_MATH_SPLINEBASE_EVALTORSION_OFFSET UNITYSDK_OFFSET(0x1EE97CF0)
#define DEST_MATH_SPLINEBASE_GETSEGMENTINDEXANDTIME_OFFSET UNITYSDK_OFFSET(0x1EE967D0)
#define DEST_MATH_SPLINEBASE_GET_SEGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EE96570)
#define DEST_MATH_SPLINEBASE_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1EE965D0)
#define DEST_MATH_SPLINEBASE_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1EE965B0)
#define DEST_MATH_SPLINEBASE_LENGTHTOTIME_1_OFFSET UNITYSDK_OFFSET(0x1EE99A40)
#define DEST_MATH_SPLINEBASE_LENGTHTOTIME_OFFSET UNITYSDK_OFFSET(0x1EE99600)
#define DEST_MATH_SPLINEBASE_PARAMETRIZEBYARCLENGTH_OFFSET UNITYSDK_OFFSET(0x1EE99A60)
#define DEST_MATH_SPLINEBASE_PREPAREFORRUNTIME_OFFSET UNITYSDK_OFFSET(0x1EE96670)
#define DEST_MATH_SPLINEBASE_RECALCSEGMENTSLENGTH_OFFSET UNITYSDK_OFFSET(0x1EE968A0)
#define DEST_MATH_SPLINEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE966F0)

namespace Dest::Math
{
	inline static constexpr unsigned int SplineBase_TypeDefinitionIndex = 35455;

	class SplineBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Dest::Math::SplineBase_ArcLengthParametrization* _parametrization; // 0x18
		::System::Collections::Generic::List_1<::Dest::Math::SplineBase_ItemData*>* _data; // 0x20
		::Dest::Math::SplineTypes _type; // 0x28
		::System::Boolean _recalcSegmentsLength; // 0x2C
		::UnityEngine::Color _renderColor; // 0x30
		::Dest::Math::SplinePlaneTypes _creationPlane; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SegmentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_GET_SEGMENTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_GET_VALID_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_AWAKE_OFFSET))(this);
		}

		::System::Void GetSegmentIndexAndTime(::System::Single time, ::System::Int32& segmentIndex, ::System::Single& segmentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_GETSEGMENTINDEXANDTIME_OFFSET))(this, time, segmentIndex, segmentTime);
		}

		::System::Void PrepareForRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_PREPAREFORRUNTIME_OFFSET))(this);
		}

		::System::Void RecalcSegmentsLength()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_RECALCSEGMENTSLENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 EvalPosition(::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITION_OFFSET))(this, time);
		}

		::UnityEngine::Vector3 EvalTangent(::System::Single time)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALTANGENT_OFFSET))(this, time);
		}

		::Dest::Math::PositionTangent EvalPositionTangent(::System::Single time)
		{
			return ((::Dest::Math::PositionTangent(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENT_OFFSET))(this, time);
		}

		::System::Void EvalPosition_1(::System::Single time, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITION_1_OFFSET))(this, time, position);
		}

		::System::Void EvalTangent_1(::System::Single time, ::UnityEngine::Vector3& tangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALTANGENT_1_OFFSET))(this, time, tangent);
		}

		::System::Void EvalPositionTangent_1(::System::Single time, ::Dest::Math::PositionTangent& positionTangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Dest::Math::PositionTangent&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENT_1_OFFSET))(this, time, positionTangent);
		}

		::System::Void EvalFrame(::System::Single time, ::Dest::Math::CurveFrame& frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Dest::Math::CurveFrame&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALFRAME_OFFSET))(this, time, frame);
		}

		::System::Single EvalCurvature(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALCURVATURE_OFFSET))(this, time);
		}

		::System::Single EvalTorsion(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALTORSION_OFFSET))(this, time);
		}

		::UnityEngine::Vector3 EvalPositionParametrized(::System::Single length)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITIONPARAMETRIZED_OFFSET))(this, length);
		}

		::UnityEngine::Vector3 EvalTangentParametrized(::System::Single length)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALTANGENTPARAMETRIZED_OFFSET))(this, length);
		}

		::Dest::Math::PositionTangent EvalPositionTangentParametrized(::System::Single length)
		{
			return ((::Dest::Math::PositionTangent(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENTPARAMETRIZED_OFFSET))(this, length);
		}

		::System::Void EvalPositionParametrized_1(::System::Single length, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITIONPARAMETRIZED_1_OFFSET))(this, length, position);
		}

		::System::Void EvalTangentParametrized_1(::System::Single length, ::UnityEngine::Vector3& tangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALTANGENTPARAMETRIZED_1_OFFSET))(this, length, tangent);
		}

		::System::Void EvalPositionTangentParametrized_1(::System::Single length, ::Dest::Math::PositionTangent& positionTangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Dest::Math::PositionTangent&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALPOSITIONTANGENTPARAMETRIZED_1_OFFSET))(this, length, positionTangent);
		}

		::System::Void EvalFrameParametrized(::System::Single length, ::Dest::Math::CurveFrame& frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Dest::Math::CurveFrame&))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALFRAMEPARAMETRIZED_OFFSET))(this, length, frame);
		}

		::System::Single EvalCurvatureParametrized(::System::Single length)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALCURVATUREPARAMETRIZED_OFFSET))(this, length);
		}

		::System::Single EvalTorsionParametrized(::System::Single length)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_EVALTORSIONPARAMETRIZED_OFFSET))(this, length);
		}

		::System::Single CalcTotalLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_CALCTOTALLENGTH_OFFSET))(this);
		}

		::System::Single LengthToTime(::System::Single length, ::System::Int32 iterations, ::System::Single tolerance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_LENGTHTOTIME_OFFSET))(this, length, iterations, tolerance);
		}

		::System::Single LengthToTime_1(::System::Single length)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_LENGTHTOTIME_1_OFFSET))(this, length);
		}

		::System::Single ParametrizeByArcLength(::System::Int32 pointCount)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_PARAMETRIZEBYARCLENGTH_OFFSET))(this, pointCount);
		}
	};
}
