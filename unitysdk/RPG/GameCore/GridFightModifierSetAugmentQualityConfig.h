#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_METHOD_3_1AF661A3CCFC0968_OFFSET UNITYSDK_OFFSET(0x189BEF80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_METHOD_3_C2C66C337A295A51_OFFSET UNITYSDK_OFFSET(0x189BEEB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BEF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetAugmentQualityConfig_TypeDefinitionIndex = 18475;

	class GridFightModifierSetAugmentQualityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2C66C337A295A51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_METHOD_3_C2C66C337A295A51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1AF661A3CCFC0968(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_METHOD_3_1AF661A3CCFC0968_OFFSET))(a1, a2);
		}
	};
}
