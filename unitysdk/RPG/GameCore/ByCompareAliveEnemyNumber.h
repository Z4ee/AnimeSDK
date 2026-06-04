#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_3FA2165BE2FC0B58_OFFSET UNITYSDK_OFFSET(0x19503C30)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_5CFED1880E5E2BEA_OFFSET UNITYSDK_OFFSET(0x19503F30)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_6BE9488387CCC58A_OFFSET UNITYSDK_OFFSET(0x19503D00)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_9704B92A7E588169_OFFSET UNITYSDK_OFFSET(0x19503FB0)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19503CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAliveEnemyNumber_TypeDefinitionIndex = 21734;

	class ByCompareAliveEnemyNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3FA2165BE2FC0B58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_3FA2165BE2FC0B58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BE9488387CCC58A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_6BE9488387CCC58A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5CFED1880E5E2BEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_5CFED1880E5E2BEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9704B92A7E588169(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_9704B92A7E588169_OFFSET))(a1, a2);
		}
	};
}
