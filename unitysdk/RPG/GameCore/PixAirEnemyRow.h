#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRENEMYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D790D90)
#define RPG_GAMECORE_PIXAIRENEMYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D791020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEnemyRow_TypeDefinitionIndex = 12064;

	class PixAirEnemyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipsID; // 0x10
		::Il2CppArray<::System::UInt32>* EquipsLevel; // 0x18
		::RPG::GameCore::FixPoint HP; // 0x20
		::System::UInt32 CoinLoot; // 0x28
		::System::UInt32 DisplayID; // 0x2C
		::System::UInt32 EnemyID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEnemyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEnemyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
