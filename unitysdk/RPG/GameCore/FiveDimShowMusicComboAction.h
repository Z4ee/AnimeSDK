#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/MusicComboType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_3_9E5364967C946470_OFFSET UNITYSDK_OFFSET(0x1D87ABE0)
#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_3_F993B06D4FBB965F_OFFSET UNITYSDK_OFFSET(0x1D87ABA0)
#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87ABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShowMusicComboAction_TypeDefinitionIndex = 18502;

	class FiveDimShowMusicComboAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::MusicComboType ComboType; // 0x10
		::System::Boolean OnlyFollowAtStart; // 0x14
		::System::Boolean FollowPlayer; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F993B06D4FBB965F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimShowMusicComboAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimShowMusicComboAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_3_F993B06D4FBB965F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E5364967C946470(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimShowMusicComboAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimShowMusicComboAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_3_9E5364967C946470_OFFSET))(a1, a2);
		}
	};
}
