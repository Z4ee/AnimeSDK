#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_354F48C73F35BC96_OFFSET UNITYSDK_OFFSET(0x1A8D7030)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_391CCB3B0F462710_OFFSET UNITYSDK_OFFSET(0x1A8D6E60)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_87909B2851A76DC0_OFFSET UNITYSDK_OFFSET(0x1A8D7060)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_948E7786405A67FD_OFFSET UNITYSDK_OFFSET(0x1A8D6E20)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D6E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBattleEventEntity_TypeDefinitionIndex = 22204;

	class ByIsBattleEventEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::BattleEventEntitySubType ExpectSubType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_948E7786405A67FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_948E7786405A67FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_391CCB3B0F462710(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_391CCB3B0F462710_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_354F48C73F35BC96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_354F48C73F35BC96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87909B2851A76DC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_87909B2851A76DC0_OFFSET))(a1, a2);
		}
	};
}
