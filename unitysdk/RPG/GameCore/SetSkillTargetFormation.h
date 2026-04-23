#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NormalTeamFormationServantState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFormationConfig; }

#define RPG_GAMECORE_SETSKILLTARGETFORMATION_METHOD_3_613B037FE6B31A8A_OFFSET UNITYSDK_OFFSET(0x18E414C0)
#define RPG_GAMECORE_SETSKILLTARGETFORMATION_METHOD_3_99C9F1B17F962EE0_OFFSET UNITYSDK_OFFSET(0x18E413F0)
#define RPG_GAMECORE_SETSKILLTARGETFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E41470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillTargetFormation_TypeDefinitionIndex = 21377;

	class SetSkillTargetFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x20
		::RPG::GameCore::NormalTeamFormationServantState ServantState; // 0x28
		::RPG::MVector3 CenterOffset; // 0x2C
		::System::Boolean IgnoreHitBoxRadius; // 0x38
		::System::Single CenterRootYaw; // 0x3C
		::RPG::GameCore::TargetFormationConfig* TargetFormation; // 0x40
		::Il2CppArray<::RPG::GameCore::TargetFormationConfig*>* LeftSideFormations; // 0x48
		::Il2CppArray<::RPG::GameCore::TargetFormationConfig*>* RightSideFormations; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99C9F1B17F962EE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillTargetFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillTargetFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATION_METHOD_3_99C9F1B17F962EE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_613B037FE6B31A8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATION_METHOD_3_613B037FE6B31A8A_OFFSET))(a1, a2);
		}
	};
}
