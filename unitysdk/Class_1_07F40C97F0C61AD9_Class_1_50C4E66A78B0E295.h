#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_GET_ELIMINATEDTEAMS_OFFSET UNITYSDK_OFFSET(0xA456A90)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_GET_SETTLEREASON_OFFSET UNITYSDK_OFFSET(0xA456A70)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_SET_ELIMINATEDTEAMS_OFFSET UNITYSDK_OFFSET(0xA456AA0)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_SET_SETTLEREASON_OFFSET UNITYSDK_OFFSET(0xA456A80)
#define CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295__CTOR_OFFSET UNITYSDK_OFFSET(0xA4558B0)

inline static constexpr unsigned int Class_1_07F40C97F0C61AD9_Class_1_50C4E66A78B0E295_TypeDefinitionIndex = 63148;

class Class_1_07F40C97F0C61AD9_Class_1_50C4E66A78B0E295 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* _EliminatedTeams_k__BackingField; // 0x10
	::RPG::Client::LittleGame::ChimeraDuelSettleReason _SettleReason_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChimeraDuelSettleReason get_SettleReason()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuelSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_GET_SETTLEREASON_OFFSET))(this);
	}

	::System::Void set_SettleReason(::RPG::Client::LittleGame::ChimeraDuelSettleReason value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelSettleReason))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_SET_SETTLEREASON_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* get_EliminatedTeams()
	{
		return ((::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_GET_ELIMINATEDTEAMS_OFFSET))(this);
	}

	::System::Void set_EliminatedTeams(::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraDuelTeamType>*))((::PBYTE)hIl2Cpp + CLASS_1_07F40C97F0C61AD9_CLASS_1_50C4E66A78B0E295_SET_ELIMINATEDTEAMS_OFFSET))(this, value);
	}
};
