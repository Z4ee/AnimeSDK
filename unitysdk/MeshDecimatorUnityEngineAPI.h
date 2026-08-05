#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MeshDecimator { class Mesh; }
namespace UnityEngine { class Mesh; }

#define MESHDECIMATORUNITYENGINEAPI_DECMESH2MESH_OFFSET UNITYSDK_OFFSET(0x12422E00)
#define MESHDECIMATORUNITYENGINEAPI_MESH2DECMESH_OFFSET UNITYSDK_OFFSET(0x12422470)
#define MESHDECIMATORUNITYENGINEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x12423BC0)

inline static constexpr unsigned int MeshDecimatorUnityEngineAPI_TypeDefinitionIndex = 95369;

class MeshDecimatorUnityEngineAPI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI__CTOR_OFFSET))(this);
	}

	static ::MeshDecimator::Mesh* Mesh2DecMesh(::UnityEngine::Mesh* mesh)
	{
		return ((::MeshDecimator::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI_MESH2DECMESH_OFFSET))(mesh);
	}

	static ::UnityEngine::Mesh* DecMesh2Mesh(::MeshDecimator::Mesh* mesh, ::System::Boolean hasBones)
	{
		return ((::UnityEngine::Mesh*(*)(::MeshDecimator::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI_DECMESH2MESH_OFFSET))(mesh, hasBones);
	}
};
