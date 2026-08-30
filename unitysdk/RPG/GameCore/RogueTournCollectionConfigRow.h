#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournCollectionExhibitionPropFloor.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D417AE0)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D417BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCollectionConfigRow_TypeDefinitionIndex = 14828;

	class RogueTournCollectionConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournCollectionExhibitionPropFloor Floor; // 0x10
		::System::UInt32 PillarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
