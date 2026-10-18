#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFINALITYBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D364E60)
#define RPG_GAMECORE_ACTIVITYFINALITYBATTLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3651E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFinalityBattleRow_TypeDefinitionIndex = 11604;

	class ActivityFinalityBattleRow : public ::System::Object
	{
	public:
		::System::String* EntranceBigIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* LeadingRoleList; // 0x18
		::System::String* EntranceSmallIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* LevelList; // 0x28
		::System::UInt32 PerfectRound; // 0x30
		::System::UInt32 TutorialGuideID; // 0x34
		::System::UInt32 ActivityModuleID; // 0x38
		::RPG::Client::TextID GroupTitle; // 0x40
		::System::UInt32 Order; // 0x50
		::System::UInt32 ID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFinalityBattleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFinalityBattleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
