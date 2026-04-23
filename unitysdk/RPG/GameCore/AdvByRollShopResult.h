#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_5FC216021C221283_OFFSET UNITYSDK_OFFSET(0x1864A0C0)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_9D89A1907B04791F_OFFSET UNITYSDK_OFFSET(0x1864A190)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1864A140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByRollShopResult_TypeDefinitionIndex = 19540;

	class AdvByRollShopResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RollShopGroupType TargetResult; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5FC216021C221283(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_5FC216021C221283_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D89A1907B04791F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_9D89A1907B04791F_OFFSET))(a1, a2);
		}
	};
}
