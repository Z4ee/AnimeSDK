#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9E2CB0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E3320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementLevelRow_TypeDefinitionIndex = 10877;

	class AchievementLevelRow : public ::System::Object
	{
	public:
		::System::String* LevelIconPath; // 0x10
		::System::UInt32 Count; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 Reward; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
