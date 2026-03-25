#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfig; }

#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1733B330)
#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1733B400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapLayerSpriteConfigCollection_TypeDefinitionIndex = 15814;

	class LevelMinimapLayerSpriteConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelMinimapLayerSpriteConfig*>* List; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION_FROMBINARY_OFFSET))(array, val);
		}
	};
}
