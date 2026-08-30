#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_00B6B408F45CF4DA_OFFSET UNITYSDK_OFFSET(0x1CDB3EB0)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_26D4B6894AFE9BDF_OFFSET UNITYSDK_OFFSET(0x1CDB3CF0)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_77B46DD83FAD02B4_OFFSET UNITYSDK_OFFSET(0x1CDB3EE0)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_AFD752447508E54E_OFFSET UNITYSDK_OFFSET(0x1CDB3D30)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB3D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTriggeredBlockDamage_TypeDefinitionIndex = 23431;

	class ByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_26D4B6894AFE9BDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_26D4B6894AFE9BDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFD752447508E54E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_AFD752447508E54E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00B6B408F45CF4DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_00B6B408F45CF4DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77B46DD83FAD02B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_77B46DD83FAD02B4_OFFSET))(a1, a2);
		}
	};
}
