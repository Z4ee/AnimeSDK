#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_137ECCD8BE77E11F_OFFSET UNITYSDK_OFFSET(0x1D40E6E0)
#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_C8AFC70DF9E28090_OFFSET UNITYSDK_OFFSET(0x1D40E780)
#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40E740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillTargetInfo_TypeDefinitionIndex = 22460;

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

		static ::System::Void Method_3_137ECCD8BE77E11F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillTargetInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillTargetInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_137ECCD8BE77E11F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8AFC70DF9E28090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillTargetInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillTargetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_METHOD_3_C8AFC70DF9E28090_OFFSET))(a1, a2);
		}
	};
}
