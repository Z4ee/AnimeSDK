#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_01D56E4FDA8882A6_OFFSET UNITYSDK_OFFSET(0x16F56270)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_4B7084AA398A4D00_OFFSET UNITYSDK_OFFSET(0x16F56300)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F562D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifyTeamPlayerSP_TypeDefinitionIndex = 18462;

	class AdventureModifyTeamPlayerSP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::RPG::GameCore::TargetEvaluator* SpecifyTargetType; // 0x30
		::System::Boolean ClientUseGMCommand; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01D56E4FDA8882A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_01D56E4FDA8882A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B7084AA398A4D00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_4B7084AA398A4D00_OFFSET))(a1, a2);
		}
	};
}
