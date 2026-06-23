#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }

#define NAPCURVYSPLINEPREVIEW_ADDENDCAPS_OFFSET UNITYSDK_OFFSET(0xD44B300)
#define NAPCURVYSPLINEPREVIEW_ADD_OFFSET UNITYSDK_OFFSET(0xD44A9F0)
#define NAPCURVYSPLINEPREVIEW_CLEANUPMESH_OFFSET UNITYSDK_OFFSET(0xD4480B0)
#define NAPCURVYSPLINEPREVIEW_FINDCURVYSPLINE_OFFSET UNITYSDK_OFFSET(0xD4490F0)
#define NAPCURVYSPLINEPREVIEW_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0xD449900)
#define NAPCURVYSPLINEPREVIEW_GETRIGHTVECTOR_OFFSET UNITYSDK_OFFSET(0xD44B110)
#define NAPCURVYSPLINEPREVIEW_GET_MUTEMESH_OFFSET UNITYSDK_OFFSET(0xD448050)
#define NAPCURVYSPLINEPREVIEW_LAZYINITMESH_OFFSET UNITYSDK_OFFSET(0xD4488E0)
#define NAPCURVYSPLINEPREVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD448DC0)
#define NAPCURVYSPLINEPREVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD447FC0)
#define NAPCURVYSPLINEPREVIEW_ONINPUTSPLINECOORDINATESCHANGED_OFFSET UNITYSDK_OFFSET(0xD44A870)
#define NAPCURVYSPLINEPREVIEW_ONSPLINEINITIALIZED_OFFSET UNITYSDK_OFFSET(0xD44A720)
#define NAPCURVYSPLINEPREVIEW_ONSPLINEREFRESHED_OFFSET UNITYSDK_OFFSET(0xD44A5D0)
#define NAPCURVYSPLINEPREVIEW_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD44A340)
#define NAPCURVYSPLINEPREVIEW_SHOWMESH_OFFSET UNITYSDK_OFFSET(0xD44A9A0)
#define NAPCURVYSPLINEPREVIEW_START_OFFSET UNITYSDK_OFFSET(0xD449050)
#define NAPCURVYSPLINEPREVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xD44A520)
#define NAPCURVYSPLINEPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD44B870)

inline static constexpr unsigned int NapCurvySplinePreview_TypeDefinitionIndex = 71319;

class NapCurvySplinePreview : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_ForceEnableWhiteBoxMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapCurvySplinePreview_TypeDefinitionIndex)->GetStaticField(0x10CF0);
	}
	::FluffyUnderware::Curvy::CurvySpline* curvySpline; // 0x18
	::System::Single pipeRadius; // 0x20
	::UnityEngine::Vector3 pipeOffset; // 0x24
	::System::Int32 curveSegments; // 0x30
	::System::Int32 radialSegments; // 0x34
	::System::Single pipe2Radius; // 0x38
	::UnityEngine::Vector3 pipe2Offset; // 0x3C
	::System::Single pipe3Radius; // 0x48
	::UnityEngine::Vector3 pipe3Offset; // 0x4C
	::System::Boolean autoUpdate; // 0x58
	::UnityEngine::Mesh* mesh; // 0x60
	::UnityEngine::MeshFilter* meshFilter; // 0x68
	::FluffyUnderware::Curvy::CurvySpline* cachedSpline; // 0x70
	::System::Boolean _dirty; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* triangles; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ONDISABLE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_START_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_UPDATE_OFFSET))(this);
	}

	::System::Void LazyInitMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_LAZYINITMESH_OFFSET))(this);
	}

	::System::Void FindCurvySpline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_FINDCURVYSPLINE_OFFSET))(this);
	}

	::System::Void OnSplineRefreshed(::FluffyUnderware::Curvy::CurvySplineEventArgs* e)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ONSPLINEREFRESHED_OFFSET))(this, e);
	}

	::System::Void OnSplineInitialized(::FluffyUnderware::Curvy::CurvySplineEventArgs* e)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ONSPLINEINITIALIZED_OFFSET))(this, e);
	}

	::System::Void OnInputSplineCoordinatesChanged(::FluffyUnderware::Curvy::CurvySpline* sender)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ONINPUTSPLINECOORDINATESCHANGED_OFFSET))(this, sender);
	}

	::System::Void CleanupMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_CLEANUPMESH_OFFSET))(this);
	}

	::System::Void ShowMesh(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_SHOWMESH_OFFSET))(this, value);
	}

	::System::Void GenerateMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_GENERATEMESH_OFFSET))(this);
	}

	::System::Void Add(::System::Single _pipeRadius, ::UnityEngine::Vector3 positionOffset, ::System::Int32 vertexOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ADD_OFFSET))(this, _pipeRadius, positionOffset, vertexOffset);
	}

	::UnityEngine::Vector3 GetRightVector(::UnityEngine::Vector3 forward)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_GETRIGHTVECTOR_OFFSET))(this, forward);
	}

	::System::Void AddEndCaps(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::List_1<::System::Int32>* triangles, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, ::System::Int32 segmentCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_ADDENDCAPS_OFFSET))(this, vertices, triangles, normals, uvs, segmentCount);
	}

	::System::Boolean get_MuteMesh()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPCURVYSPLINEPREVIEW_GET_MUTEMESH_OFFSET))(this);
	}
};
