#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33034D1BEA687950_OFFSET UNITYSDK_OFFSET(0x18DC9A60)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_D1DCC168F389BA4E_OFFSET UNITYSDK_OFFSET(0x18DC9990)
#define RPG_GAMECORE_RTBYISSKILLUSING__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC9A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsSkillUsing_TypeDefinitionIndex = 23239;

	class RtByIsSkillUsing : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1DCC168F389BA4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_D1DCC168F389BA4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33034D1BEA687950(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33034D1BEA687950_OFFSET))(a1, a2);
		}
	};
}
