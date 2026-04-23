#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumeType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class LocalAmbientVolume_ExtraExportData;
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9387E0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalAmbientVolume_ExportData_TypeDefinitionIndex = 45702;

	class LocalAmbientVolume_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::System::Int32 Priority; // 0x10
		::UnityEngine::Rendering::AmbientVolumeType Scope; // 0x14
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x18
		::System::Boolean UseLerp; // 0x1C
		::System::Boolean LerpWithCustomCol2; // 0x1D
		::System::Boolean LerpWithAlpha; // 0x1E
		::System::Boolean UseInvert; // 0x1F
		::UnityEngine::Gradient* col1; // 0x20
		::UnityEngine::Gradient* col2; // 0x28
		::System::Single ColTransBias; // 0x30
		::System::Single ColTransSmoothness; // 0x34
		::System::Single ColTransBias2; // 0x38
		::System::Single ColTransSmoothness2; // 0x3C
		::UnityEngine::Vector4 TransDir; // 0x40
		::UnityEngine::Vector3 EdgeExtend; // 0x50
		::System::Single EdgeSmooth; // 0x5C
		::System::String* CharacterLightAsset; // 0x60
		::System::Boolean UseCustomCharParam; // 0x68
		::UnityEngine::Color LevelSkinLightColor; // 0x6C
		::UnityEngine::Color LevelSkinShadowColor; // 0x7C
		::UnityEngine::Color LevelHighLightColor; // 0x8C
		::UnityEngine::Color LevelShadowColor; // 0x9C
		::System::Single LevelShadow; // 0xAC
		::System::Single LevelMid; // 0xB0
		::System::Single LevelHighLight; // 0xB4
		::LocalAmbientVolume_ExtraExportData* extraExportData; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
