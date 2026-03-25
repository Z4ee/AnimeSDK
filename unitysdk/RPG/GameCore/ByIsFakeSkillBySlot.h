#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_58CE9E08386CAC9E_OFFSET UNITYSDK_OFFSET(0x1702E200)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_F2A550FEA8A978E9_OFFSET UNITYSDK_OFFSET(0x1702E0E0)
#define RPG_GAMECORE_BYISFAKESKILLBYSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1702E180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFakeSkillBySlot_TypeDefinitionIndex = 21215;

	class ByIsFakeSkillBySlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F2A550FEA8A978E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillBySlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillBySlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_F2A550FEA8A978E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_58CE9E08386CAC9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYSLOT_METHOD_4_58CE9E08386CAC9E_OFFSET))(a1, a2);
		}
	};
}
