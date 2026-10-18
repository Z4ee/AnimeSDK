#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B945100)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 40610;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _normalTexturePath; // 0x10
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x18
		::System::String* _maskTexturePath; // 0x20
		::System::String* _layerPath; // 0x28
		::System::String* _diffuseTexturePath; // 0x30
		::System::String* _layerName; // 0x38
		::System::Boolean _hasLayerAttributes; // 0x40
		::System::Boolean _uiExpanded; // 0x41
		::UnityEngine::Vector3 _position; // 0x44
		::System::Int32 _tile; // 0x50
		::UnityEngine::Vector3 _center; // 0x54
		::UnityEngine::Vector3 _maxBounds; // 0x60
		::UnityEngine::Vector2 _tileSize; // 0x6C
		::System::Int32 _heightMapWidth; // 0x74
		::System::Single _heightRange; // 0x78
		::System::Int32 _partID; // 0x7C
		::System::Single _maxHeight; // 0x80
		::System::Single _smoothness; // 0x84
		::System::Single _terrainSizeX; // 0x88
		::System::Single _minHeight; // 0x8C
		::UnityEngine::Vector2 _tileOffset; // 0x90
		::System::Single _normalScale; // 0x98
		::System::Single _strength; // 0x9C
		::HoudiniEngineUnity::HFLayerType _layerType; // 0xA0
		::UnityEngine::Vector3 _minBounds; // 0xA4
		::System::Single _metallic; // 0xB0
		::System::Int32 _heightMapHeight; // 0xB4
		::System::Single _terrainSizeY; // 0xB8
		::UnityEngine::Color _specularColor; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
