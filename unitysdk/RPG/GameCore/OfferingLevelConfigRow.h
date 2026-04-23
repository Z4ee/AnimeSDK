#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OfferingRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OFFERINGLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BC2EE0)
#define RPG_GAMECORE_OFFERINGLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC30F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfferingLevelConfigRow_TypeDefinitionIndex = 13550;

	class OfferingLevelConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::RPG::GameCore::OfferingRewardType Type; // 0x14
		::System::UInt32 ItemCost; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::UInt32 TypeID; // 0x20
		::System::UInt32 UnlockID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OfferingLevelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfferingLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGLEVELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
