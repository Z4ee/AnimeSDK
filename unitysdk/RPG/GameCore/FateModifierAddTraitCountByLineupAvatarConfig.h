#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_6B827B61F0BB1062_OFFSET UNITYSDK_OFFSET(0x188D3110)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_FD18768773F2467B_OFFSET UNITYSDK_OFFSET(0x188D31E0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D3190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByLineupAvatarConfig_TypeDefinitionIndex = 18322;

	class FateModifierAddTraitCountByLineupAvatarConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B827B61F0BB1062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_6B827B61F0BB1062_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD18768773F2467B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_METHOD_3_FD18768773F2467B_OFFSET))(a1, a2);
		}
	};
}
