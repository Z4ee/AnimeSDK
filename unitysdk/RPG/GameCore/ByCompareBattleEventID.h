#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_1A9DC95F53677EE1_OFFSET UNITYSDK_OFFSET(0x1CEB4180)
#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_741660736524D4A9_OFFSET UNITYSDK_OFFSET(0x1CEB44C0)
#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_8E4E1AAFD92298F8_OFFSET UNITYSDK_OFFSET(0x1CEB4440)
#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_F352A6951BDE819E_OFFSET UNITYSDK_OFFSET(0x1CEB4260)
#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB4200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBattleEventID_TypeDefinitionIndex = 22744;

	class ByCompareBattleEventID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetBattleEventID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1A9DC95F53677EE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBattleEventID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBattleEventID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_1A9DC95F53677EE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F352A6951BDE819E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_F352A6951BDE819E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E4E1AAFD92298F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_8E4E1AAFD92298F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_741660736524D4A9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_741660736524D4A9_OFFSET))(a1, a2);
		}
	};
}
