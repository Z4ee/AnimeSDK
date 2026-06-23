#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipeSplineDeformation/CubicBezierSegment.h"
#include "unitysdk/PipeSplineDeformation/CurveSample.h"
#include "unitysdk/PipeSplineDeformation/PipeInstanceData.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineCullGroup.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineGpuBuildResult.h"
#include "unitysdk/PipeSplineDeformation/RemainderPolicy.h"
#include "unitysdk/UnityEngine/Color.h"
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
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_APPENDANCHOR_OFFSET UNITYSDK_OFFSET(0x1C3F4940)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_APPLYCHILDNODEROTATIONFRAMES_OFFSET UNITYSDK_OFFSET(0x1C3F77F0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_BUILDSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C3F7410)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATEANCHORTANGENT_OFFSET UNITYSDK_OFFSET(0x1C3F42C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATEAUTOTANGENT_1_OFFSET UNITYSDK_OFFSET(0x1C3F9120)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATEAUTOTANGENT_OFFSET UNITYSDK_OFFSET(0x1C3F6C20)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATECULLPADDING_OFFSET UNITYSDK_OFFSET(0x1C3F83E0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CREATEORREFRESHCHILDNODESFROMANCHORS_OFFSET UNITYSDK_OFFSET(0x1C3F5EF0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_DRAWFORCAMERA_OFFSET UNITYSDK_OFFSET(0x1C3F98B0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_DRAWINSTANCEDRANGE_OFFSET UNITYSDK_OFFSET(0x1C3F9F10)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ENSUREDEFAULTANCHORS_OFFSET UNITYSDK_OFFSET(0x1C3F2A10)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ESTIMATESEGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3F9480)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_EVALUATECURVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C3FA410)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_FINDDIRECTCHILD_OFFSET UNITYSDK_OFFSET(0x1C3F8900)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_FINDSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1C3F9630)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_FORCEREBUILD_OFFSET UNITYSDK_OFFSET(0x1C3F73C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GENERATEANCHORSFROMBEZIERSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C3F54F0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETANCHORWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C3F40F0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETANCHORWORLDTANGENT_OFFSET UNITYSDK_OFFSET(0x1C3F4240)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETANCHORWORLDUP_OFFSET UNITYSDK_OFFSET(0x1C3F44B0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETEDITORNODENAME_OFFSET UNITYSDK_OFFSET(0x1C3F8870)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETHIERARCHYKEY_OFFSET UNITYSDK_OFFSET(0x1C3FA630)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETSEGMENTENDTANGENT_OFFSET UNITYSDK_OFFSET(0x1C3F85C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETSEGMENTSTARTTANGENT_OFFSET UNITYSDK_OFFSET(0x1C3F8450)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETTANGENTSCALE_OFFSET UNITYSDK_OFFSET(0x1C3F90C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_ACTUALSAMPLESPACING_OFFSET UNITYSDK_OFFSET(0x1C3F2710)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_ANCHORCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3F2690)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_EDITORCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C3F26C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_PIPECOUNT_OFFSET UNITYSDK_OFFSET(0x1C3F26D0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_TOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3F2700)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_USEEDITORCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C3F26B0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_VISIBLEPIPECOUNT_OFFSET UNITYSDK_OFFSET(0x1C3F26F0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_HANDLEBEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1C3FA5D0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x1C3F35D0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C3F3920)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C3F3770)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C3FA820)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3F2940)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C3F3980)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REBUILDCULLGROUPS_OFFSET UNITYSDK_OFFSET(0x1C3F8310)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REBUILDIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1C3F3D00)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REFRESHEDITORCHILDNODELIST_OFFSET UNITYSDK_OFFSET(0x1C3F7140)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1C3F3620)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REMOVELASTANCHOR_OFFSET UNITYSDK_OFFSET(0x1C3F4BA0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_RESETANCHORS_OFFSET UNITYSDK_OFFSET(0x1C3F2770)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_RESET_OFFSET UNITYSDK_OFFSET(0x1C3F2720)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ROTATIONFROMAXES_OFFSET UNITYSDK_OFFSET(0x1C3F8C10)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SAFENORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C3F8730)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETANCHORWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C3F47D0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETAUTOBEZIERFROMWORLDANCHORS_1_OFFSET UNITYSDK_OFFSET(0x1C3F6650)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETAUTOBEZIERFROMWORLDANCHORS_OFFSET UNITYSDK_OFFSET(0x1C3F65F0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETBEZIERSEGMENTS_1_OFFSET UNITYSDK_OFFSET(0x1C3F51A0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETBEZIERSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C3F5140)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETEDITORCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C3F4D90)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETUSEEDITORCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C3F4C90)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SYNCANCHORSFROMEDITORCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C3F2A70)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SYNCEDITORCHILDNODESONINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C3F3C70)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_TRYSETEDITORONLYTAG_OFFSET UNITYSDK_OFFSET(0x1C3F8B20)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_UNREGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1C3F37D0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3F3AB0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FAC40)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FA980)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineMinimalTester_TypeDefinitionIndex = 27293;

	class PipeSplineMinimalTester : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_PipeInstanceIndexId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineMinimalTester_TypeDefinitionIndex)->GetStaticField(0x6EB0);
		}
		// static const ::System::Int32 BatchSize = 0x3FF; // 0x0
		// static const ::System::String* DrawInstancedKeyword; // 0x0
		// static const ::System::String* EditorNodePrefix; // 0x0
		// static const ::System::String* EditorOnlyTag; // 0x0
		::UnityEngine::Mesh* pipeMesh; // 0x18
		::UnityEngine::Material* pipeMaterial; // 0x20
		::System::Boolean useEditorChildNodes; // 0x28
		::System::Int32 childNodeSyncFrameInterval; // 0x2C
		::System::Boolean useChildNodeRotationTangents; // 0x30
		::System::Single childNodeTangentScale; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* editorChildNodes; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* anchorLocalPositions; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* anchorLocalTangents; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* anchorLocalUps; // 0x50
		::System::Single sampleSpacing; // 0x58
		::System::Int32 maxCurveSamples; // 0x5C
		::System::Single pipeSectionLength; // 0x60
		::PipeSplineDeformation::RemainderPolicy remainderPolicy; // 0x64
		::System::Single rollOffset; // 0x68
		::System::Single radiusScale; // 0x6C
		::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x70
		::System::Boolean receiveShadows; // 0x74
		::System::Boolean enableFrustumCulling; // 0x75
		::System::Int32 frustumCullingGroupSize; // 0x78
		::System::Single frustumCullingPadding; // 0x7C
		::System::Boolean drawCurveGizmos; // 0x80
		::UnityEngine::Color curveColor; // 0x84
		::System::Collections::Generic::List_1<::PipeSplineDeformation::CubicBezierSegment>* segments; // 0x98
		::System::Collections::Generic::List_1<::PipeSplineDeformation::CurveSample>* curveSamples; // 0xA0
		::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances; // 0xA8
		::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeSplineCullGroup>* cullGroups; // 0xB0
		::PipeSplineDeformation::PipeSplineGpuBufferSet* buffers; // 0xB8
		::Il2CppArray<::UnityEngine::Matrix4x4>* batchMatrices; // 0xC0
		::Il2CppArray<::System::Single>* batchInstanceIndices; // 0xC8
		::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0xD0
		::PipeSplineDeformation::PipeSplineGpuBuildResult buildResult; // 0xD8
		::UnityEngine::Matrix4x4 cachedLocalToWorld; // 0x100
		::Il2CppArray<::UnityEngine::Plane>* cachedFrustumPlanes; // 0x140
		::System::Int32 lastChildNodeSyncFrame; // 0x148
		::System::Int32 visiblePipeCount; // 0x14C
		::System::Boolean useExplicitBezierSegments; // 0x150
		::System::Boolean dirty; // 0x151
		::System::Boolean callbacksRegistered; // 0x152

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_AnchorCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_ANCHORCOUNT_OFFSET))(this);
		}

		::System::Boolean get_UseEditorChildNodes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_USEEDITORCHILDNODES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* get_EditorChildNodes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_EDITORCHILDNODES_OFFSET))(this);
		}

		::System::Int32 get_PipeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_PIPECOUNT_OFFSET))(this);
		}

		::System::Int32 get_VisiblePipeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_VISIBLEPIPECOUNT_OFFSET))(this);
		}

		::System::Single get_TotalLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_TOTALLENGTH_OFFSET))(this);
		}

		::System::Single get_ActualSampleSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GET_ACTUALSAMPLESPACING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAnchorWorldPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETANCHORWORLDPOSITION_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetAnchorWorldTangent(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETANCHORWORLDTANGENT_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetAnchorWorldUp(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETANCHORWORLDUP_OFFSET))(this, index);
		}

		::System::Void SetAnchorWorldPosition(::System::Int32 index, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETANCHORWORLDPOSITION_OFFSET))(this, index, worldPosition);
		}

		::System::Void ResetAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_RESETANCHORS_OFFSET))(this);
		}

		::System::Void AppendAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_APPENDANCHOR_OFFSET))(this);
		}

		::System::Void RemoveLastAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REMOVELASTANCHOR_OFFSET))(this);
		}

		::System::Void SetUseEditorChildNodes(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETUSEEDITORCHILDNODES_OFFSET))(this, enabled);
		}

		::System::Void SetEditorChildNodes(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* childNodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETEDITORCHILDNODES_OFFSET))(this, childNodes);
		}

		::System::Void SetBezierSegments(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* sourceSegments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETBEZIERSEGMENTS_OFFSET))(this, sourceSegments);
		}

		::System::Void SetBezierSegments_1(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* sourceSegments, ::System::Boolean rebuildImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETBEZIERSEGMENTS_1_OFFSET))(this, sourceSegments, rebuildImmediately);
		}

		::System::Void SetAutoBezierFromWorldAnchors(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* worldAnchors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETAUTOBEZIERFROMWORLDANCHORS_OFFSET))(this, worldAnchors);
		}

		::System::Void SetAutoBezierFromWorldAnchors_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* worldAnchors, ::System::Single tangentScale, ::System::Boolean rebuildImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SETAUTOBEZIERFROMWORLDANCHORS_1_OFFSET))(this, worldAnchors, tangentScale, rebuildImmediately);
		}

		::System::Void RefreshEditorChildNodeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REFRESHEDITORCHILDNODELIST_OFFSET))(this);
		}

		::System::Void SyncAnchorsFromEditorChildNodes(::System::Boolean forceDirty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SYNCANCHORSFROMEDITORCHILDNODES_OFFSET))(this, forceDirty);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_MARKDIRTY_OFFSET))(this);
		}

		::System::Void ForceRebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_FORCEREBUILD_OFFSET))(this);
		}

		::System::Void RebuildIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REBUILDIFDIRTY_OFFSET))(this);
		}

		::System::Void RebuildCullGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REBUILDCULLGROUPS_OFFSET))(this);
		}

		::System::Void GenerateAnchorsFromBezierSegments(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>* sourceSegments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CubicBezierSegment>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GENERATEANCHORSFROMBEZIERSEGMENTS_OFFSET))(this, sourceSegments);
		}

		::System::Void CreateOrRefreshChildNodesFromAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CREATEORREFRESHCHILDNODESFROMANCHORS_OFFSET))(this);
		}

		::UnityEngine::Transform* FindDirectChild(::System::String* childName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_FINDDIRECTCHILD_OFFSET))(this, childName);
		}

		static ::System::String* GetEditorNodeName(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETEDITORNODENAME_OFFSET))(index);
		}

		::System::Void BuildSegments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_BUILDSEGMENTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculateAnchorTangent(::System::Int32 anchorIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATEANCHORTANGENT_OFFSET))(this, anchorIndex);
		}

		::System::Single GetTangentScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETTANGENTSCALE_OFFSET))(this);
		}

		::System::Void ApplyChildNodeRotationFrames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_APPLYCHILDNODEROTATIONFRAMES_OFFSET))(this);
		}

		static ::System::Int32 FindSegmentIndex(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* cumulativeDistances, ::System::Single distance)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_FINDSEGMENTINDEX_OFFSET))(cumulativeDistances, distance);
		}

		static ::System::Single EstimateSegmentLength(::PipeSplineDeformation::CubicBezierSegment segment)
		{
			return ((::System::Single(*)(::PipeSplineDeformation::CubicBezierSegment))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ESTIMATESEGMENTLENGTH_OFFSET))(segment);
		}

		static ::UnityEngine::Vector3 GetSegmentStartTangent(::PipeSplineDeformation::CubicBezierSegment segment)
		{
			return ((::UnityEngine::Vector3(*)(::PipeSplineDeformation::CubicBezierSegment))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETSEGMENTSTARTTANGENT_OFFSET))(segment);
		}

		static ::UnityEngine::Vector3 GetSegmentEndTangent(::PipeSplineDeformation::CubicBezierSegment segment)
		{
			return ((::UnityEngine::Vector3(*)(::PipeSplineDeformation::CubicBezierSegment))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETSEGMENTENDTANGENT_OFFSET))(segment);
		}

		static ::UnityEngine::Quaternion RotationFromAxes(::UnityEngine::Vector3 xAxis, ::UnityEngine::Vector3 preferredUp)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ROTATIONFROMAXES_OFFSET))(xAxis, preferredUp);
		}

		static ::System::Void TrySetEditorOnlyTag(::UnityEngine::GameObject* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_TRYSETEDITORONLYTAG_OFFSET))(targetObject);
		}

		static ::UnityEngine::Vector3 SafeNormalize(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 fallback)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SAFENORMALIZE_OFFSET))(value, fallback);
		}

		static ::UnityEngine::Vector3 CalculateAutoTangent(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points, ::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATEAUTOTANGENT_OFFSET))(points, index);
		}

		::UnityEngine::Vector3 CalculateAutoTangent_1(::System::Int32 anchorIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATEAUTOTANGENT_1_OFFSET))(this, anchorIndex);
		}

		::System::Void DrawForCamera(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_DRAWFORCAMERA_OFFSET))(this, targetCamera);
		}

		::System::Void DrawInstancedRange(::System::Int32 startIndex, ::System::Int32 rangeCount, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_DRAWINSTANCEDRANGE_OFFSET))(this, startIndex, rangeCount, targetCamera);
		}

		::UnityEngine::Vector3 EvaluateCurvePosition(::System::Single distance)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_EVALUATECURVEPOSITION_OFFSET))(this, distance);
		}

		::System::Void EnsureDefaultAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ENSUREDEFAULTANCHORS_OFFSET))(this);
		}

		::System::Void RegisterCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_REGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void UnregisterCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_UNREGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void HandleBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_HANDLEBEGINCAMERARENDERING_OFFSET))(this, context, targetCamera);
		}

		::System::Void SyncEditorChildNodesOnInterval()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_SYNCEDITORCHILDNODESONINTERVAL_OFFSET))(this);
		}

		static ::System::String* GetHierarchyKey(::UnityEngine::Transform* target)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_GETHIERARCHYKEY_OFFSET))(target);
		}

		::System::Single CalculateCullPadding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_CALCULATECULLPADDING_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
