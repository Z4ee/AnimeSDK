#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTCONFIG_METHOD_3_5DDC298154A9FFC9_OFFSET UNITYSDK_OFFSET(0x171C5B00)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTCONFIG_METHOD_3_C91D52458A108860_OFFSET UNITYSDK_OFFSET(0x171C5BD0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountConfig_TypeDefinitionIndex = 17707;

	class FateModifierAddTraitCountConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DDC298154A9FFC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTCONFIG_METHOD_3_5DDC298154A9FFC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C91D52458A108860(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTraitCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTraitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTCONFIG_METHOD_3_C91D52458A108860_OFFSET))(a1, a2);
		}
	};
}
