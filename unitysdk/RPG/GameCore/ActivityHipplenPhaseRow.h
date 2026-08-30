#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_4B6B1EA474B8E7B0;
class Class_1_637CF5391C15E01B;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA093D0)
#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA09900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenPhaseRow_TypeDefinitionIndex = 11610;

	class ActivityHipplenPhaseRow : public ::System::Object
	{
	public:
		::System::String* MiniGameAreaPath; // 0x10
		::Il2CppArray<::Class_1_637CF5391C15E01B*>* UnlockAutoTrialConditions; // 0x18
		::Il2CppArray<::System::UInt32>* StatRange; // 0x20
		::Il2CppArray<::Class_1_4B6B1EA474B8E7B0*>* StatGrade; // 0x28
		::Il2CppArray<::System::UInt32>* DailyAgendaIDs; // 0x30
		::System::UInt32 CycleID; // 0x38
		::System::UInt32 TrialGameID; // 0x3C
		::System::UInt32 ActionPointsTotal; // 0x40
		::System::Boolean BackwardTrialClosePage; // 0x44
		::System::Boolean ForwardTrialClosePage; // 0x45
		::System::UInt32 GrowthPhaseID; // 0x48
		::RPG::Client::TextID TrailTargetDesc; // 0x50
		::System::UInt32 ForwardTrialSubMissionID; // 0x60
		::System::UInt32 PhaseType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
