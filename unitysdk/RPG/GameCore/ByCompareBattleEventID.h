#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_AD944FED6D309CBB_OFFSET UNITYSDK_OFFSET(0x17003520)
#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_F352A6951BDE819E_OFFSET UNITYSDK_OFFSET(0x17003680)
#define RPG_GAMECORE_BYCOMPAREBATTLEEVENTID__CTOR_OFFSET UNITYSDK_OFFSET(0x170035E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBattleEventID_TypeDefinitionIndex = 21209;

	class ByCompareBattleEventID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetBattleEventID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AD944FED6D309CBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBattleEventID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBattleEventID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_AD944FED6D309CBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F352A6951BDE819E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBATTLEEVENTID_METHOD_4_F352A6951BDE819E_OFFSET))(a1, a2);
		}
	};
}
