#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_METHOD_3_50A7EB165F97B595_OFFSET UNITYSDK_OFFSET(0x18BCD060)
#define RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_METHOD_3_54B4AE323B130B14_OFFSET UNITYSDK_OFFSET(0x18BCCFE0)
#define RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCD030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideMonsterRankScore_TypeDefinitionIndex = 22702;

	class OverrideMonsterRankScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::FixPoint RankScore; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54B4AE323B130B14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideMonsterRankScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideMonsterRankScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_METHOD_3_54B4AE323B130B14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50A7EB165F97B595(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideMonsterRankScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideMonsterRankScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_METHOD_3_50A7EB165F97B595_OFFSET))(a1, a2);
		}
	};
}
