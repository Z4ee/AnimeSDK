#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_29F7CC2D03F1111B_OFFSET UNITYSDK_OFFSET(0x1D85E500)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_5C6F160E4A5A76BE_OFFSET UNITYSDK_OFFSET(0x1D85E4C0)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritBakedMoveConfig_TypeDefinitionIndex = 16504;

	class FiveDimFloatingSpiritBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C6F160E4A5A76BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_5C6F160E4A5A76BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29F7CC2D03F1111B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITBAKEDMOVECONFIG_METHOD_3_29F7CC2D03F1111B_OFFSET))(a1, a2);
		}
	};
}
