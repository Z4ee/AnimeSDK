#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_16EB65610E114B5E_OFFSET UNITYSDK_OFFSET(0x19552370)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_3DCC87604A12AEB6_OFFSET UNITYSDK_OFFSET(0x195522F0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_9A9CE92F639DC63D_OFFSET UNITYSDK_OFFSET(0x195521B0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_FF18523880DA9577_OFFSET UNITYSDK_OFFSET(0x195520E0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19552160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasUnGottenLevelReward_TypeDefinitionIndex = 20068;

	class ByHasUnGottenLevelReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FF18523880DA9577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_FF18523880DA9577_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A9CE92F639DC63D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_9A9CE92F639DC63D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DCC87604A12AEB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_3DCC87604A12AEB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_16EB65610E114B5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_METHOD_4_16EB65610E114B5E_OFFSET))(a1, a2);
		}
	};
}
