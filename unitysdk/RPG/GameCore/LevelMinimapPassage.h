#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELMINIMAPPASSAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B072180)
#define RPG_GAMECORE_LEVELMINIMAPPASSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B072340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapPassage_TypeDefinitionIndex = 16531;

	class LevelMinimapPassage : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::RPG::MVector2 Position; // 0x14
		::RPG::MVector2 PerpendicularEdge; // 0x1C
		::RPG::MVector2 Edge1to2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPPASSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMinimapPassage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMinimapPassage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPPASSAGE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
