#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NormalTeamFormationServantState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFormationPosConfig; }

#define RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_METHOD_3_69155FD652E32A09_OFFSET UNITYSDK_OFFSET(0x1D50D680)
#define RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_METHOD_3_B9C6A6FDB5EFD9C4_OFFSET UNITYSDK_OFFSET(0x1D50D720)
#define RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50D6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillTargetFormationByPos_TypeDefinitionIndex = 22248;

	class SetSkillTargetFormationByPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomTargetType; // 0x20
		::RPG::GameCore::NormalTeamFormationServantState ServantState; // 0x28
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x30
		::RPG::MVector3 CenterOffset; // 0x38
		::System::Boolean IsIncludeTempLeave; // 0x44
		::System::Boolean IgnoreHitBoxRadius; // 0x45
		::System::Boolean SetBodyPartPos; // 0x46
		::System::Boolean BodyPartSortByFormationIndex; // 0x47
		::System::Boolean SyncFormationPos; // 0x48
		::System::Boolean RefreshFormationCenter; // 0x49
		::System::Single CenterRootYaw; // 0x4C
		::RPG::GameCore::TargetFormationPosConfig* TargetFormation; // 0x50
		::Il2CppArray<::RPG::GameCore::TargetFormationPosConfig*>* LeftSideFormations; // 0x58
		::Il2CppArray<::RPG::GameCore::TargetFormationPosConfig*>* RightSideFormations; // 0x60
		::RPG::GameCore::TargetEvaluator* SpecifyTargetFormationEntity; // 0x68
		::System::Boolean IgnoreCharacterRootOffset; // 0x70
		::Il2CppArray<::System::Single>* DeltaMultiplier; // 0x78
		::RPG::MVector3 FormationDeltaMaxRange; // 0x80
		::RPG::MVector3 FormationDeltaMinRange; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69155FD652E32A09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillTargetFormationByPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillTargetFormationByPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_METHOD_3_69155FD652E32A09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9C6A6FDB5EFD9C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLTARGETFORMATIONBYPOS_METHOD_3_B9C6A6FDB5EFD9C4_OFFSET))(a1, a2);
		}
	};
}
