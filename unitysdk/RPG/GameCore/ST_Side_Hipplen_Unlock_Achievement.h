#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_BCEDBCE6C480769D_OFFSET UNITYSDK_OFFSET(0x19C1A6D0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_C7D43A6F63077572_OFFSET UNITYSDK_OFFSET(0x19C0AC90)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0AC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Unlock_Achievement_TypeDefinitionIndex = 20137;

	class ST_Side_Hipplen_Unlock_Achievement : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BCEDBCE6C480769D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_BCEDBCE6C480769D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7D43A6F63077572(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_C7D43A6F63077572_OFFSET))(a1, a2);
		}
	};
}
