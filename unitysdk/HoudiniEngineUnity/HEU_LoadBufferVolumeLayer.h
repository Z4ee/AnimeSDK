#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x8469CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 37793;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _normalTexturePath; // 0x10
		::System::String* _layerPath; // 0x18
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x20
		::System::String* _maskTexturePath; // 0x28
		::System::String* _layerName; // 0x30
		::System::String* _diffuseTexturePath; // 0x38
		::UnityEngine::Vector3 _minBounds; // 0x40
		::UnityEngine::Vector3 _maxBounds; // 0x4C
		::System::Int32 _heightMapHeight; // 0x58
		::System::Int32 _partID; // 0x5C
		::System::Single _heightRange; // 0x60
		::System::Int32 _heightMapWidth; // 0x64
		::System::Single _normalScale; // 0x68
		::System::Single _metallic; // 0x6C
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x70
		::System::Boolean _hasLayerAttributes; // 0x74
		::System::Boolean _uiExpanded; // 0x75
		::System::Single _maxHeight; // 0x78
		::System::Single _minHeight; // 0x7C
		::UnityEngine::Color _specularColor; // 0x80
		::UnityEngine::Vector3 _center; // 0x90
		::System::Int32 _tile; // 0x9C
		::System::Single _terrainSizeY; // 0xA0
		::UnityEngine::Vector2 _tileOffset; // 0xA4
		::UnityEngine::Vector3 _position; // 0xAC
		::System::Single _strength; // 0xB8
		::System::Single _smoothness; // 0xBC
		::System::Single _terrainSizeX; // 0xC0
		::UnityEngine::Vector2 _tileSize; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
