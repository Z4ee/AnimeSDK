#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkRoom;
namespace AK::Wwise { class AcousticTexture; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define AKSURFACEREFLECTOR_ADDGEOMETRYSET_OFFSET UNITYSDK_OFFSET(0x1E3AEDB0)
#define AKSURFACEREFLECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E3AE920)
#define AKSURFACEREFLECTOR_GETAKGEOMETRYSETID_OFFSET UNITYSDK_OFFSET(0x1E3AE900)
#define AKSURFACEREFLECTOR_GETID_OFFSET UNITYSDK_OFFSET(0x1E3ABE10)
#define AKSURFACEREFLECTOR_GET_ACOUSTICTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E3AF170)
#define AKSURFACEREFLECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E3AECD0)
#define AKSURFACEREFLECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E3AEBB0)
#define AKSURFACEREFLECTOR_REMOVEGEOMETRYSET_OFFSET UNITYSDK_OFFSET(0x1E3AE720)
#define AKSURFACEREFLECTOR_REMOVEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E3AE640)
#define AKSURFACEREFLECTOR_SETASSOCIATEDROOM_OFFSET UNITYSDK_OFFSET(0x1E3ADDE0)
#define AKSURFACEREFLECTOR_SETGEOMETRYFROMMESH_OFFSET UNITYSDK_OFFSET(0x1E3ABE20)
#define AKSURFACEREFLECTOR_SETGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E3AE120)
#define AKSURFACEREFLECTOR_SET_ACOUSTICTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E3AF190)
#define AKSURFACEREFLECTOR_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E3AE040)
#define AKSURFACEREFLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AF470)

inline static constexpr unsigned int AkSurfaceReflector_TypeDefinitionIndex = 33178;

class AkSurfaceReflector : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Mesh* Mesh; // 0x18
	::Il2CppArray<::AK::Wwise::AcousticTexture*>* AcousticTextures; // 0x20
	::Il2CppArray<::System::Single>* OcclusionValues; // 0x28
	::System::Boolean EnableDiffraction; // 0x30
	::System::Boolean EnableDiffractionOnBoundaryEdges; // 0x31
	::AkRoom* AssociatedRoom; // 0x38
	::AK::Wwise::AcousticTexture* AcousticTextureInternal; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR__CTOR_OFFSET))(this);
	}

	::System::UInt64 GetID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_GETID_OFFSET))(this);
	}

	static ::System::Void SetGeometryFromMesh(::UnityEngine::Mesh* mesh, ::Il2CppArray<::AK::Wwise::AcousticTexture*>* acousticTextures, ::Il2CppArray<::System::Single>* occlusionValues, ::UnityEngine::Transform* transform, ::System::UInt64 geometryID, ::System::UInt64 associatedRoomID, ::System::Boolean enableDiffraction, ::System::Boolean enableDiffractionOnBoundaryEdges, ::System::String* name)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::Il2CppArray<::AK::Wwise::AcousticTexture*>*, ::Il2CppArray<::System::Single>*, ::UnityEngine::Transform*, ::System::UInt64, ::System::UInt64, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SETGEOMETRYFROMMESH_OFFSET))(mesh, acousticTextures, occlusionValues, transform, geometryID, associatedRoomID, enableDiffraction, enableDiffractionOnBoundaryEdges, name);
	}

	::System::Void SetAssociatedRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SETASSOCIATEDROOM_OFFSET))(this, room);
	}

	::System::Void SetGeometry()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SETGEOMETRY_OFFSET))(this);
	}

	::System::Void UpdateGeometry()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_UPDATEGEOMETRY_OFFSET))(this);
	}

	::System::Void RemoveGeometry()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_REMOVEGEOMETRY_OFFSET))(this);
	}

	static ::System::Void RemoveGeometrySet(::UnityEngine::MeshFilter* meshFilter)
	{
		return ((::System::Void(*)(::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_REMOVEGEOMETRYSET_OFFSET))(meshFilter);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_ONDISABLE_OFFSET))(this);
	}

	static ::System::UInt64 GetAkGeometrySetID(::UnityEngine::MeshFilter* meshFilter)
	{
		return ((::System::UInt64(*)(::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_GETAKGEOMETRYSETID_OFFSET))(meshFilter);
	}

	static ::System::Void AddGeometrySet(::AK::Wwise::AcousticTexture* acousticTexture, ::UnityEngine::MeshFilter* meshFilter, ::System::UInt64 roomID, ::System::Boolean enableDiffraction, ::System::Boolean enableDiffractionOnBoundaryEdges)
	{
		return ((::System::Void(*)(::AK::Wwise::AcousticTexture*, ::UnityEngine::MeshFilter*, ::System::UInt64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_ADDGEOMETRYSET_OFFSET))(acousticTexture, meshFilter, roomID, enableDiffraction, enableDiffractionOnBoundaryEdges);
	}

	::AK::Wwise::AcousticTexture* get_AcousticTexture()
	{
		return ((::AK::Wwise::AcousticTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_GET_ACOUSTICTEXTURE_OFFSET))(this);
	}

	::System::Void set_AcousticTexture(::AK::Wwise::AcousticTexture* value)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::AcousticTexture*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SET_ACOUSTICTEXTURE_OFFSET))(this, value);
	}
};
