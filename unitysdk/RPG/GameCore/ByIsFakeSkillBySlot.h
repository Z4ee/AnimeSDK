#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_13B6F3EC088C36E7_OFFSET UNITYSDK_OFFSET(0x1CDA0790)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_58CE9E08386CAC9E_OFFSET UNITYSDK_OFFSET(0x1CDA0830)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_77468DF4D5F85467_OFFSET UNITYSDK_OFFSET(0x1CDA0A00)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_C3F5F32C68AD4EC6_OFFSET UNITYSDK_OFFSET(0x1CDA0A60)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA07F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFakeSkillBySlot_TypeDefinitionIndex = 22750;

	class ByIsFakeSkillBySlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_13B6F3EC088C36E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillBySlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillBySlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_13B6F3EC088C36E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_58CE9E08386CAC9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_58CE9E08386CAC9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77468DF4D5F85467(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_77468DF4D5F85467_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C3F5F32C68AD4EC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_C3F5F32C68AD4EC6_OFFSET))(a1, a2);
		}
	};
}
