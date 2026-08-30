#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleFailureTipType.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE77340)
#define RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE778C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFailureTipsConfigRow_TypeDefinitionIndex = 12771;

	class BattleFailureTipsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayerLevel; // 0x10
		::Il2CppArray<::System::UInt32>* MonsterTemplateIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::StageType>* StageTypeForce; // 0x20
		::Il2CppArray<::System::String*>* CustomStringList; // 0x28
		::Il2CppArray<::System::UInt32>* WorldList; // 0x30
		::Il2CppArray<::System::UInt32>* MainMissionUnfinishForce; // 0x38
		::Il2CppArray<::System::UInt32>* MainMissionTakenForce; // 0x40
		::Il2CppArray<::System::UInt32>* MainMissionFinishForce; // 0x48
		::Il2CppArray<::RPG::GameCore::GameModeType>* GameModeList; // 0x50
		::Il2CppArray<::System::UInt32>* MazebuffIDList; // 0x58
		::Il2CppArray<::System::UInt32>* StageIDForce; // 0x60
		::RPG::Client::TextID TipContent; // 0x68
		::System::UInt32 Priority; // 0x78
		::RPG::GameCore::BattleFailureTipType Type; // 0x7C
		::System::UInt32 BattleFailureTipID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleFailureTipsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleFailureTipsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFAILURETIPSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
