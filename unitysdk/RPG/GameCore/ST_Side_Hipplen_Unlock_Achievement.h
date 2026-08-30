#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_C7D43A6F63077572_OFFSET UNITYSDK_OFFSET(0x1D4D14C0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_F879F5CF28E1DF41_OFFSET UNITYSDK_OFFSET(0x1D4D1480)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D14B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Unlock_Achievement_TypeDefinitionIndex = 21061;

	class ST_Side_Hipplen_Unlock_Achievement : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F879F5CF28E1DF41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_F879F5CF28E1DF41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7D43A6F63077572(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_ACHIEVEMENT_METHOD_4_C7D43A6F63077572_OFFSET))(a1, a2);
		}
	};
}
