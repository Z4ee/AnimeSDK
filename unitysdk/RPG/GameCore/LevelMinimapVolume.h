#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfigCollection; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Sprite; }

#define RPG_GAMECORE_LEVELMINIMAPVOLUME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987A130)
#define RPG_GAMECORE_LEVELMINIMAPVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1987A5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapVolume_TypeDefinitionIndex = 16373;

	class LevelMinimapVolume : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Center; // 0x10
		::RPG::MVector3 Size; // 0x1C
		::Il2CppArray<::RPG::MVector2>* SectionVertices; // 0x28
		::System::String* Atlas; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelMinimapSection*>* Sections; // 0x38
		::System::String* BackgroundMapSprite; // 0x40
		::RPG::MVector2 BackgroundMapSpriteSize; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* RoadMapSpriteDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ItemSpriteDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection*>* RoadMapSpriteConfigDict; // 0x60
		::System::Boolean CombineLayerAutomatic; // 0x68
		::System::Single Scale; // 0x6C
		::System::Single CompleteScale; // 0x70
		::UnityEngine::Sprite* BackgroundMapSpriteInstance; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMinimapVolume*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMinimapVolume*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPVOLUME_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
