#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A66F90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 39313;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x10
		::System::String* _diffuseTexturePath; // 0x18
		::System::String* _normalTexturePath; // 0x20
		::System::String* _layerName; // 0x28
		::System::String* _layerPath; // 0x30
		::System::String* _maskTexturePath; // 0x38
		::UnityEngine::Vector2 _tileOffset; // 0x40
		::System::Boolean _uiExpanded; // 0x48
		::System::Boolean _hasLayerAttributes; // 0x49
		::System::Single _terrainSizeX; // 0x4C
		::System::Int32 _partID; // 0x50
		::System::Int32 _tile; // 0x54
		::UnityEngine::Vector2 _tileSize; // 0x58
		::System::Single _smoothness; // 0x60
		::UnityEngine::Vector3 _center; // 0x64
		::System::Single _heightRange; // 0x70
		::System::Single _terrainSizeY; // 0x74
		::UnityEngine::Vector3 _maxBounds; // 0x78
		::System::Single _minHeight; // 0x84
		::UnityEngine::Color _specularColor; // 0x88
		::System::Single _maxHeight; // 0x98
		::System::Int32 _heightMapWidth; // 0x9C
		::UnityEngine::Vector3 _position; // 0xA0
		::UnityEngine::Vector3 _minBounds; // 0xAC
		::System::Single _normalScale; // 0xB8
		::System::Int32 _heightMapHeight; // 0xBC
		::System::Single _metallic; // 0xC0
		::HoudiniEngineUnity::HFLayerType _layerType; // 0xC4
		::System::Single _strength; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
