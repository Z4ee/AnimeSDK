#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_6B7826D90B765878_OFFSET UNITYSDK_OFFSET(0x18DC9580)
#define RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_C0258E5FA62485C0_OFFSET UNITYSDK_OFFSET(0x18DC94B0)
#define RPG_GAMECORE_RTBYINSKILLRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC9530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByInSkillRange_TypeDefinitionIndex = 23238;

	class RtByInSkillRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CheckTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C0258E5FA62485C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInSkillRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInSkillRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_C0258E5FA62485C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B7826D90B765878(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_6B7826D90B765878_OFFSET))(a1, a2);
		}
	};
}
