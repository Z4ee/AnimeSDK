#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B071F20)
#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0720A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapLayerSpriteConfig_TypeDefinitionIndex = 16533;

	class LevelMinimapLayerSpriteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FSVName; // 0x10
		::System::Int16 FSVValue; // 0x18
		::System::String* SpritePath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMinimapLayerSpriteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMinimapLayerSpriteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
