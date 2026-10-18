#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B924D30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 40610;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _diffuseTexturePath; // 0x10
		::System::String* _layerName; // 0x18
		::System::String* _maskTexturePath; // 0x20
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x28
		::System::String* _layerPath; // 0x30
		::System::String* _normalTexturePath; // 0x38
		::System::Int32 _tile; // 0x40
		::System::Single _maxHeight; // 0x44
		::System::Single _terrainSizeY; // 0x48
		::System::Boolean _uiExpanded; // 0x4C
		::System::Boolean _hasLayerAttributes; // 0x4D
		::System::Single _terrainSizeX; // 0x50
		::System::Single _heightRange; // 0x54
		::UnityEngine::Vector3 _minBounds; // 0x58
		::System::Single _normalScale; // 0x64
		::System::Single _metallic; // 0x68
		::UnityEngine::Color _specularColor; // 0x6C
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x7C
		::UnityEngine::Vector3 _center; // 0x80
		::System::Int32 _partID; // 0x8C
		::UnityEngine::Vector2 _tileOffset; // 0x90
		::System::Single _strength; // 0x98
		::UnityEngine::Vector2 _tileSize; // 0x9C
		::UnityEngine::Vector3 _maxBounds; // 0xA4
		::System::Single _smoothness; // 0xB0
		::System::Int32 _heightMapHeight; // 0xB4
		::System::Single _minHeight; // 0xB8
		::UnityEngine::Vector3 _position; // 0xBC
		::System::Int32 _heightMapWidth; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
