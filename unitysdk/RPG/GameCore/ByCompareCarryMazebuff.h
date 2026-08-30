#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_7315DACCD711F652_OFFSET UNITYSDK_OFFSET(0x1CEB49B0)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_8F5972F05556A933_OFFSET UNITYSDK_OFFSET(0x1CEB4A50)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_CFECF0893025D242_OFFSET UNITYSDK_OFFSET(0x1CEB4C00)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_ECF5CFBC52077457_OFFSET UNITYSDK_OFFSET(0x1CEB4C60)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB4A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCarryMazebuff_TypeDefinitionIndex = 19805;

	class ByCompareCarryMazebuff : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 BuffID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7315DACCD711F652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_7315DACCD711F652_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F5972F05556A933(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_8F5972F05556A933_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFECF0893025D242(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_CFECF0893025D242_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ECF5CFBC52077457(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_ECF5CFBC52077457_OFFSET))(a1, a2);
		}
	};
}
