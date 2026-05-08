#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_DORENDERATLAS_OFFSET UNITYSDK_OFFSET(0x1BFC0E20)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BFC0C20)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_SETUPCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BFC0C40)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC1920)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AtlasPackerRenderTextureUsingMesh_TypeDefinitionIndex = 85154;

	class MB3_AtlasPackerRenderTextureUsingMesh : public ::System::Object
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14
		::System::Int32 padding; // 0x18
		::System::Int32 camMaskLayer; // 0x1C
		::System::Boolean _camSetup; // 0x20
		::System::Boolean _initialized; // 0x21
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 camMaskLayer, ::System::Int32 width, ::System::Int32 height, ::System::Int32 padding, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_INITIALIZE_OFFSET))(this, camMaskLayer, width, height, padding, LOG_LEVEL);
		}

		::System::Void SetupCameraGameObject(::UnityEngine::GameObject* camGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_SETUPCAMERAGAMEOBJECT_OFFSET))(this, camGameObject);
		}

		::UnityEngine::Texture2D* DoRenderAtlas(::UnityEngine::GameObject* go, ::System::Int32 width, ::System::Int32 height, ::System::Boolean isNormalMap, ::DigitalOpus::MB::Core::ShaderTextureProperty* propertyName)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_DORENDERATLAS_OFFSET))(this, go, width, height, isNormalMap, propertyName);
		}
	};
}
