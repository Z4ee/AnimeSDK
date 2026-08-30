#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEPVPRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4AD990)
#define RPG_GAMECORE_MARBLEPVPRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ADD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePVPRankConfigRow_TypeDefinitionIndex = 11852;

	class MarblePVPRankConfigRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ScoreArea; // 0x18
		::System::String* BigIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* LevelPool; // 0x28
		::System::String* IconPath; // 0x30
		::System::UInt32 Rank; // 0x38
		::System::UInt32 LoseAIRank; // 0x3C
		::System::UInt32 TimeOutAIRank; // 0x40
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x44
		::System::UInt32 ID; // 0x48
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVPRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePVPRankConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePVPRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVPRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
