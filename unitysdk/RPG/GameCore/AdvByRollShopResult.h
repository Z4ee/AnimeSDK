#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_2208EF868517E282_OFFSET UNITYSDK_OFFSET(0x1BE16090)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_85110813AA8261E4_OFFSET UNITYSDK_OFFSET(0x1BE16300)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_9D89A1907B04791F_OFFSET UNITYSDK_OFFSET(0x1BE160D0)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_DC5F3D5F3A007D4A_OFFSET UNITYSDK_OFFSET(0x1BE162D0)
#define RPG_GAMECORE_ADVBYROLLSHOPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE160C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByRollShopResult_TypeDefinitionIndex = 19790;

	class AdvByRollShopResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RollShopGroupType TargetResult; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2208EF868517E282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_2208EF868517E282_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D89A1907B04791F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_9D89A1907B04791F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DC5F3D5F3A007D4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_DC5F3D5F3A007D4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85110813AA8261E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYROLLSHOPRESULT_METHOD_4_85110813AA8261E4_OFFSET))(a1, a2);
		}
	};
}
