#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/IndexFormat.h"

namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_CALCULATEINDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x11A6C9D0)
#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_SETFORMATFORMESH_OFFSET UNITYSDK_OFFSET(0x11A6CA30)
#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6CA60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MeshIndexFormat_TypeDefinitionIndex = 39360;

	class HEU_MeshIndexFormat : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::IndexFormat _indexFormat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT__CTOR_OFFSET))(this);
		}

		::System::Void CalculateIndexFormat(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_CALCULATEINDEXFORMAT_OFFSET))(this, a1);
		}

		::System::Void SetFormatForMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_SETFORMATFORMESH_OFFSET))(this, a1);
		}
	};
}
