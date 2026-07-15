#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB74B50)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB74CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExhibitionConfigRow_TypeDefinitionIndex = 14410;

	class RogueTournExhibitionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PaintingID; // 0x10
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x14
		::RPG::GameCore::RogueExhibitionType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournExhibitionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExhibitionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
