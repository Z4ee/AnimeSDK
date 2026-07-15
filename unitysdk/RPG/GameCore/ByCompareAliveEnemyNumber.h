#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_03E30B7BF3CC5907_OFFSET UNITYSDK_OFFSET(0x19CD0310)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_6BE9488387CCC58A_OFFSET UNITYSDK_OFFSET(0x19CD0350)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_80689759B120E29C_OFFSET UNITYSDK_OFFSET(0x19CD05B0)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_FA8322BB85B9FC12_OFFSET UNITYSDK_OFFSET(0x19CD0580)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD0340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAliveEnemyNumber_TypeDefinitionIndex = 22160;

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

		static ::System::Void Method_4_03E30B7BF3CC5907(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_03E30B7BF3CC5907_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BE9488387CCC58A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_6BE9488387CCC58A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA8322BB85B9FC12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_FA8322BB85B9FC12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80689759B120E29C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_METHOD_4_80689759B120E29C_OFFSET))(a1, a2);
		}
	};
}
