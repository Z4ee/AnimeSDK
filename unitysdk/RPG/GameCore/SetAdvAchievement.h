#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETADVACHIEVEMENT_METHOD_3_51AC3CD5979E84DB_OFFSET UNITYSDK_OFFSET(0x176A4FE0)
#define RPG_GAMECORE_SETADVACHIEVEMENT_METHOD_3_8F37A776CD80AB80_OFFSET UNITYSDK_OFFSET(0x176A5060)
#define RPG_GAMECORE_SETADVACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x176A5030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvAchievement_TypeDefinitionIndex = 18871;

	class SetAdvAchievement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 InstanceID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVACHIEVEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51AC3CD5979E84DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvAchievement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvAchievement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVACHIEVEMENT_METHOD_3_51AC3CD5979E84DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F37A776CD80AB80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvAchievement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVACHIEVEMENT_METHOD_3_8F37A776CD80AB80_OFFSET))(a1, a2);
		}
	};
}
