#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/MusicComboType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_4_045C95F9FA08371E_OFFSET UNITYSDK_OFFSET(0x1D6DB9F0)
#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_4_CB5877BC0FA329A1_OFFSET UNITYSDK_OFFSET(0x1D6DBA30)
#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DBA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShowMusicComboAction_TypeDefinitionIndex = 18712;

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

		static ::System::Void Method_4_045C95F9FA08371E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimShowMusicComboAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimShowMusicComboAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_4_045C95F9FA08371E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB5877BC0FA329A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimShowMusicComboAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimShowMusicComboAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_METHOD_4_CB5877BC0FA329A1_OFFSET))(a1, a2);
		}
	};
}
