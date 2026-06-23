#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipeSplineDeformation/CubicBezierSegment.h"
#include "unitysdk/PipeSplineDeformation/CurveSample.h"
#include "unitysdk/PipeSplineDeformation/PipeInstanceData.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineCullGroup.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineDrawMode.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineGpuBuildResult.h"
#include "unitysdk/PipeSplineDeformation/RemainderPolicy.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipeSplineDeformation { class PipeSplineGpuBufferSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_BUILDAPPROXIMATEINSTANCEMATRIX_OFFSET UNITYSDK_OFFSET(0x1B16F590)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_BUILDBOUNDSFROMSAMPLES_OFFSET UNITYSDK_OFFSET(0x1B16D4A0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_CALCULATEAUTOTANGENT_OFFSET UNITYSDK_OFFSET(0x1B16CEC0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_CALCULATECULLPADDING_OFFSET UNITYSDK_OFFSET(0x1B16E050)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1B16CCA0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWFORCAMERA_OFFSET UNITYSDK_OFFSET(0x1B16E5F0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x1B16EB30)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWINSTANCEDRANGE_OFFSET UNITYSDK_OFFSET(0x1B16F1B0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWINSTANCED_OFFSET UNITYSDK_OFFSET(0x1B16EE70)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_CURVESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1B16B7F0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1B16B790)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_PIPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B16B7C0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_PIPEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B16B770)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_PIPEMESH_OFFSET UNITYSDK_OFFSET(0x1B16B610)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_RENDERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B16B810)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_TOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x1B16B7B0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_VISIBLEPIPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B16B7E0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_HANDLEBEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1B170740)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ISUSINGSCRIPTABLERENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B170480)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x1B16B710)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B16C2E0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B16C0A0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B16B830)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B16C330)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REBUILDANDUPLOAD_OFFSET UNITYSDK_OFFSET(0x1B16DFA0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REBUILDCULLGROUPS_OFFSET UNITYSDK_OFFSET(0x1B16DEE0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REBUILDIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1B16BB20)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B16B8C0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_RELEASEGPURESOURCES_OFFSET UNITYSDK_OFFSET(0x1B16C240)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_RELEASEINDIRECTARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x1B16DFF0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ROTATIONFROMXAXIS_OFFSET UNITYSDK_OFFSET(0x1B16FE90)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SAFENORMALIZE_OFFSET UNITYSDK_OFFSET(0x1B170340)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETAUTOBEZIERFROMWORLDANCHORS_1_OFFSET UNITYSDK_OFFSET(0x1B16C700)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETAUTOBEZIERFROMWORLDANCHORS_OFFSET UNITYSDK_OFFSET(0x1B16C6A0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBAKEDDATA_1_OFFSET UNITYSDK_OFFSET(0x1B16D970)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBAKEDDATA_OFFSET UNITYSDK_OFFSET(0x1B16D3E0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBEZIERSEGMENTS_1_OFFSET UNITYSDK_OFFSET(0x1B16C420)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBEZIERSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1B16B5B0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0x1B16B7A0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SET_PIPEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B16B780)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SET_PIPEMESH_OFFSET UNITYSDK_OFFSET(0x1B16B620)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SHOULDDRAWFORCAMERA_OFFSET UNITYSDK_OFFSET(0x1B16EAD0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_TESTPAST_OFFSET UNITYSDK_OFFSET(0x1B16B330)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_TRYEVALUATECURVESAMPLE_OFFSET UNITYSDK_OFFSET(0x1B16F940)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_UNREGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B16C0F0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_UPDATEINDIRECTARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x1B16E0C0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_UPLOADCURRENTDATA_OFFSET UNITYSDK_OFFSET(0x1B16BFF0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1709C0)
#define PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1707A0)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineRuntimeRenderer_TypeDefinitionIndex = 27253;

	class PipeSplineRuntimeRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_PipeInstanceIndexId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineRuntimeRenderer_TypeDefinitionIndex)->GetStaticField(0x5510);
		}
		// static const ::System::Int32 BatchSize = 0x3FF; // 0x0
		// static const ::System::String* DrawInstancedKeyword; // 0x0
		::UnityEngine::Mesh* pipeMesh; // 0x18
		::UnityEngine::Material* pipeMaterial; // 0x20
		::PipeSplineDeformation::PipeSplineDrawMode drawMode; // 0x28
		::System::Single sampleSpacing; // 0x2C
		::System::Int32 maxCurveSamples; // 0x30
		::System::Single pipeSectionLength; // 0x34
		::PipeSplineDeformation::RemainderPolicy remainderPolicy; // 0x38
		::UnityEngine::Vector3 preferredUp; // 0x3C
		::System::Single rollOffset; // 0x48
		::System::Single radiusScale; // 0x4C
		::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x50
		::System::Boolean receiveShadows; // 0x54
		::System::Boolean enableFrustumCulling; // 0x55
		::System::Int32 frustumCullingGroupSize; // 0x58
		::System::Single frustumCullingPadding; // 0x5C
		::System::Collections::Generic::List_1<::PipeSplineDeformation::CubicBezierSegment>* bezierSegments; // 0x60
		::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>* curveSamples; // 0x68
		::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances; // 0x70
		::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeSplineCullGroup>* cullGroups; // 0x78
		::PipeSplineDeformation::PipeSplineGpuBufferSet* buffers; // 0x80
		::Il2CppArray<::UnityEngine::Matrix4x4>* batchMatrices; // 0x88
		::Il2CppArray<::System::Single>* batchInstanceIndices; // 0x90
		::Il2CppArray<::System::UInt32>* indirectArgs; // 0x98
		::UnityEngine::ComputeBuffer* indirectArgsBuffer; // 0xA0
		::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0xA8
		::PipeSplineDeformation::PipeSplineGpuBuildResult buildResult; // 0xB0
		::UnityEngine::Bounds renderBounds; // 0xD8
		::Il2CppArray<::UnityEngine::Plane>* cachedFrustumPlanes; // 0xF0
		::System::Int32 visiblePipeCount; // 0xF8
		::System::Boolean dirty; // 0xFC
		::System::Boolean hasUploadedData; // 0xFD
		::System::Boolean callbacksRegistered; // 0xFE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER__CCTOR_OFFSET))();
		}

		::System::Void TestPast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_TESTPAST_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_PipeMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_PIPEMESH_OFFSET))(this);
		}

		::System::Void set_PipeMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SET_PIPEMESH_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_PipeMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_PIPEMATERIAL_OFFSET))(this);
		}

		::System::Void set_PipeMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SET_PIPEMATERIAL_OFFSET))(this, value);
		}

		::PipeSplineDeformation::PipeSplineDrawMode get_DrawMode()
		{
			return ((::PipeSplineDeformation::PipeSplineDrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_DRAWMODE_OFFSET))(this);
		}

		::System::Void set_DrawMode(::PipeSplineDeformation::PipeSplineDrawMode value)
		{
			return ((::System::Void(*)(::PVOID, ::PipeSplineDeformation::PipeSplineDrawMode))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SET_DRAWMODE_OFFSET))(this, value);
		}

		::System::Single get_TotalLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_TOTALLENGTH_OFFSET))(this);
		}

		::System::Int32 get_PipeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_PIPECOUNT_OFFSET))(this);
		}

		::System::Int32 get_VisiblePipeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_VISIBLEPIPECOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurveSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_CURVESAMPLECOUNT_OFFSET))(this);
		}

		::UnityEngine::Bounds get_RenderBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_GET_RENDERBOUNDS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void SetBezierSegments(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* sourceSegments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBEZIERSEGMENTS_OFFSET))(this, sourceSegments);
		}

		::System::Void SetBezierSegments_1(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* sourceSegments, ::System::Boolean rebuildImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBEZIERSEGMENTS_1_OFFSET))(this, sourceSegments, rebuildImmediately);
		}

		::System::Void SetAutoBezierFromWorldAnchors(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* worldAnchors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETAUTOBEZIERFROMWORLDANCHORS_OFFSET))(this, worldAnchors);
		}

		::System::Void SetAutoBezierFromWorldAnchors_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* worldAnchors, ::System::Single tangentScale, ::System::Boolean rebuildImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETAUTOBEZIERFROMWORLDANCHORS_1_OFFSET))(this, worldAnchors, tangentScale, rebuildImmediately);
		}

		::System::Void SetBakedData(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* sourceCurveSamples, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>* sourcePipeInstances, ::System::Single actualSampleSpacing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBAKEDDATA_OFFSET))(this, sourceCurveSamples, sourcePipeInstances, actualSampleSpacing);
		}

		::System::Void SetBakedData_1(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* sourceCurveSamples, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>* sourcePipeInstances, ::System::Single actualSampleSpacing, ::UnityEngine::Bounds bakedRenderBounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>*, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SETBAKEDDATA_1_OFFSET))(this, sourceCurveSamples, sourcePipeInstances, actualSampleSpacing, bakedRenderBounds);
		}

		::System::Void RebuildAndUpload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REBUILDANDUPLOAD_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_MARKDIRTY_OFFSET))(this);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_CLEARDATA_OFFSET))(this);
		}

		::System::Void RebuildIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REBUILDIFDIRTY_OFFSET))(this);
		}

		::System::Void RebuildCullGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REBUILDCULLGROUPS_OFFSET))(this);
		}

		::System::Void UploadCurrentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_UPLOADCURRENTDATA_OFFSET))(this);
		}

		::System::Void DrawForCamera(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWFORCAMERA_OFFSET))(this, targetCamera);
		}

		::System::Void DrawInstanced(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWINSTANCED_OFFSET))(this, targetCamera);
		}

		::System::Void DrawInstancedRange(::System::Int32 startIndex, ::System::Int32 rangeCount, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWINSTANCEDRANGE_OFFSET))(this, startIndex, rangeCount, targetCamera);
		}

		::System::Void DrawInstancedIndirect(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_DRAWINSTANCEDINDIRECT_OFFSET))(this, targetCamera);
		}

		::UnityEngine::Matrix4x4 BuildApproximateInstanceMatrix(::System::Single distance)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_BUILDAPPROXIMATEINSTANCEMATRIX_OFFSET))(this, distance);
		}

		::System::Boolean TryEvaluateCurveSample(::System::Single distance, ::PipeSplineDeformation::CurveSample& sample)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::PipeSplineDeformation::CurveSample&))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_TRYEVALUATECURVESAMPLE_OFFSET))(this, distance, sample);
		}

		::System::Void UpdateIndirectArgsBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_UPDATEINDIRECTARGSBUFFER_OFFSET))(this);
		}

		::System::Void RegisterCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_REGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void UnregisterCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_UNREGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void HandleBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_HANDLEBEGINCAMERARENDERING_OFFSET))(this, context, targetCamera);
		}

		static ::System::Boolean IsUsingScriptableRenderPipeline()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ISUSINGSCRIPTABLERENDERPIPELINE_OFFSET))();
		}

		static ::System::Boolean ShouldDrawForCamera(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SHOULDDRAWFORCAMERA_OFFSET))(targetCamera);
		}

		::System::Void ReleaseGpuResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_RELEASEGPURESOURCES_OFFSET))(this);
		}

		::System::Void ReleaseIndirectArgsBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_RELEASEINDIRECTARGSBUFFER_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 CalculateAutoTangent(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points, ::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_CALCULATEAUTOTANGENT_OFFSET))(points, index);
		}

		static ::UnityEngine::Bounds BuildBoundsFromSamples(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* samples)
		{
			return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_BUILDBOUNDSFROMSAMPLES_OFFSET))(samples);
		}

		static ::UnityEngine::Quaternion RotationFromXAxis(::UnityEngine::Vector3 xAxis, ::UnityEngine::Vector3 preferredUp)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_ROTATIONFROMXAXIS_OFFSET))(xAxis, preferredUp);
		}

		::System::Single CalculateCullPadding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_CALCULATECULLPADDING_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 SafeNormalize(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 fallback)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINERUNTIMERENDERER_SAFENORMALIZE_OFFSET))(value, fallback);
		}
	};
}
