#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_59971D601B9C38B3_OFFSET UNITYSDK_OFFSET(0x1CF0A320)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_82F44DB474616D00_OFFSET UNITYSDK_OFFSET(0x1CF0A360)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_DE961B0EB9ABD562_OFFSET UNITYSDK_OFFSET(0x1CF0A5D0)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_FFED674C24206A6C_OFFSET UNITYSDK_OFFSET(0x1CF0A600)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0A350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareUnusedInsertAbilityCount_TypeDefinitionIndex = 22793;

	class ByCompareUnusedInsertAbilityCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AbilityOwnerType; // 0x20
		::System::String* AbilityName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_59971D601B9C38B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_59971D601B9C38B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82F44DB474616D00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_82F44DB474616D00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE961B0EB9ABD562(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_DE961B0EB9ABD562_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FFED674C24206A6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_METHOD_4_FFED674C24206A6C_OFFSET))(a1, a2);
		}
	};
}
