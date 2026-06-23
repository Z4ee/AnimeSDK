#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Ara/AraTrail_CurveFrame.h"
#include "unitysdk/Ara/AraTrail_Point.h"
#include "unitysdk/Ara/AraTrail_TextureMode.h"
#include "unitysdk/Ara/AraTrail_Timescale.h"
#include "unitysdk/Ara/AraTrail_TrailAlignment.h"
#include "unitysdk/Ara/AraTrail_TrailSorting.h"
#include "unitysdk/Ara/AraTrail_TrailSpace.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Ara { class TrailSection; }
namespace Ara { template <typename T> class ElasticArray_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define ARA_ARATRAIL_ADD_ONUPDATEPOINTS_OFFSET UNITYSDK_OFFSET(0x1E217420)
#define ARA_ARATRAIL_APPENDFLATTRAIL_OFFSET UNITYSDK_OFFSET(0x1E21CC40)
#define ARA_ARATRAIL_APPENDSECTION_OFFSET UNITYSDK_OFFSET(0x1E21C680)
#define ARA_ARATRAIL_ATTACHTOCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1E217920)
#define ARA_ARATRAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E217810)
#define ARA_ARATRAIL_CLEARMESHDATA_OFFSET UNITYSDK_OFFSET(0x1E219070)
#define ARA_ARATRAIL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E217B30)
#define ARA_ARATRAIL_COMMITMESHDATA_OFFSET UNITYSDK_OFFSET(0x1E2191D0)
#define ARA_ARATRAIL_DETACHFROMCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1E217A30)
#define ARA_ARATRAIL_EMISSIONSTEP_OFFSET UNITYSDK_OFFSET(0x1E217D20)
#define ARA_ARATRAIL_EMITPOINT_OFFSET UNITYSDK_OFFSET(0x1E2188C0)
#define ARA_ARATRAIL_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E218FB0)
#define ARA_ARATRAIL_GETLENGHT_OFFSET UNITYSDK_OFFSET(0x1E219850)
#define ARA_ARATRAIL_GETRENDERABLEPOINTS_OFFSET UNITYSDK_OFFSET(0x1E219950)
#define ARA_ARATRAIL_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1E217540)
#define ARA_ARATRAIL_GET_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1E217560)
#define ARA_ARATRAIL_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1E217580)
#define ARA_ARATRAIL_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1E217520)
#define ARA_ARATRAIL_GET_WORLDTOTRAIL_OFFSET UNITYSDK_OFFSET(0x1E217590)
#define ARA_ARATRAIL_INITIALIZECURVEFRAME_OFFSET UNITYSDK_OFFSET(0x1E21A9F0)
#define ARA_ARATRAIL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E217CC0)
#define ARA_ARATRAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E217120)
#define ARA_ARATRAIL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E216EC0)
#define ARA_ARATRAIL_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E217320)
#define ARA_ARATRAIL_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1E217350)
#define ARA_ARATRAIL_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1E217260)
#define ARA_ARATRAIL_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1E216F50)
#define ARA_ARATRAIL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E2177E0)
#define ARA_ARATRAIL_PHYSICSSTEP_OFFSET UNITYSDK_OFFSET(0x1E218E60)
#define ARA_ARATRAIL_REMOVE_ONUPDATEPOINTS_OFFSET UNITYSDK_OFFSET(0x1E2174A0)
#define ARA_ARATRAIL_RENDERMESH_OFFSET UNITYSDK_OFFSET(0x1E219560)
#define ARA_ARATRAIL_SNAPLASTPOINTTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E217F30)
#define ARA_ARATRAIL_UPDATEPOINTSLIFECYCLE_OFFSET UNITYSDK_OFFSET(0x1E218640)
#define ARA_ARATRAIL_UPDATESEGMENTMESH_OFFSET UNITYSDK_OFFSET(0x1E21B510)
#define ARA_ARATRAIL_UPDATETRAILMESH_OFFSET UNITYSDK_OFFSET(0x1E21B190)
#define ARA_ARATRAIL_UPDATEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E217B60)
#define ARA_ARATRAIL_WARMUP_OFFSET UNITYSDK_OFFSET(0x1E217820)
#define ARA_ARATRAIL__ATTACHTOCAMERARENDERING_B__88_0_OFFSET UNITYSDK_OFFSET(0x1E21E0D0)
#define ARA_ARATRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E21DC60)

namespace Ara
{
	inline static constexpr unsigned int AraTrail_TypeDefinitionIndex = 32921;

	class AraTrail : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single epsilon; // 0x0
		::Ara::TrailSection* section; // 0x18
		::Ara::AraTrail_TrailSpace space; // 0x20
		::UnityEngine::Transform* customSpace; // 0x28
		::Ara::AraTrail_Timescale timescale; // 0x30
		::Ara::AraTrail_TrailAlignment alignment; // 0x34
		::Ara::AraTrail_TrailSorting sorting; // 0x38
		::System::Single thickness; // 0x3C
		::System::Int32 smoothness; // 0x40
		::System::Boolean highQualityCorners; // 0x44
		::System::Int32 cornerRoundness; // 0x48
		::UnityEngine::AnimationCurve* thicknessOverLength; // 0x50
		::UnityEngine::Gradient* colorOverLength; // 0x58
		::UnityEngine::AnimationCurve* thicknessOverTime; // 0x60
		::UnityEngine::Gradient* colorOverTime; // 0x68
		::System::Boolean emit; // 0x70
		::System::Single initialThickness; // 0x74
		::UnityEngine::Color initialColor; // 0x78
		::UnityEngine::Vector3 initialVelocity; // 0x88
		::System::Single timeInterval; // 0x94
		::System::Single minDistance; // 0x98
		::System::Single time; // 0x9C
		::System::Boolean enablePhysics; // 0xA0
		::System::Single warmup; // 0xA4
		::UnityEngine::Vector3 gravity; // 0xA8
		::System::Single inertia; // 0xB4
		::System::Single velocitySmoothing; // 0xB8
		::System::Single damping; // 0xBC
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0xC0
		::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0xC8
		::System::Boolean receiveShadows; // 0xCC
		::System::Boolean useLightProbes; // 0xCD
		::System::Boolean quadMapping; // 0xCE
		::Ara::AraTrail_TextureMode textureMode; // 0xD0
		::System::Single uvFactor; // 0xD4
		::System::Single uvWidthFactor; // 0xD8
		::System::Single tileAnchor; // 0xDC
		::System::Action* onUpdatePoints; // 0xE0
		::Ara::ElasticArray_1<::Ara::AraTrail_Point>* points; // 0xE8
		::Ara::ElasticArray_1<::Ara::AraTrail_Point>* renderablePoints; // 0xF0
		::System::Collections::Generic::List_1<::System::Int32>* discontinuities; // 0xF8
		::UnityEngine::Mesh* mesh_; // 0x100
		::UnityEngine::Vector3 velocity; // 0x108
		::UnityEngine::Vector3 prevPosition; // 0x114
		::System::Single accumTime; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals; // 0x130
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents; // 0x138
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs; // 0x140
		::System::Collections::Generic::List_1<::UnityEngine::Color>* vertColors; // 0x148
		::System::Collections::Generic::List_1<::System::Int32>* tris; // 0x150
		::UnityEngine::Vector3 nextV; // 0x158
		::UnityEngine::Vector3 prevV; // 0x164
		::UnityEngine::Vector3 vertex; // 0x170
		::UnityEngine::Vector3 normal; // 0x17C
		::UnityEngine::Vector3 bitangent; // 0x188
		::UnityEngine::Vector4 tangent; // 0x194
		::UnityEngine::Vector4 texTangent; // 0x1A4
		::UnityEngine::Vector4 uv; // 0x1B4
		::UnityEngine::Color color; // 0x1C4
		::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* renderCallback; // 0x1D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void add_onUpdatePoints(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ADD_ONUPDATEPOINTS_OFFSET))(this, value);
		}

		::System::Void remove_onUpdatePoints(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_REMOVE_ONUPDATEPOINTS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GET_VELOCITY_OFFSET))(this);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GET_DELTATIME_OFFSET))(this);
		}

		::System::Single get_FixedDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GET_FIXEDDELTATIME_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldToTrail()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GET_WORLDTOTRAIL_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void AttachToCameraRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_ATTACHTOCAMERARENDERING_OFFSET))(this);
		}

		::System::Void DetachFromCameraRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_DETACHFROMCAMERARENDERING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_CLEAR_OFFSET))(this);
		}

		::System::Void UpdateVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_UPDATEVELOCITY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void EmissionStep(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_EMISSIONSTEP_OFFSET))(this, time);
		}

		::System::Void Warmup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_WARMUP_OFFSET))(this);
		}

		::System::Void PhysicsStep(::System::Single timestep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_PHYSICSSTEP_OFFSET))(this, timestep);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void EmitPoint(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_EMITPOINT_OFFSET))(this, position);
		}

		::System::Void SnapLastPointToTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_SNAPLASTPOINTTOTRANSFORM_OFFSET))(this);
		}

		::System::Void UpdatePointsLifecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_UPDATEPOINTSLIFECYCLE_OFFSET))(this);
		}

		::System::Void ClearMeshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_CLEARMESHDATA_OFFSET))(this);
		}

		::System::Void CommitMeshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_COMMITMESHDATA_OFFSET))(this);
		}

		::System::Void RenderMesh(::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_RENDERMESH_OFFSET))(this, cam);
		}

		::System::Single GetLenght(::Ara::ElasticArray_1<::Ara::AraTrail_Point>* input)
		{
			return ((::System::Single(*)(::PVOID, ::Ara::ElasticArray_1<::Ara::AraTrail_Point>*))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GETLENGHT_OFFSET))(this, input);
		}

		::Ara::ElasticArray_1<::Ara::AraTrail_Point>* GetRenderablePoints(::System::Int32 start, ::System::Int32 end)
		{
			return ((::Ara::ElasticArray_1<::Ara::AraTrail_Point>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_GETRENDERABLEPOINTS_OFFSET))(this, start, end);
		}

		::Ara::AraTrail_CurveFrame InitializeCurveFrame(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 nextPoint)
		{
			return ((::Ara::AraTrail_CurveFrame(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_INITIALIZECURVEFRAME_OFFSET))(this, point, nextPoint);
		}

		::System::Void UpdateTrailMesh(::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_UPDATETRAILMESH_OFFSET))(this, cam);
		}

		::System::Void UpdateSegmentMesh(::System::Int32 start, ::System::Int32 end, ::UnityEngine::Vector3 localCamPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_UPDATESEGMENTMESH_OFFSET))(this, start, end, localCamPosition);
		}

		::System::Void AppendSection(::Il2CppArray<::Ara::AraTrail_Point>* data, ::Ara::AraTrail_CurveFrame& frame, ::System::Int32 i, ::System::Int32 count, ::System::Single sectionThickness, ::System::Single vCoord)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Ara::AraTrail_Point>*, ::Ara::AraTrail_CurveFrame&, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_APPENDSECTION_OFFSET))(this, data, frame, i, count, sectionThickness, vCoord);
		}

		::System::Void AppendFlatTrail(::Il2CppArray<::Ara::AraTrail_Point>* data, ::Ara::AraTrail_CurveFrame& frame, ::System::Int32 i, ::System::Int32 count, ::System::Single sectionThickness, ::System::Single vCoord, ::System::Int32& va, ::System::Int32& vb)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Ara::AraTrail_Point>*, ::Ara::AraTrail_CurveFrame&, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_APPENDFLATTRAIL_OFFSET))(this, data, frame, i, count, sectionThickness, vCoord, va, vb);
		}

		::System::Void _AttachToCameraRendering_b__88_0(::UnityEngine::Rendering::ScriptableRenderContext cntxt, ::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ARA_ARATRAIL__ATTACHTOCAMERARENDERING_B__88_0_OFFSET))(this, cntxt, cam);
		}
	};
}
