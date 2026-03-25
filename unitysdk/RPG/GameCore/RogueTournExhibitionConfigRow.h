#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17665250)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176653B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExhibitionConfigRow_TypeDefinitionIndex = 13732;

	class RogueTournExhibitionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PaintingID; // 0x10
		::RPG::GameCore::RogueExhibitionType Type; // 0x14
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournExhibitionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExhibitionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
