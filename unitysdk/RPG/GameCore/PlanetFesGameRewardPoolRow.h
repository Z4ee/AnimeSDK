#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesMiniGameRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A1D7B0)
#define RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1D960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameRewardPoolRow_TypeDefinitionIndex = 11674;

	class PlanetFesGameRewardPoolRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RewardParam; // 0x10
		::RPG::GameCore::PlanetFesMiniGameRewardType Type; // 0x18
		::System::UInt32 RewardPoolID; // 0x1C
		::System::UInt32 Order; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesGameRewardPoolRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesGameRewardPoolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
