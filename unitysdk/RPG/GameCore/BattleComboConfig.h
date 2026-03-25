#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECOMBOCONFIG_METHOD_2_35D47B2A06BFB9EC_OFFSET UNITYSDK_OFFSET(0x16FCE170)
#define RPG_GAMECORE_BATTLECOMBOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCE670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleComboConfig_TypeDefinitionIndex = 15676;

	class BattleComboConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint HitComboValueAddDelta; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* HitComboValueMinusDelta; // 0x18
		::RPG::GameCore::StringHash SkillComboValueDeltaHash; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* StanceComboValueDelta; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EliminateComboValueDelta; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* DynamicAddRatioByGear; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* DynamicMinusRatioByGear; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* Gear; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* DamageAdd; // 0x50
		::RPG::GameCore::FixPoint ComboDamageSkillAdded; // 0x58
		::RPG::GameCore::FixPoint ComboMaxConst; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOMBOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35D47B2A06BFB9EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleComboConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleComboConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOMBOCONFIG_METHOD_2_35D47B2A06BFB9EC_OFFSET))(a1, a2);
		}
	};
}
