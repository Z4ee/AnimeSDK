#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_METHOD_3_9CFD50408E4DA2B5_OFFSET UNITYSDK_OFFSET(0x1D0772E0)
#define RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_METHOD_3_ED47131FF80E09EC_OFFSET UNITYSDK_OFFSET(0x1D077320)
#define RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D077310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowBattleEventHint_TypeDefinitionIndex = 22400;

	class GridFightShowBattleEventHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ActionDelayChangeValue; // 0x18
		::RPG::GameCore::GridFightBattleEventHintType HintType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CFD50408E4DA2B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowBattleEventHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowBattleEventHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_METHOD_3_9CFD50408E4DA2B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED47131FF80E09EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowBattleEventHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowBattleEventHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_METHOD_3_ED47131FF80E09EC_OFFSET))(a1, a2);
		}
	};
}
