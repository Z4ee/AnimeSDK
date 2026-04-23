#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C91DE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 43670;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _layerName; // 0x10
		::System::String* _layerPath; // 0x18
		::System::String* _maskTexturePath; // 0x20
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x28
		::System::String* _normalTexturePath; // 0x30
		::System::String* _diffuseTexturePath; // 0x38
		::System::Int32 _heightMapHeight; // 0x40
		::System::Single _minHeight; // 0x44
		::System::Single _terrainSizeY; // 0x48
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x4C
		::System::Int32 _partID; // 0x50
		::System::Int32 _heightMapWidth; // 0x54
		::System::Single _terrainSizeX; // 0x58
		::UnityEngine::Vector3 _maxBounds; // 0x5C
		::UnityEngine::Vector3 _minBounds; // 0x68
		::UnityEngine::Vector2 _tileSize; // 0x74
		::System::Single _smoothness; // 0x7C
		::System::Single _normalScale; // 0x80
		::System::Single _metallic; // 0x84
		::System::Int32 _tile; // 0x88
		::System::Single _heightRange; // 0x8C
		::System::Boolean _hasLayerAttributes; // 0x90
		::System::Boolean _uiExpanded; // 0x91
		::UnityEngine::Vector3 _center; // 0x94
		::System::Single _strength; // 0xA0
		::UnityEngine::Vector3 _position; // 0xA4
		::UnityEngine::Color _specularColor; // 0xB0
		::UnityEngine::Vector2 _tileOffset; // 0xC0
		::System::Single _maxHeight; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
