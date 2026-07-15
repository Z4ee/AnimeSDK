#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_REGIONVOLUME_ADDEDGEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x198693F0)
#define RPG_CLIENT_REGIONVOLUME_DELETEEDGE_OFFSET UNITYSDK_OFFSET(0x198694A0)
#define RPG_CLIENT_REGIONVOLUME_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x19867B80)
#define RPG_CLIENT_REGIONVOLUME_GETINSIDE_OFFSET UNITYSDK_OFFSET(0x19868280)
#define RPG_CLIENT_REGIONVOLUME_GETLOCALPOSITIONINSIDE_OFFSET UNITYSDK_OFFSET(0x198683A0)
#define RPG_CLIENT_REGIONVOLUME_GETLOCALSPACEBOTTOMFACE_1_OFFSET UNITYSDK_OFFSET(0x19868F90)
#define RPG_CLIENT_REGIONVOLUME_GETLOCALSPACEBOTTOMFACE_OFFSET UNITYSDK_OFFSET(0x19868EF0)
#define RPG_CLIENT_REGIONVOLUME_GETNAME_OFFSET UNITYSDK_OFFSET(0x19869530)
#define RPG_CLIENT_REGIONVOLUME_GETNORMAL_OFFSET UNITYSDK_OFFSET(0x198689C0)
#define RPG_CLIENT_REGIONVOLUME_GETPIVOT_OFFSET UNITYSDK_OFFSET(0x19868840)
#define RPG_CLIENT_REGIONVOLUME_GETROTATION_OFFSET UNITYSDK_OFFSET(0x19868900)
#define RPG_CLIENT_REGIONVOLUME_GETWORLDSPACEBOTTOMFACE_1_OFFSET UNITYSDK_OFFSET(0x19868D60)
#define RPG_CLIENT_REGIONVOLUME_GETWORLDSPACEBOTTOMFACE_OFFSET UNITYSDK_OFFSET(0x19868CC0)
#define RPG_CLIENT_REGIONVOLUME_GETWORLDSPACETOPFACE_1_OFFSET UNITYSDK_OFFSET(0x19869150)
#define RPG_CLIENT_REGIONVOLUME_GETWORLDSPACETOPFACE_OFFSET UNITYSDK_OFFSET(0x198690B0)
#define RPG_CLIENT_REGIONVOLUME_GETWORLDSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0x19867BD0)
#define RPG_CLIENT_REGIONVOLUME_GET_HIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x198697C0)
#define RPG_CLIENT_REGIONVOLUME_LOAD_OFFSET UNITYSDK_OFFSET(0x19867320)
#define RPG_CLIENT_REGIONVOLUME_LOCALTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x19868B60)
#define RPG_CLIENT_REGIONVOLUME_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x198680F0)
#define RPG_CLIENT_REGIONVOLUME_METHOD_5_27358BB662782B3E_OFFSET UNITYSDK_OFFSET(0x198695A0)
#define RPG_CLIENT_REGIONVOLUME_METHOD_5_43D01116D59C5E43_OFFSET UNITYSDK_OFFSET(0x19869620)
#define RPG_CLIENT_REGIONVOLUME_METHOD_5_BBFF6C534C16DF1C_OFFSET UNITYSDK_OFFSET(0x198696A0)
#define RPG_CLIENT_REGIONVOLUME_ONCHANGEMESH_OFFSET UNITYSDK_OFFSET(0x19867870)
#define RPG_CLIENT_REGIONVOLUME_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19866D40)
#define RPG_CLIENT_REGIONVOLUME_RANDOMHSV_OFFSET UNITYSDK_OFFSET(0x198671C0)
#define RPG_CLIENT_REGIONVOLUME_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x19867E30)
#define RPG_CLIENT_REGIONVOLUME_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0x19867B20)
#define RPG_CLIENT_REGIONVOLUME_SETLOCALSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0x19867750)
#define RPG_CLIENT_REGIONVOLUME_SETWORLDSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0x19867EE0)
#define RPG_CLIENT_REGIONVOLUME_SET_HIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x198697D0)
#define RPG_CLIENT_REGIONVOLUME_UPDATEEDGEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x19869320)
#define RPG_CLIENT_REGIONVOLUME_UPDATEVERTSWITHEXTEND_OFFSET UNITYSDK_OFFSET(0x19867590)
#define RPG_CLIENT_REGIONVOLUME_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x19868030)
#define RPG_CLIENT_REGIONVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x198697E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RegionVolume_TypeDefinitionIndex = 59435;

	class RegionVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsOBBVolume; // 0x18
		::System::Int32 Priority; // 0x1C
		::System::Int32 ArtBudget; // 0x20
		::System::Single Height; // 0x24
		::UnityEngine::Vector2 Extend; // 0x28
		::UnityEngine::Color GizmoColor; // 0x30
		::System::Boolean _Highlight_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Vertices; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::RegionVolume*>* LinkedVolumes; // 0x50
		::UnityEngine::Mesh* VolumeMesh; // 0x58
		::UnityEngine::Bounds WorldBounds; // 0x60
		::UnityEngine::Matrix4x4 Field_5_11; // 0x78
		::System::Boolean Field_5_12; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void RandomHSV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_RANDOMHSV_OFFSET))(this);
		}

		::System::Void Load(::RPG::GameCore::StageVolumeConfigV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_LOAD_OFFSET))(this, a1);
		}

		::System::Void SetHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_SETHEIGHT_OFFSET))(this, a1);
		}

		::System::Single GetHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETHEIGHT_OFFSET))(this);
		}

		::System::Void OnChangeMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_ONCHANGEMESH_OFFSET))(this);
		}

		::System::Void SetBounds(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_SETBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetWorldSpaceVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_SETWORLDSPACEVERTICES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceVertices()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETWORLDSPACEVERTICES_OFFSET))(this);
		}

		::System::Boolean GetInside(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETINSIDE_OFFSET))(this, a1);
		}

		::System::Void SetLocalSpaceVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_SETLOCALSPACEVERTICES_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETPIVOT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETNORMAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_LOCALTOWORLD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LocalToWorld_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_LOCALTOWORLD_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 WorldToLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_WORLDTOLOCAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceBottomFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETWORLDSPACEBOTTOMFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetLocalSpaceBottomFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETLOCALSPACEBOTTOMFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceTopFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETWORLDSPACETOPFACE_OFFSET))(this);
		}

		::System::Void GetWorldSpaceBottomFace_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETWORLDSPACEBOTTOMFACE_1_OFFSET))(this, a1);
		}

		::System::Void GetLocalSpaceBottomFace_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETLOCALSPACEBOTTOMFACE_1_OFFSET))(this, a1);
		}

		::System::Void GetWorldSpaceTopFace_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETWORLDSPACETOPFACE_1_OFFSET))(this, a1);
		}

		::System::Void UpdateEdgeWorldPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_UPDATEEDGEWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void AddEdgeWorldPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_ADDEDGEWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteEdge(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_DELETEEDGE_OFFSET))(this, a1);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETNAME_OFFSET))(this);
		}

		::System::Void UpdateVertsWithExtend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_UPDATEVERTSWITHEXTEND_OFFSET))(this);
		}

		static ::System::Boolean GetLocalPositionInside(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GETLOCALPOSITIONINSIDE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Method_5_27358BB662782B3E(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_METHOD_5_27358BB662782B3E_OFFSET))(a1, a2);
		}

		static ::System::Int32 Method_5_BBFF6C534C16DF1C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_METHOD_5_BBFF6C534C16DF1C_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Method_5_43D01116D59C5E43(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_METHOD_5_43D01116D59C5E43_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean get_Highlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_GET_HIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_Highlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME_SET_HIGHLIGHT_OFFSET))(this, a1);
		}
	};
}
