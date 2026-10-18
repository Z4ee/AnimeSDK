#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8473F0)
#define RPG_GAMECORE_MARBLESEALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D847D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealRow_TypeDefinitionIndex = 11847;

	class MarbleSealRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x20
		::System::String* VoiceType; // 0x28
		::System::String* Name; // 0x30
		::System::String* SmallEnemyIconPath; // 0x38
		::System::String* Desc; // 0x40
		::System::String* EnemyIconPath; // 0x48
		::Il2CppArray<::System::UInt32>* CommonTalkIDList; // 0x50
		::System::String* SmallIconPath; // 0x58
		::System::Single Mass; // 0x60
		::System::UInt32 VideoID; // 0x64
		::System::UInt32 UnlockBuySubMissionID; // 0x68
		::System::UInt32 ActionPriority; // 0x6C
		::System::UInt32 UnlockSubMissionID; // 0x70
		::System::Boolean IsShow; // 0x74
		::System::UInt32 UnlockShowSubMissionID; // 0x78
		::System::UInt32 LevelUpPriority; // 0x7C
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x80
		::System::Single MaxSpeed; // 0x84
		::System::UInt32 ID; // 0x88
		::System::Int32 Attack; // 0x8C
		::System::UInt32 ActivityID; // 0x90
		::System::UInt32 AiStrategyID; // 0x94
		::RPG::Client::TextID UnlockHint; // 0x98
		::System::Int32 Hp; // 0xA8
		::System::UInt32 ShopTalkID; // 0xAC
		::System::UInt32 Price; // 0xB0
		::System::Single Size; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
