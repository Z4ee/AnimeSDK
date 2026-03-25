#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_45F752EE6285F182_OFFSET UNITYSDK_OFFSET(0x17016190)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_EF74F36934B4287A_OFFSET UNITYSDK_OFFSET(0x17016260)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17016210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScepterMainUnitEffectTag_TypeDefinitionIndex = 21332;

	class ByCompareScepterMainUnitEffectTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicRangeType TargetTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45F752EE6285F182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_45F752EE6285F182_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF74F36934B4287A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_EF74F36934B4287A_OFFSET))(a1, a2);
		}
	};
}
