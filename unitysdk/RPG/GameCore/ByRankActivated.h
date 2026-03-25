#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_36BE7F36C2957562_OFFSET UNITYSDK_OFFSET(0x17039D10)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_98636A5184255F76_OFFSET UNITYSDK_OFFSET(0x17039C40)
#define RPG_GAMECORE_BYRANKACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x17039CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivated_TypeDefinitionIndex = 21266;

	class ByRankActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash TriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98636A5184255F76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_98636A5184255F76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36BE7F36C2957562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_36BE7F36C2957562_OFFSET))(a1, a2);
		}
	};
}
