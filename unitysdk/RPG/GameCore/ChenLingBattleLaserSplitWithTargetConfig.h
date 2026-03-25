#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleLaserSplitConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_METHOD_3_052C34389DDBC716_OFFSET UNITYSDK_OFFSET(0x1707FCB0)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_METHOD_3_2CAACA2A508B404F_OFFSET UNITYSDK_OFFSET(0x1707FF90)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1707FCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleLaserSplitWithTargetConfig_TypeDefinitionIndex = 14436;

	class ChenLingBattleLaserSplitWithTargetConfig : public ::RPG::GameCore::ChenLingBattleLaserSplitConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* SplitTargets; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CAACA2A508B404F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_METHOD_3_2CAACA2A508B404F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_052C34389DDBC716(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleLaserSplitWithTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITWITHTARGETCONFIG_METHOD_3_052C34389DDBC716_OFFSET))(a1, a2);
		}
	};
}
