#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_METHOD_3_A93BB2FB01F49E2A_OFFSET UNITYSDK_OFFSET(0x19450780)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_METHOD_3_DE7BF09658ADB6AA_OFFSET UNITYSDK_OFFSET(0x19450820)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP__CTOR_OFFSET UNITYSDK_OFFSET(0x194507E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifyTeamPlayerHP_TypeDefinitionIndex = 19047;

	class AdventureModifyTeamPlayerHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x18
		::RPG::GameCore::DynamicFloat* MinRatio; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30
		::RPG::GameCore::TargetEvaluator* SpecifyTargetType; // 0x38
		::System::Boolean ClientUseGMCommand; // 0x40
		::System::Boolean TriggerCommonEffect; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A93BB2FB01F49E2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyTeamPlayerHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyTeamPlayerHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_METHOD_3_A93BB2FB01F49E2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE7BF09658ADB6AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyTeamPlayerHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyTeamPlayerHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERHP_METHOD_3_DE7BF09658ADB6AA_OFFSET))(a1, a2);
		}
	};
}
