#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameViewComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_B07B6CB33250D2C4_OFFSET UNITYSDK_OFFSET(0x1D104490)
#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_C8A5844369152F53_OFFSET UNITYSDK_OFFSET(0x1D104450)
#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D104480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStageViewConfig_TypeDefinitionIndex = 18335;

	class FiveDimStageViewConfig : public ::RPG::GameCore::LittleGameViewComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C8A5844369152F53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStageViewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStageViewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_C8A5844369152F53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B07B6CB33250D2C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStageViewConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStageViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_METHOD_4_B07B6CB33250D2C4_OFFSET))(a1, a2);
		}
	};
}
