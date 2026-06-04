#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameViewComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_B07B6CB33250D2C4_OFFSET UNITYSDK_OFFSET(0x19758D90)
#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_DF6BF463C1DCF9B9_OFFSET UNITYSDK_OFFSET(0x19758D20)
#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19758D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStageViewConfig_TypeDefinitionIndex = 17642;

	class FiveDimStageViewConfig : public ::RPG::GameCore::LittleGameViewComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF6BF463C1DCF9B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStageViewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStageViewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_DF6BF463C1DCF9B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B07B6CB33250D2C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStageViewConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStageViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_B07B6CB33250D2C4_OFFSET))(a1, a2);
		}
	};
}
