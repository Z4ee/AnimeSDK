#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17661BD0)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17661CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCollectionConfigRow_TypeDefinitionIndex = 13730;

	class RogueTournCollectionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PillarID; // 0x10
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournCollectionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
