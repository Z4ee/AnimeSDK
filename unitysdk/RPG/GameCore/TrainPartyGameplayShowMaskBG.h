#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_32A73084D8CBBA2B_OFFSET UNITYSDK_OFFSET(0x1D5DD990)
#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_3F86E7E2C2DC4332_OFFSET UNITYSDK_OFFSET(0x1D5DD950)
#define RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DD980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGameplayShowMaskBG_TypeDefinitionIndex = 22122;

	class TrainPartyGameplayShowMaskBG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Single TransitionTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F86E7E2C2DC4332(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_3F86E7E2C2DC4332_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32A73084D8CBBA2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGAMEPLAYSHOWMASKBG_METHOD_3_32A73084D8CBBA2B_OFFSET))(a1, a2);
		}
	};
}
