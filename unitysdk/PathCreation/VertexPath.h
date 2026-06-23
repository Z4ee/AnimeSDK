#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/EndOfPathInstruction.h"
#include "unitysdk/PathCreation/PathSpace.h"
#include "unitysdk/PathCreation/VertexPath_TimeOnPathData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PathCreation { class BezierPath; }
namespace PathCreation::Utility { class VertexPathUtility_PathSplitData; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_VERTEXPATH_CALCULATECLOSESTPOINTONPATHDATA_OFFSET UNITYSDK_OFFSET(0x1DAC60C0)
#define PATHCREATION_VERTEXPATH_CALCULATEPERCENTONPATHDATA_OFFSET UNITYSDK_OFFSET(0x1DAC5B30)
#define PATHCREATION_VERTEXPATH_GETCLOSESTDISTANCEALONGPATH_OFFSET UNITYSDK_OFFSET(0x1DABBE40)
#define PATHCREATION_VERTEXPATH_GETCLOSESTPOINTONPATH_OFFSET UNITYSDK_OFFSET(0x1DAC5DC0)
#define PATHCREATION_VERTEXPATH_GETCLOSESTTIMEONPATH_OFFSET UNITYSDK_OFFSET(0x1DAC6950)
#define PATHCREATION_VERTEXPATH_GETDIRECTIONATDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DAC5310)
#define PATHCREATION_VERTEXPATH_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1DAC5340)
#define PATHCREATION_VERTEXPATH_GETNORMALATDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DAC5540)
#define PATHCREATION_VERTEXPATH_GETNORMAL_1_OFFSET UNITYSDK_OFFSET(0x1DAC5570)
#define PATHCREATION_VERTEXPATH_GETNORMAL_OFFSET UNITYSDK_OFFSET(0x1DABE950)
#define PATHCREATION_VERTEXPATH_GETPOINTATDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DABBD40)
#define PATHCREATION_VERTEXPATH_GETPOINTATTIME_OFFSET UNITYSDK_OFFSET(0x1DAC5030)
#define PATHCREATION_VERTEXPATH_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1DABEA90)
#define PATHCREATION_VERTEXPATH_GETROTATIONATDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DABBD70)
#define PATHCREATION_VERTEXPATH_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1DAC5770)
#define PATHCREATION_VERTEXPATH_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x1DABE810)
#define PATHCREATION_VERTEXPATH_GET_NUMPOINTS_OFFSET UNITYSDK_OFFSET(0x1DABE7F0)
#define PATHCREATION_VERTEXPATH_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DAC5020)
#define PATHCREATION_VERTEXPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAC4FD0)
#define PATHCREATION_VERTEXPATH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DAC3F80)
#define PATHCREATION_VERTEXPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF970)

namespace PathCreation
{
	inline static constexpr unsigned int VertexPath_TypeDefinitionIndex = 37451;

	class VertexPath : public ::System::Object
	{
	public:
		// static const ::System::Int32 accuracy = 0xA; // 0x0
		// static const ::System::Single minVertexSpacing; // 0x0
		::Il2CppArray<::System::Single>* cumulativeLengthAtEachVertex; // 0x10
		::UnityEngine::Transform* transform; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* localPoints; // 0x20
		::Il2CppArray<::System::Single>* times; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* localTangents; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* localNormals; // 0x38
		::System::Boolean isClosedLoop; // 0x40
		::UnityEngine::Bounds bounds; // 0x44
		::System::Single length; // 0x5C
		::PathCreation::PathSpace space; // 0x60
		::UnityEngine::Vector3 up; // 0x64

		::System::Void _ctor(::PathCreation::BezierPath* bezierPath, ::UnityEngine::Transform* transform, ::System::Single maxAngleError, ::System::Single minVertexDst)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::BezierPath*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH__CTOR_OFFSET))(this, bezierPath, transform, maxAngleError, minVertexDst);
		}

		::System::Void _ctor_1(::PathCreation::BezierPath* bezierPath, ::UnityEngine::Transform* transform, ::System::Single vertexSpacing)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::BezierPath*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH__CTOR_1_OFFSET))(this, bezierPath, transform, vertexSpacing);
		}

		::System::Void _ctor_2(::PathCreation::BezierPath* bezierPath, ::PathCreation::Utility::VertexPathUtility_PathSplitData* pathSplitData, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::BezierPath*, ::PathCreation::Utility::VertexPathUtility_PathSplitData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH__CTOR_2_OFFSET))(this, bezierPath, pathSplitData, transform);
		}

		::System::Void UpdateTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_UPDATETRANSFORM_OFFSET))(this, transform);
		}

		::System::Int32 get_NumPoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GET_NUMPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTangent(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETTANGENT_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetNormal(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETNORMAL_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetPoint(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETPOINT_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetPointAtDistance(::System::Single dst, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETPOINTATDISTANCE_OFFSET))(this, dst, endOfPathInstruction);
		}

		::UnityEngine::Vector3 GetDirectionAtDistance(::System::Single dst, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETDIRECTIONATDISTANCE_OFFSET))(this, dst, endOfPathInstruction);
		}

		::UnityEngine::Vector3 GetNormalAtDistance(::System::Single dst, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETNORMALATDISTANCE_OFFSET))(this, dst, endOfPathInstruction);
		}

		::UnityEngine::Quaternion GetRotationAtDistance(::System::Single dst, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETROTATIONATDISTANCE_OFFSET))(this, dst, endOfPathInstruction);
		}

		::UnityEngine::Vector3 GetPointAtTime(::System::Single t, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETPOINTATTIME_OFFSET))(this, t, endOfPathInstruction);
		}

		::UnityEngine::Vector3 GetDirection(::System::Single t, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETDIRECTION_OFFSET))(this, t, endOfPathInstruction);
		}

		::UnityEngine::Vector3 GetNormal_1(::System::Single t, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETNORMAL_1_OFFSET))(this, t, endOfPathInstruction);
		}

		::UnityEngine::Quaternion GetRotation(::System::Single t, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETROTATION_OFFSET))(this, t, endOfPathInstruction);
		}

		::UnityEngine::Vector3 GetClosestPointOnPath(::UnityEngine::Vector3 worldPoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETCLOSESTPOINTONPATH_OFFSET))(this, worldPoint);
		}

		::System::Single GetClosestTimeOnPath(::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETCLOSESTTIMEONPATH_OFFSET))(this, worldPoint);
		}

		::System::Single GetClosestDistanceAlongPath(::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_GETCLOSESTDISTANCEALONGPATH_OFFSET))(this, worldPoint);
		}

		::PathCreation::VertexPath_TimeOnPathData CalculatePercentOnPathData(::System::Single t, ::PathCreation::EndOfPathInstruction endOfPathInstruction)
		{
			return ((::PathCreation::VertexPath_TimeOnPathData(*)(::PVOID, ::System::Single, ::PathCreation::EndOfPathInstruction))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_CALCULATEPERCENTONPATHDATA_OFFSET))(this, t, endOfPathInstruction);
		}

		::PathCreation::VertexPath_TimeOnPathData CalculateClosestPointOnPathData(::UnityEngine::Vector3 worldPoint)
		{
			return ((::PathCreation::VertexPath_TimeOnPathData(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_VERTEXPATH_CALCULATECLOSESTPOINTONPATHDATA_OFFSET))(this, worldPoint);
		}
	};
}
