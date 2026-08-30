#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4F54BF4C6B55D9A9;
namespace RPG::Client { class Stage; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define GEOMETRYEDIT_PRISM_ADDEDGEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x17A3EFA0)
#define GEOMETRYEDIT_PRISM_DELETEEDGE_OFFSET UNITYSDK_OFFSET(0x17A3F050)
#define GEOMETRYEDIT_PRISM_GETLOCALSPACEBOTTOMFACE_OFFSET UNITYSDK_OFFSET(0x17A3EA30)
#define GEOMETRYEDIT_PRISM_GETWORLDSPACEBOTTOMFACE_OFFSET UNITYSDK_OFFSET(0x17A3E7F0)
#define GEOMETRYEDIT_PRISM_GETWORLDSPACETOPFACE_OFFSET UNITYSDK_OFFSET(0x17A3EB40)
#define GEOMETRYEDIT_PRISM_GET_HASRESET_OFFSET UNITYSDK_OFFSET(0x17A3F410)
#define GEOMETRYEDIT_PRISM_GET_ISFORMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x17A3D010)
#define GEOMETRYEDIT_PRISM_GET_MESHDIRTY_OFFSET UNITYSDK_OFFSET(0x17A3E7D0)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_1_OFFSET UNITYSDK_OFFSET(0x17A3DBE0)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_OFFSET UNITYSDK_OFFSET(0x17A3D670)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_1_OFFSET UNITYSDK_OFFSET(0x17A3DA40)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_OFFSET UNITYSDK_OFFSET(0x17A3D6F0)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDE_OFFSET UNITYSDK_OFFSET(0x17A3D5C0)
#define GEOMETRYEDIT_PRISM_LOCALTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x17A3ED10)
#define GEOMETRYEDIT_PRISM_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x17A3E9B0)
#define GEOMETRYEDIT_PRISM_METHOD_5_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x17A3D040)
#define GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x17A3D5B0)
#define GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x17A3EF90)
#define GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17A3D5A0)
#define GEOMETRYEDIT_PRISM_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17A3D4A0)
#define GEOMETRYEDIT_PRISM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17A3D590)
#define GEOMETRYEDIT_PRISM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17A3D580)
#define GEOMETRYEDIT_PRISM_REFRESHTRIGGER_OFFSET UNITYSDK_OFFSET(0x17A3D560)
#define GEOMETRYEDIT_PRISM_RESETPIVOT_OFFSET UNITYSDK_OFFSET(0x17A3F170)
#define GEOMETRYEDIT_PRISM_SETWORLDSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0x17A3EE00)
#define GEOMETRYEDIT_PRISM_SET_HASRESET_OFFSET UNITYSDK_OFFSET(0x17A3F420)
#define GEOMETRYEDIT_PRISM_SET_ISFORMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x17A3D020)
#define GEOMETRYEDIT_PRISM_SET_MESHDIRTY_OFFSET UNITYSDK_OFFSET(0x17A3E7E0)
#define GEOMETRYEDIT_PRISM_TOMESH_OFFSET UNITYSDK_OFFSET(0x17A3DD30)
#define GEOMETRYEDIT_PRISM_UPDATEEDGEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x17A3F0B0)
#define GEOMETRYEDIT_PRISM_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x17A3ED80)
#define GEOMETRYEDIT_PRISM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3F430)

namespace GeometryEdit
{
	inline static constexpr unsigned int Prism_TypeDefinitionIndex = 49612;

	class Prism : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Vertices; // 0x18
		::System::Single Height; // 0x20
		::System::Boolean _IsForMainCamera; // 0x24
		::System::Boolean MPCBOENKPBM; // 0x25
		::Class_1_4F54BF4C6B55D9A9* GALAHGAJODG; // 0x28
		::RPG::Client::Stage* PMCOAFPCDFM; // 0x30
		::System::Boolean _MeshDirty_k__BackingField; // 0x38
		::System::Boolean _HasReset_k__BackingField; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsForMainCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GET_ISFORMAINCAMERA_OFFSET))(this);
		}

		::System::Void set_IsForMainCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SET_ISFORMAINCAMERA_OFFSET))(this, a1);
		}

		::System::Void RefreshTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_REFRESHTRIGGER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_7778ABE51AFDB516()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_7778ABE51AFDB516_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Boolean IsPointInside(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDE_OFFSET))(this, a1);
		}

		::System::Boolean IsPointInsideConvex(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_OFFSET))(this, a1);
		}

		static ::System::Boolean IsPointInsideConvex_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean IsPointInsideConcave(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_OFFSET))(this, a1);
		}

		static ::System::Boolean IsPointInsideConcave_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_1_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Mesh* ToMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_TOMESH_OFFSET))(this);
		}

		::System::Boolean get_MeshDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GET_MESHDIRTY_OFFSET))(this);
		}

		::System::Void set_MeshDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SET_MESHDIRTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceBottomFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GETWORLDSPACEBOTTOMFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetLocalSpaceBottomFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GETLOCALSPACEBOTTOMFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceTopFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GETWORLDSPACETOPFACE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_LOCALTOWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LocalToWorld_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_LOCALTOWORLD_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 WorldToLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_WORLDTOLOCAL_OFFSET))(this, a1);
		}

		::System::Void SetWorldSpaceVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SETWORLDSPACEVERTICES_OFFSET))(this, a1);
		}

		::System::Void AddEdgeWorldPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ADDEDGEWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteEdge(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_DELETEEDGE_OFFSET))(this, a1);
		}

		::System::Void UpdateEdgeWorldPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_UPDATEEDGEWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_RESETPIVOT_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_2_OFFSET))(this);
		}

		::System::Boolean get_HasReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GET_HASRESET_OFFSET))(this);
		}

		::System::Void set_HasReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SET_HASRESET_OFFSET))(this, a1);
		}
	};
}
