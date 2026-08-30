#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_METHOD_3_05FB32B6BEB2BB65_OFFSET UNITYSDK_OFFSET(0x1D2B3D70)
#define RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_METHOD_3_FBB29ECEC90C3D80_OFFSET UNITYSDK_OFFSET(0x1D2B3DB0)
#define RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B3DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateTreasureChallengeProgress_TypeDefinitionIndex = 20232;

	class UpdateTreasureChallengeProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidTargetID; // 0x18
		::System::Boolean IsIncrease; // 0x1C
		::System::UInt32 DeltaValue; // 0x20
		::System::Boolean UseDynamicRaidTargetID; // 0x24
		::RPG::GameCore::DynamicString* DynamicRaidTargetID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05FB32B6BEB2BB65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateTreasureChallengeProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateTreasureChallengeProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_METHOD_3_05FB32B6BEB2BB65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBB29ECEC90C3D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateTreasureChallengeProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateTreasureChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_METHOD_3_FBB29ECEC90C3D80_OFFSET))(a1, a2);
		}
	};
}
