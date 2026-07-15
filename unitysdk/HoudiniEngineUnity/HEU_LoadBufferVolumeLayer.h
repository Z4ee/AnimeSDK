#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x10884A70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 38454;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _layerPath; // 0x10
		::System::String* _maskTexturePath; // 0x18
		::System::String* _diffuseTexturePath; // 0x20
		::System::String* _layerName; // 0x28
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x30
		::System::String* _normalTexturePath; // 0x38
		::System::Int32 _partID; // 0x40
		::System::Single _terrainSizeX; // 0x44
		::System::Boolean _uiExpanded; // 0x48
		::System::Boolean _hasLayerAttributes; // 0x49
		::System::Single _metallic; // 0x4C
		::UnityEngine::Vector3 _position; // 0x50
		::UnityEngine::Vector3 _center; // 0x5C
		::System::Int32 _heightMapWidth; // 0x68
		::UnityEngine::Vector2 _tileOffset; // 0x6C
		::System::Single _normalScale; // 0x74
		::System::Single _strength; // 0x78
		::UnityEngine::Vector3 _maxBounds; // 0x7C
		::UnityEngine::Color _specularColor; // 0x88
		::System::Single _minHeight; // 0x98
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x9C
		::System::Single _smoothness; // 0xA0
		::System::Int32 _tile; // 0xA4
		::System::Int32 _heightMapHeight; // 0xA8
		::System::Single _maxHeight; // 0xAC
		::UnityEngine::Vector2 _tileSize; // 0xB0
		::System::Single _terrainSizeY; // 0xB8
		::UnityEngine::Vector3 _minBounds; // 0xBC
		::System::Single _heightRange; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
