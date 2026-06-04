#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_34690C87F06C603B_OFFSET UNITYSDK_OFFSET(0x19C69D40)
#define RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_EAC9A8904AAD9135_OFFSET UNITYSDK_OFFSET(0x19C69CC0)
#define RPG_GAMECORE_SETUPBATTLELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C69D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupBattleLineup_TypeDefinitionIndex = 21703;

	class SetupBattleLineup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CharacterIDList; // 0x18
		::Il2CppArray<::System::UInt32>* EnhancedIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EAC9A8904AAD9135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupBattleLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupBattleLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_EAC9A8904AAD9135_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34690C87F06C603B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupBattleLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupBattleLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_METHOD_3_34690C87F06C603B_OFFSET))(a1, a2);
		}
	};
}
