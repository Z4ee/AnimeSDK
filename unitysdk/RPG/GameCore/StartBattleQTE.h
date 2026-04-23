#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleQTEBaseConfig; }

#define RPG_GAMECORE_STARTBATTLEQTE_METHOD_3_36F0EBD9EEA947F5_OFFSET UNITYSDK_OFFSET(0x18E99920)
#define RPG_GAMECORE_STARTBATTLEQTE_METHOD_3_4967394980B0C4C4_OFFSET UNITYSDK_OFFSET(0x18E999A0)
#define RPG_GAMECORE_STARTBATTLEQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E99970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartBattleQTE_TypeDefinitionIndex = 22312;

	class StartBattleQTE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleQTEBaseConfig* QTEConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLEQTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36F0EBD9EEA947F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattleQTE*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattleQTE*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLEQTE_METHOD_3_36F0EBD9EEA947F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4967394980B0C4C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattleQTE* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattleQTE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLEQTE_METHOD_3_4967394980B0C4C4_OFFSET))(a1, a2);
		}
	};
}
