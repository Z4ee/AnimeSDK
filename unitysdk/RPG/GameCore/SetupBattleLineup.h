#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_463C37D77A0B962F_OFFSET UNITYSDK_OFFSET(0x18E4D0F0)
#define RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_AA00D950ACFB8031_OFFSET UNITYSDK_OFFSET(0x18E4D170)
#define RPG_GAMECORE_SETUPBATTLELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4D140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupBattleLineup_TypeDefinitionIndex = 21879;

	class SetupBattleLineup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CharacterIDList; // 0x18
		::Il2CppArray<::System::UInt32>* EnhancedIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_463C37D77A0B962F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupBattleLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupBattleLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_463C37D77A0B962F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA00D950ACFB8031(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupBattleLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupBattleLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_AA00D950ACFB8031_OFFSET))(a1, a2);
		}
	};
}
