#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_2DFAE29688620EC0_OFFSET UNITYSDK_OFFSET(0x1CBA9420)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_676D0CB9C8536981_OFFSET UNITYSDK_OFFSET(0x1CBA9490)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_9DD88F48D1C96E49_OFFSET UNITYSDK_OFFSET(0x1CBA9160)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_D4C96B5DC56AE286_OFFSET UNITYSDK_OFFSET(0x1CBA9210)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA91D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareHPRatio_TypeDefinitionIndex = 20538;

	class AdventureByCompareHPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Single CompareValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DD88F48D1C96E49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_9DD88F48D1C96E49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4C96B5DC56AE286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_D4C96B5DC56AE286_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DFAE29688620EC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_2DFAE29688620EC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_676D0CB9C8536981(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_676D0CB9C8536981_OFFSET))(a1, a2);
		}
	};
}
