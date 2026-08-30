#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLEROUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0824D0)
#define RPG_GAMECORE_EXPEDITIONBATTLEROUTECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0827C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleRouteConfigRow_TypeDefinitionIndex = 11428;

	class ExpeditionBattleRouteConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x10
		::System::String* MonsterFigurePath; // 0x18
		::Il2CppArray<::System::UInt32>* LevelIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* MonsterWeakPoint; // 0x28
		::System::UInt32 MazeBuffID; // 0x30
		::System::UInt32 MainMonster; // 0x34
		::System::UInt32 BuffID; // 0x38
		::System::UInt32 ID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEROUTECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEROUTECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
