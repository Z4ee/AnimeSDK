#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_GET_ELIMINATEDTEAMS_OFFSET UNITYSDK_OFFSET(0x174D6100)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_GET_SETTLEREASON_OFFSET UNITYSDK_OFFSET(0x174D60E0)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_SET_ELIMINATEDTEAMS_OFFSET UNITYSDK_OFFSET(0x174D6110)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_SET_SETTLEREASON_OFFSET UNITYSDK_OFFSET(0x174D60F0)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683__CTOR_OFFSET UNITYSDK_OFFSET(0x174D4EB0)

inline static constexpr unsigned int Class_1_07F40C97F0C61AD9_Class_1_7A8F3ACAA9E3A683_TypeDefinitionIndex = 73651;

class Class_1_07F40C97F0C61AD9_Class_1_7A8F3ACAA9E3A683 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* _EliminatedTeams_k__BackingField; // 0x10
	::RPG::Client::LittleGame::ChimeraDuelSettleReason _SettleReason_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChimeraDuelSettleReason get_SettleReason()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuelSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_GET_SETTLEREASON_OFFSET))(this);
	}

	::System::Void set_SettleReason(::RPG::Client::LittleGame::ChimeraDuelSettleReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelSettleReason))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_SET_SETTLEREASON_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* get_EliminatedTeams()
	{
		return ((::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_GET_ELIMINATEDTEAMS_OFFSET))(this);
	}

	::System::Void set_EliminatedTeams(::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>*))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_7A8F3ACAA9E3A683_SET_ELIMINATEDTEAMS_OFFSET))(this, a1);
	}
};
