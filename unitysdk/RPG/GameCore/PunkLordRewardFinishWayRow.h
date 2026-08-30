#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D18B240)
#define RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18B450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordRewardFinishWayRow_TypeDefinitionIndex = 12216;

	class PunkLordRewardFinishWayRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishID; // 0x10
		::System::UInt32 FinishPoint; // 0x14
		::RPG::Client::TextID FinishName; // 0x18
		::RPG::GameCore::PunkLordMonsterRare FinishRare; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PunkLordRewardFinishWayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PunkLordRewardFinishWayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
