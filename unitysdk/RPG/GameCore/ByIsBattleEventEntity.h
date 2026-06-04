#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_391CCB3B0F462710_OFFSET UNITYSDK_OFFSET(0x1955A150)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_9422C2DE2F08E0F8_OFFSET UNITYSDK_OFFSET(0x1955A080)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_B7E7F8DB48F35C4E_OFFSET UNITYSDK_OFFSET(0x1955A320)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_D1C266602DA2BA6D_OFFSET UNITYSDK_OFFSET(0x1955A3A0)
#define RPG_GAMECORE_BYISBATTLEEVENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1955A100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBattleEventEntity_TypeDefinitionIndex = 21778;

	class ByIsBattleEventEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::BattleEventEntitySubType ExpectSubType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9422C2DE2F08E0F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_9422C2DE2F08E0F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_391CCB3B0F462710(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_391CCB3B0F462710_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7E7F8DB48F35C4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_B7E7F8DB48F35C4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1C266602DA2BA6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLEEVENTENTITY_METHOD_4_D1C266602DA2BA6D_OFFSET))(a1, a2);
		}
	};
}
