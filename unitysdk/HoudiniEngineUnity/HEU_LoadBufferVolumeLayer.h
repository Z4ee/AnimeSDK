#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B443CD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 39313;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _layerPath; // 0x10
		::System::String* _normalTexturePath; // 0x18
		::System::String* _diffuseTexturePath; // 0x20
		::System::String* _maskTexturePath; // 0x28
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x30
		::System::String* _layerName; // 0x38
		::System::Single _normalScale; // 0x40
		::System::Single _metallic; // 0x44
		::UnityEngine::Vector2 _tileOffset; // 0x48
		::UnityEngine::Vector3 _maxBounds; // 0x50
		::System::Int32 _heightMapHeight; // 0x5C
		::System::Single _smoothness; // 0x60
		::System::Single _heightRange; // 0x64
		::System::Int32 _tile; // 0x68
		::System::Single _terrainSizeX; // 0x6C
		::System::Single _minHeight; // 0x70
		::System::Single _strength; // 0x74
		::UnityEngine::Vector3 _minBounds; // 0x78
		::System::Int32 _heightMapWidth; // 0x84
		::System::Single _terrainSizeY; // 0x88
		::UnityEngine::Color _specularColor; // 0x8C
		::UnityEngine::Vector3 _center; // 0x9C
		::System::Boolean _uiExpanded; // 0xA8
		::System::Boolean _hasLayerAttributes; // 0xA9
		::UnityEngine::Vector3 _position; // 0xAC
		::UnityEngine::Vector2 _tileSize; // 0xB8
		::HoudiniEngineUnity::HFLayerType _layerType; // 0xC0
		::System::Int32 _partID; // 0xC4
		::System::Single _maxHeight; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
