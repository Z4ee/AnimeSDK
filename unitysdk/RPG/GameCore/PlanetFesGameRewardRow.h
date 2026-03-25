#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BB190)
#define RPG_GAMECORE_PLANETFESGAMEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BB380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameRewardRow_TypeDefinitionIndex = 11178;

	class PlanetFesGameRewardRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ItemList; // 0x10
		::Il2CppArray<::System::UInt32>* BuffList; // 0x18
		::System::UInt32 GameRewardID; // 0x20
		::System::UInt32 GoldNum; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesGameRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesGameRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
