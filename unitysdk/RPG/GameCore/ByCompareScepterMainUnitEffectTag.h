#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_1D26153D9591771B_OFFSET UNITYSDK_OFFSET(0x1A8A09E0)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_BA4F1315EE39D06A_OFFSET UNITYSDK_OFFSET(0x1A8A0C20)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_EC7E653D07B7F4DC_OFFSET UNITYSDK_OFFSET(0x1A8A0BF0)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_EF74F36934B4287A_OFFSET UNITYSDK_OFFSET(0x1A8A0A20)
#define RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A0A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScepterMainUnitEffectTag_TypeDefinitionIndex = 22281;

	class ByCompareScepterMainUnitEffectTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicRangeType TargetTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D26153D9591771B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_1D26153D9591771B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF74F36934B4287A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_EF74F36934B4287A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC7E653D07B7F4DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_EC7E653D07B7F4DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA4F1315EE39D06A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERMAINUNITEFFECTTAG_METHOD_4_BA4F1315EE39D06A_OFFSET))(a1, a2);
		}
	};
}
