#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA6A00)
#define RPG_GAMECORE_MARBLESEALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA7350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealRow_TypeDefinitionIndex = 11288;

	class MarbleSealRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* SmallEnemyIconPath; // 0x18
		::System::String* EnemyIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x28
		::Il2CppArray<::System::UInt32>* CommonTalkIDList; // 0x30
		::System::String* Desc; // 0x38
		::System::String* Name; // 0x40
		::System::String* IconPath; // 0x48
		::System::String* VoiceType; // 0x50
		::System::String* SmallIconPath; // 0x58
		::System::Single Size; // 0x60
		::System::UInt32 ShopTalkID; // 0x64
		::System::Boolean IsShow; // 0x68
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x6C
		::System::Single Mass; // 0x70
		::System::UInt32 VideoID; // 0x74
		::System::UInt32 ID; // 0x78
		::System::UInt32 ActivityID; // 0x7C
		::System::Int32 Hp; // 0x80
		::System::UInt32 Price; // 0x84
		::System::UInt32 LevelUpPriority; // 0x88
		::System::Single MaxSpeed; // 0x8C
		::System::UInt32 AiStrategyID; // 0x90
		::System::UInt32 ActionPriority; // 0x94
		::System::UInt32 UnlockBuySubMissionID; // 0x98
		::System::Int32 Attack; // 0x9C
		::System::UInt32 UnlockShowSubMissionID; // 0xA0
		::System::UInt32 UnlockSubMissionID; // 0xA4
		::RPG::Client::TextID UnlockHint; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleSealRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
