#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_8FCD9F464F17ACD0_OFFSET UNITYSDK_OFFSET(0x19441180)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_A0D9337066444AEA_OFFSET UNITYSDK_OFFSET(0x19440DB0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_CF52A1AE8CF59AAB_OFFSET UNITYSDK_OFFSET(0x194410E0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_D4C96B5DC56AE286_OFFSET UNITYSDK_OFFSET(0x19440ED0)
#define RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19440E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareHPRatio_TypeDefinitionIndex = 19632;

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

		static ::System::Void Method_4_A0D9337066444AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_A0D9337066444AEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4C96B5DC56AE286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_D4C96B5DC56AE286_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF52A1AE8CF59AAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_CF52A1AE8CF59AAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FCD9F464F17ACD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPAREHPRATIO_METHOD_4_8FCD9F464F17ACD0_OFFSET))(a1, a2);
		}
	};
}
