#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SCATTERBLENDUTILITY_CALCULATEDISTANCETOARC_OFFSET UNITYSDK_OFFSET(0x1878BE90)
#define SCATTERBLENDUTILITY_COMPUTEBARYCENTRICCOORDINATES_OFFSET UNITYSDK_OFFSET(0x1878D160)
#define SCATTERBLENDUTILITY_GETBONEDIRVEC_OFFSET UNITYSDK_OFFSET(0x1878B3F0)
#define SCATTERBLENDUTILITY_GETBONEPITCHYAW_OFFSET UNITYSDK_OFFSET(0x1878B090)
#define SCATTERBLENDUTILITY_GETINTERSECTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1878CF50)
#define SCATTERBLENDUTILITY_ISPOINTINSPHERICALTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1878B760)
#define SCATTERBLENDUTILITY_ISPOINTONARC_OFFSET UNITYSDK_OFFSET(0x1878BB00)
#define SCATTERBLENDUTILITY_PROJECTIONCLOSESTAPPROACHSPHERE_1_OFFSET UNITYSDK_OFFSET(0x1878C800)
#define SCATTERBLENDUTILITY_PROJECTIONCLOSESTAPPROACHSPHERE_OFFSET UNITYSDK_OFFSET(0x1878C160)
#define SCATTERBLENDUTILITY_PROJECTIONCLOSESTAPPROACH_OFFSET UNITYSDK_OFFSET(0x1878D450)
#define SCATTERBLENDUTILITY_TRIANGLEBARYCENTRICTOBILINEAR_OFFSET UNITYSDK_OFFSET(0x1878D380)

inline static constexpr unsigned int ScatterBlendUtility_TypeDefinitionIndex = 76297;

class ScatterBlendUtility : public ::System::Object
{
public:
	static ::UnityEngine::Vector2 GetBonePitchYaw(::UnityEngine::Quaternion targetBoneLocalRot, ::UnityEngine::Vector3 forwardBoneBindPos, ::UnityEngine::Quaternion coordRot)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_GETBONEPITCHYAW_OFFSET))(targetBoneLocalRot, forwardBoneBindPos, coordRot);
	}

	static ::UnityEngine::Vector3 GetBoneDirVec(::UnityEngine::Quaternion targetBoneLocalRot, ::UnityEngine::Vector3 forwardBoneBindPos, ::UnityEngine::Quaternion coordRot)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_GETBONEDIRVEC_OFFSET))(targetBoneLocalRot, forwardBoneBindPos, coordRot);
	}

	static ::System::Boolean IsPointInSphericalTriangle(::UnityEngine::Vector3 A, ::UnityEngine::Vector3 B, ::UnityEngine::Vector3 C, ::UnityEngine::Vector3 P)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_ISPOINTINSPHERICALTRIANGLE_OFFSET))(A, B, C, P);
	}

	static ::System::Boolean IsPointOnArc(::UnityEngine::Vector3 A, ::UnityEngine::Vector3 B, ::UnityEngine::Vector3 point)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_ISPOINTONARC_OFFSET))(A, B, point);
	}

	static ::System::Single CalculateDistanceToArc(::UnityEngine::Vector3 A, ::UnityEngine::Vector3 B, ::UnityEngine::Vector3 P, ::UnityEngine::Vector3& projection)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_CALCULATEDISTANCETOARC_OFFSET))(A, B, P, projection);
	}

	static ::System::Void ProjectionClosestApproachSphere(::Il2CppArray<::UnityEngine::Vector3>* dirVec, ::Il2CppArray<::System::Int32>* exteriorEdgeFacets, ::UnityEngine::Vector3 inputP, ::System::Int32& resultEdgeIndex, ::System::Single& resultWeight)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Vector3, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_PROJECTIONCLOSESTAPPROACHSPHERE_OFFSET))(dirVec, exteriorEdgeFacets, inputP, resultEdgeIndex, resultWeight);
	}

	static ::System::Void ProjectionClosestApproachSphere_1(::System::ReadOnlySpan_1<::UnityEngine::Vector3> dirVec, ::System::ReadOnlySpan_1<::System::Int32> exteriorEdgeFacets, ::System::Int32 masterBoneIndex, ::System::Int32 maxEdgeCount, ::System::Int32 maxTargetPoseCount, ::UnityEngine::Vector3 inputP, ::System::Int32& resultEdgeIndex, ::System::Single& resultWeight)
	{
		return ((::System::Void(*)(::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1<::System::Int32>, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_PROJECTIONCLOSESTAPPROACHSPHERE_1_OFFSET))(dirVec, exteriorEdgeFacets, masterBoneIndex, maxEdgeCount, maxTargetPoseCount, inputP, resultEdgeIndex, resultWeight);
	}

	static ::UnityEngine::Vector3 GetIntersectionPoint(::UnityEngine::Vector3 A, ::UnityEngine::Vector3 B, ::UnityEngine::Vector3 C, ::UnityEngine::Vector3 P)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_GETINTERSECTIONPOINT_OFFSET))(A, B, C, P);
	}

	static ::UnityEngine::Vector3 ComputeBarycentricCoordinates(::UnityEngine::Vector3 A, ::UnityEngine::Vector3 B, ::UnityEngine::Vector3 C, ::UnityEngine::Vector3 P)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_COMPUTEBARYCENTRICCOORDINATES_OFFSET))(A, B, C, P);
	}

	static ::System::Void TriangleBarycentricToBilinear(::UnityEngine::Vector3 barycentricWeight, ::System::Single& alpha, ::System::Single& beta)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_TRIANGLEBARYCENTRICTOBILINEAR_OFFSET))(barycentricWeight, alpha, beta);
	}

	static ::System::Void ProjectionClosestApproach(::Il2CppArray<::UnityEngine::Vector2>* PitchYaw, ::Il2CppArray<::System::Int32>* exteriorEdgeFacets, ::UnityEngine::Vector2 inputP, ::System::Int32& resultEdgeIndex, ::System::Single& resultWeight)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Vector2, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SCATTERBLENDUTILITY_PROJECTIONCLOSESTAPPROACH_OFFSET))(PitchYaw, exteriorEdgeFacets, inputP, resultEdgeIndex, resultWeight);
	}
};
