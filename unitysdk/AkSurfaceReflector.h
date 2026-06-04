#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkRoom;
namespace AK::Wwise { class AcousticTexture; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define AKSURFACEREFLECTOR_ADDGEOMETRYSET_OFFSET UNITYSDK_OFFSET(0x1B4ADBB0)
#define AKSURFACEREFLECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4ADA30)
#define AKSURFACEREFLECTOR_GETAKGEOMETRYSETID_OFFSET UNITYSDK_OFFSET(0x1B4AD9B0)
#define AKSURFACEREFLECTOR_GETID_OFFSET UNITYSDK_OFFSET(0x1B4A9C40)
#define AKSURFACEREFLECTOR_GET_ACOUSTICTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4AE0B0)
#define AKSURFACEREFLECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B4ADB60)
#define AKSURFACEREFLECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B4ADAF0)
#define AKSURFACEREFLECTOR_REMOVEGEOMETRYSET_OFFSET UNITYSDK_OFFSET(0x1B4AD830)
#define AKSURFACEREFLECTOR_REMOVEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B4AD6A0)
#define AKSURFACEREFLECTOR_SETASSOCIATEDROOM_OFFSET UNITYSDK_OFFSET(0x1B4AD1D0)
#define AKSURFACEREFLECTOR_SETGEOMETRYFROMMESH_OFFSET UNITYSDK_OFFSET(0x1B4A9DF0)
#define AKSURFACEREFLECTOR_SETGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B4AD320)
#define AKSURFACEREFLECTOR_SET_ACOUSTICTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4AE110)
#define AKSURFACEREFLECTOR_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B4AD2D0)
#define AKSURFACEREFLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AE320)

inline static constexpr unsigned int AkSurfaceReflector_TypeDefinitionIndex = 41338;

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

	static ::System::Void SetGeometryFromMesh(::UnityEngine::Mesh* a1, ::Il2CppArray<::AK::Wwise::AcousticTexture*>* a2, ::Il2CppArray<::System::Single>* a3, ::UnityEngine::Transform* a4, ::System::UInt64 a5, ::System::UInt64 a6, ::System::Boolean a7, ::System::Boolean a8, ::System::String* a9)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::Il2CppArray<::AK::Wwise::AcousticTexture*>*, ::Il2CppArray<::System::Single>*, ::UnityEngine::Transform*, ::System::UInt64, ::System::UInt64, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SETGEOMETRYFROMMESH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void SetAssociatedRoom(::AkRoom* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SETASSOCIATEDROOM_OFFSET))(this, a1);
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

	static ::System::Void RemoveGeometrySet(::UnityEngine::MeshFilter* a1)
	{
		return ((::System::Void(*)(::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_REMOVEGEOMETRYSET_OFFSET))(a1);
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

	static ::System::UInt64 GetAkGeometrySetID(::UnityEngine::MeshFilter* a1)
	{
		return ((::System::UInt64(*)(::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_GETAKGEOMETRYSETID_OFFSET))(a1);
	}

	static ::System::Void AddGeometrySet(::AK::Wwise::AcousticTexture* a1, ::UnityEngine::MeshFilter* a2, ::System::UInt64 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::AK::Wwise::AcousticTexture*, ::UnityEngine::MeshFilter*, ::System::UInt64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_ADDGEOMETRYSET_OFFSET))(a1, a2, a3, a4, a5);
	}

	::AK::Wwise::AcousticTexture* get_AcousticTexture()
	{
		return ((::AK::Wwise::AcousticTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_GET_ACOUSTICTEXTURE_OFFSET))(this);
	}

	::System::Void set_AcousticTexture(::AK::Wwise::AcousticTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::AcousticTexture*))((::PBYTE)hIl2Cpp + AKSURFACEREFLECTOR_SET_ACOUSTICTEXTURE_OFFSET))(this, a1);
	}
};
