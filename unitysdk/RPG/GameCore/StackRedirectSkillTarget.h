#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKREDIRECTSKILLTARGET_METHOD_3_80FE99BD2E991AD4_OFFSET UNITYSDK_OFFSET(0x1D0B9240)
#define RPG_GAMECORE_STACKREDIRECTSKILLTARGET_METHOD_3_AD0A4EB6DC17E756_OFFSET UNITYSDK_OFFSET(0x1D0B93A0)
#define RPG_GAMECORE_STACKREDIRECTSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B9300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackRedirectSkillTarget_TypeDefinitionIndex = 23356;

	class StackRedirectSkillTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Probability; // 0x18
		::RPG::GameCore::TargetEvaluator* RedirectTargetType; // 0x20
		::RPG::GameCore::RedirectSkillTargetAffectTeam AffectTeam; // 0x28
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucceed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDIRECTSKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80FE99BD2E991AD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackRedirectSkillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackRedirectSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDIRECTSKILLTARGET_METHOD_3_80FE99BD2E991AD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD0A4EB6DC17E756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackRedirectSkillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackRedirectSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDIRECTSKILLTARGET_METHOD_3_AD0A4EB6DC17E756_OFFSET))(a1, a2);
		}
	};
}
