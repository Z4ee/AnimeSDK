#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_5B280B0C7EFE25DC_OFFSET UNITYSDK_OFFSET(0x199DFA80)
#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_C8AFC70DF9E28090_OFFSET UNITYSDK_OFFSET(0x199DFB50)
#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x199DFB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillTargetInfo_TypeDefinitionIndex = 21476;

	class OverrideSkillTargetInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::RPG::GameCore::SkillTargetConfig* TargetInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B280B0C7EFE25DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillTargetInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillTargetInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_5B280B0C7EFE25DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8AFC70DF9E28090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillTargetInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillTargetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_C8AFC70DF9E28090_OFFSET))(a1, a2);
		}
	};
}
