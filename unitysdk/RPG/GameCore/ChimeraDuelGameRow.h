#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELGAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1709D3F0)
#define RPG_GAMECORE_CHIMERADUELGAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1709DB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelGameRow_TypeDefinitionIndex = 10413;

	class ChimeraDuelGameRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChimeraNumLimitList; // 0x10
		::Il2CppArray<::System::UInt32>* RoundIDList; // 0x18
		::System::UInt32 GameID; // 0x20
		::System::Boolean ShouldExitPuzzleOnEnd; // 0x24
		::RPG::GameCore::ChimeraDuelGameType GameType; // 0x28
		::System::UInt32 CoinNum; // 0x2C
		::System::UInt32 WinCon; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelGameRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelGameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
