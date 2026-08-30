#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationRefreshReason.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TeamFormationComponent; }

#define STRUCT_2_F4D9BAD63BCFCC50_METHOD_2_2E42AE0F9A33183C_OFFSET UNITYSDK_OFFSET(0x157C8B90)
#define STRUCT_2_F4D9BAD63BCFCC50_METHOD_2_CA73D577EAB50ADB_OFFSET UNITYSDK_OFFSET(0x2DEE9B0)

inline static constexpr unsigned int Struct_2_F4D9BAD63BCFCC50_TypeDefinitionIndex = 57871;

struct alignas(8) Struct_2_F4D9BAD63BCFCC50
{
	::RPG::GameCore::CustomTeamFormationRefreshReason NFKJAMNLPLO; // 0x10
	::RPG::GameCore::TeamFormationType CGBJOAJEMKN; // 0x14
	::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x18
	::RPG::GameCore::GameEntity* BCBBPMNBGEI; // 0x20
	::RPG::GameCore::SkillData* CEODEDALAHK; // 0x28
	::RPG::GameCore::VCameraState FIOICBCELHD; // 0x30
	::System::Boolean ECDCNLHOLPG; // 0x34

	static ::Struct_2_F4D9BAD63BCFCC50 Method_2_2E42AE0F9A33183C(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::CustomTeamFormationRefreshReason a2)
	{
		return ((::Struct_2_F4D9BAD63BCFCC50(*)(::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::CustomTeamFormationRefreshReason))((::PBYTE)hIl2Cpp + STRUCT_2_F4D9BAD63BCFCC50_METHOD_2_2E42AE0F9A33183C_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA73D577EAB50ADB(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::CustomTeamFormationRefreshReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::CustomTeamFormationRefreshReason))((::PBYTE)hIl2Cpp + STRUCT_2_F4D9BAD63BCFCC50_METHOD_2_CA73D577EAB50ADB_OFFSET))(this, a1, a2);
	}
};
