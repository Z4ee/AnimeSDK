#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_462A6EBBC8CCDB97_OFFSET UNITYSDK_OFFSET(0x1D08D2E0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_FD18768773F2467B_OFFSET UNITYSDK_OFFSET(0x1D08D330)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByLineupAvatarConfig_TypeDefinitionIndex = 19054;

	class FateModifierAddTraitCountByLineupAvatarConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_462A6EBBC8CCDB97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_462A6EBBC8CCDB97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD18768773F2467B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_FD18768773F2467B_OFFSET))(a1, a2);
		}
	};
}
