#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Onager/FXMesh/FXMeshSettings_ChannelInfo.h"
#include "unitysdk/Onager/FXMesh/FXMeshSettings_PolarCoords.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Mesh; }

#define ONAGER_FXMESH_FXMESHSETTINGS_ADDQUAD_OFFSET UNITYSDK_OFFSET(0x1E578760)
#define ONAGER_FXMESH_FXMESHSETTINGS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1E579440)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETANGLE_OFFSET UNITYSDK_OFFSET(0x1E578F80)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1E579080)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E579050)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E579000)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETMESH_OFFSET UNITYSDK_OFFSET(0x1E577950)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETNEXTLOOP_OFFSET UNITYSDK_OFFSET(0x1E579410)
#define ONAGER_FXMESH_FXMESHSETTINGS_GETUV_OFFSET UNITYSDK_OFFSET(0x1E579250)
#define ONAGER_FXMESH_FXMESHSETTINGS_INSERTUNIQUEVERTEX_OFFSET UNITYSDK_OFFSET(0x1E5789F0)
#define ONAGER_FXMESH_FXMESHSETTINGS_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E579430)
#define ONAGER_FXMESH_FXMESHSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E579700)
#define ONAGER_FXMESH_FXMESHSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E579640)

namespace Onager::FXMesh
{
	inline static constexpr unsigned int FXMeshSettings_TypeDefinitionIndex = 38052;

	class FXMeshSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet_colors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DA0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_vertices()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DA8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_uv3()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DB0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_triangles()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DB8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_uv2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DC0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_uv0()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DC8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_uv1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Onager::FXMesh::FXMeshSettings*, ::UnityEngine::Mesh*>** StaticGet_GeneratedMeshes()
		{
			return (::System::Collections::Generic::Dictionary_2<::Onager::FXMesh::FXMeshSettings*, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::Onager::FXMesh::FXMeshSettings_PolarCoords, ::System::Int32>** StaticGet_vertexLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::Onager::FXMesh::FXMeshSettings_PolarCoords, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FXMeshSettings_TypeDefinitionIndex)->GetStaticField(0x28DE0);
		}
		::System::Single startRadius; // 0x18
		::System::Single endRadius; // 0x1C
		::System::Single maxAngle; // 0x20
		::System::Int32 loops; // 0x24
		::System::Int32 rings; // 0x28
		::UnityEngine::AnimationCurve* ringProfile; // 0x30
		::System::Single height; // 0x38
		::UnityEngine::AnimationCurve* heightProfile; // 0x40
		::System::Boolean computeNormals; // 0x48
		::System::Single twist; // 0x4C
		::UnityEngine::AnimationCurve* twistProfile; // 0x50
		::Onager::FXMesh::FXMeshSettings_ChannelInfo Color; // 0x58
		::Onager::FXMesh::FXMeshSettings_ChannelInfo UV0; // 0xB0
		::Onager::FXMesh::FXMeshSettings_ChannelInfo UV1; // 0x108
		::Onager::FXMesh::FXMeshSettings_ChannelInfo UV2; // 0x160
		::Onager::FXMesh::FXMeshSettings_ChannelInfo UV3; // 0x1B8
		::System::Boolean dirty; // 0x210

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS__CCTOR_OFFSET))();
		}

		::UnityEngine::Mesh* GetMesh(::System::Boolean forceRebuild)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETMESH_OFFSET))(this, forceRebuild);
		}

		::System::Void InsertUniqueVertex(::Onager::FXMesh::FXMeshSettings_PolarCoords coords)
		{
			return ((::System::Void(*)(::PVOID, ::Onager::FXMesh::FXMeshSettings_PolarCoords))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_INSERTUNIQUEVERTEX_OFFSET))(this, coords);
		}

		::System::Single GetLength(::System::Single ring)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETLENGTH_OFFSET))(this, ring);
		}

		::System::Single GetHeight(::System::Single progress)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETHEIGHT_OFFSET))(this, progress);
		}

		::System::Single GetAngle(::Onager::FXMesh::FXMeshSettings_PolarCoords coords)
		{
			return ((::System::Single(*)(::PVOID, ::Onager::FXMesh::FXMeshSettings_PolarCoords))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETANGLE_OFFSET))(this, coords);
		}

		::System::Void GetUV(::Onager::FXMesh::FXMeshSettings_ChannelInfo info, ::Onager::FXMesh::FXMeshSettings_PolarCoords coords, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* target)
		{
			return ((::System::Void(*)(::PVOID, ::Onager::FXMesh::FXMeshSettings_ChannelInfo, ::Onager::FXMesh::FXMeshSettings_PolarCoords, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETUV_OFFSET))(this, info, coords, target);
		}

		::System::Void GetColor(::Onager::FXMesh::FXMeshSettings_ChannelInfo info, ::Onager::FXMesh::FXMeshSettings_PolarCoords coords, ::System::Collections::Generic::List_1<::UnityEngine::Color>* target)
		{
			return ((::System::Void(*)(::PVOID, ::Onager::FXMesh::FXMeshSettings_ChannelInfo, ::Onager::FXMesh::FXMeshSettings_PolarCoords, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETCOLOR_OFFSET))(this, info, coords, target);
		}

		::System::Int32 GetNextLoop(::System::Int32 currentLoop)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_GETNEXTLOOP_OFFSET))(this, currentLoop);
		}

		::System::Void AddQuad(::System::Int32 ring, ::System::Int32 loop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_ADDQUAD_OFFSET))(this, ring, loop);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_ONVALIDATE_OFFSET))(this);
		}

		::System::Void CopyFrom(::Onager::FXMesh::FXMeshSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Onager::FXMesh::FXMeshSettings*))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_COPYFROM_OFFSET))(this, settings);
		}
	};
}
