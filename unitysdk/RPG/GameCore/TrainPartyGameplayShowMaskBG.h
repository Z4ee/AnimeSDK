#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_32A73084D8CBBA2B_OFFSET UNITYSDK_OFFSET(0x190AA930)
#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_346299B982BCF03A_OFFSET UNITYSDK_OFFSET(0x190AA8B0)
#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG__CTOR_OFFSET UNITYSDK_OFFSET(0x190AA900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGameplayShowMaskBG_TypeDefinitionIndex = 21251;

	class TrainPartyGameplayShowMaskBG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Single TransitionTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_346299B982BCF03A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_346299B982BCF03A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32A73084D8CBBA2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_32A73084D8CBBA2B_OFFSET))(a1, a2);
		}
	};
}
