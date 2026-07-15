#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelMinimapSectionType.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfig; }
namespace RPG::GameCore { class LevelMinimapPassage; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELMINIMAPSECTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B072350)
#define RPG_GAMECORE_LEVELMINIMAPSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0728D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapSection_TypeDefinitionIndex = 16532;

	class LevelMinimapSection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Int32 MapLayerID; // 0x14
		::System::String* Sprite; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelMinimapLayerSpriteConfig*>* FSVSpriteList; // 0x20
		::System::Boolean IsRect; // 0x28
		::Il2CppArray<::System::UInt32>* Indices; // 0x30
		::RPG::MVector2 UIPosition; // 0x38
		::System::Boolean InitialHidden; // 0x40
		::RPG::GameCore::LevelMinimapSectionType Type; // 0x44
		::RPG::MVector2 Center; // 0x48
		::System::UInt32 GroupID; // 0x50
		::System::UInt32 PropID; // 0x54
		::System::String* ReferencePropKey; // 0x58
		::Il2CppArray<::RPG::MVector2>* Triangles; // 0x60
		::RPG::MVector2 Pivot; // 0x68
		::Il2CppArray<::RPG::GameCore::LevelMinimapPassage*>* Passages; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMinimapSection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMinimapSection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPSECTION_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
