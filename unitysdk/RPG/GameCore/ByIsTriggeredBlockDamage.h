#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_AFD752447508E54E_OFFSET UNITYSDK_OFFSET(0x17035400)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D5C5F42C1060E520_OFFSET UNITYSDK_OFFSET(0x17035330)
#define RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x170353B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTriggeredBlockDamage_TypeDefinitionIndex = 21956;

	class ByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D5C5F42C1060E520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggeredBlockDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_D5C5F42C1060E520_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFD752447508E54E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTRIGGEREDBLOCKDAMAGE_METHOD_4_AFD752447508E54E_OFFSET))(a1, a2);
		}
	};
}
