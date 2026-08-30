#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/AtlasPopulationMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphRenderMode.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_FONTASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190E5E30)

namespace RPG::Client
{
	inline static constexpr unsigned int FontAssetConfig_TypeDefinitionIndex = 60177;

	class FontAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Font* SourceFontFile; // 0x18
		::TMPro::AtlasPopulationMode AtlasPopulationMode; // 0x20
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode AtlasRenderMode; // 0x24
		::System::Int32 SamplingPointSize; // 0x28
		::System::Int32 Padding; // 0x2C
		::System::Int32 AtlasWidth; // 0x30
		::System::Int32 AtlasHeight; // 0x34
		::System::Boolean EnableMultiAtlasTextures; // 0x38
		::UnityEngine::Material* MaterialTemplate; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FONTASSETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
