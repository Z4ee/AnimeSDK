#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSlotConstValue.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetLineupPlacementConfig; }

#define RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_METHOD_3_53FBBBEB99C0CDE7_OFFSET UNITYSDK_OFFSET(0x1D8DD930)
#define RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_METHOD_3_9D7DD313E1750422_OFFSET UNITYSDK_OFFSET(0x1D8DD8F0)
#define RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetTeamFollowSlotConstValue_TypeDefinitionIndex = 15618;

	class PetTeamFollowSlotConstValue : public ::RPG::GameCore::FollowSlotConstValue
	{
	public:
		::RPG::GameCore::PetLineupPlacementConfig* PetLineupPlacement; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D7DD313E1750422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetTeamFollowSlotConstValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetTeamFollowSlotConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_METHOD_3_9D7DD313E1750422_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53FBBBEB99C0CDE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetTeamFollowSlotConstValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetTeamFollowSlotConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETTEAMFOLLOWSLOTCONSTVALUE_METHOD_3_53FBBBEB99C0CDE7_OFFSET))(a1, a2);
		}
	};
}
