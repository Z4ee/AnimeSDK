#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_A19FFDA0EFF203EE_OFFSET UNITYSDK_OFFSET(0x190EE980)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_BFFD84354B968897_OFFSET UNITYSDK_OFFSET(0x190EE940)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x190EE970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattlePropertyRatio_TypeDefinitionIndex = 23281;

	class VE_RtBattlePropertyRatio : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BFFD84354B968897(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattlePropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_BFFD84354B968897_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A19FFDA0EFF203EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_A19FFDA0EFF203EE_OFFSET))(a1, a2);
		}
	};
}
