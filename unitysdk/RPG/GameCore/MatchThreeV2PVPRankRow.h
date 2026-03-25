#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2PVPRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B8100)
#define RPG_GAMECORE_MATCHTHREEV2PVPRANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B8450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2PVPRankRow_TypeDefinitionIndex = 10988;

	class MatchThreeV2PVPRankRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MultiPlayerGameMode>* GameModeList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* BigIconPath; // 0x20
		::System::String* SmallIconPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 RankID; // 0x40
		::System::UInt32 MaxScore; // 0x44
		::System::UInt32 Rank; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2PVPRANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2PVPRankRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2PVPRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2PVPRANKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
