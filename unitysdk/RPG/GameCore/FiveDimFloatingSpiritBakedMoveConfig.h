#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_0C8B3F013C3527AD_OFFSET UNITYSDK_OFFSET(0x1D690660)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_9140B00309972080_OFFSET UNITYSDK_OFFSET(0x1D690620)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D690650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritBakedMoveConfig_TypeDefinitionIndex = 16680;

	class FiveDimFloatingSpiritBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9140B00309972080(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_9140B00309972080_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C8B3F013C3527AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_0C8B3F013C3527AD_OFFSET))(a1, a2);
		}
	};
}
