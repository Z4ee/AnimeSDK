#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_43B1D0D2F142CF02_OFFSET UNITYSDK_OFFSET(0x1CDB3750)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_6FB775810D2F27F8_OFFSET UNITYSDK_OFFSET(0x1CDB3900)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_B01E5CB42EF283DE_OFFSET UNITYSDK_OFFSET(0x1CDB38D0)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_FCE9F0C6B136F97B_OFFSET UNITYSDK_OFFSET(0x1CDB3710)
#define RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB3740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTriggerBattleAttacker_TypeDefinitionIndex = 20549;

	class ByIsTriggerBattleAttacker : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FCE9F0C6B136F97B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggerBattleAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_FCE9F0C6B136F97B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43B1D0D2F142CF02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_43B1D0D2F142CF02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B01E5CB42EF283DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_B01E5CB42EF283DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FB775810D2F27F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGERBATTLEATTACKER_METHOD_4_6FB775810D2F27F8_OFFSET))(a1, a2);
		}
	};
}
