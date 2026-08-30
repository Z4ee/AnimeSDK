#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE69CF0)
#define RPG_GAMECORE_BATTLEACHIEVEMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE69EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAchievementRow_TypeDefinitionIndex = 12787;

	class BattleAchievementRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::System::String*>* NeedTagList; // 0x18
		::Il2CppArray<::System::String*>* ExcludeTagList; // 0x20
		::System::UInt32 BattleAchievementID; // 0x28
		::System::UInt32 GameModeGroup; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACHIEVEMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAchievementRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAchievementRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
