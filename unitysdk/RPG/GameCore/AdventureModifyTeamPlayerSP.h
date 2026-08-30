#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_038C525A76172A11_OFFSET UNITYSDK_OFFSET(0x1CBBB480)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_4B7084AA398A4D00_OFFSET UNITYSDK_OFFSET(0x1CBBB4D0)
#define RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBB4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifyTeamPlayerSP_TypeDefinitionIndex = 19944;

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

		static ::System::Void Method_3_038C525A76172A11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_038C525A76172A11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B7084AA398A4D00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyTeamPlayerSP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyTeamPlayerSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYTEAMPLAYERSP_METHOD_3_4B7084AA398A4D00_OFFSET))(a1, a2);
		}
	};
}
