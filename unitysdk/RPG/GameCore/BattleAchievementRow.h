#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186EEA30)
#define RPG_GAMECORE_BATTLEACHIEVEMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186EEC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAchievementRow_TypeDefinitionIndex = 12177;

	class BattleAchievementRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* NeedTagList; // 0x10
		::Il2CppArray<::System::String*>* ExcludeTagList; // 0x18
		::System::String* AbilityName; // 0x20
		::System::UInt32 GameModeGroup; // 0x28
		::System::UInt32 BattleAchievementID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACHIEVEMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleAchievementRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAchievementRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
