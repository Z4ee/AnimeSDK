#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_129C1C071DF9A7A2_OFFSET UNITYSDK_OFFSET(0x1D532180)
#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_DA4D5B35F3C13B06_OFFSET UNITYSDK_OFFSET(0x1D5322B0)
#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D532170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionRefreshCardConfig_TypeDefinitionIndex = 17860;

	class TrainPartyActionRefreshCardConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DA4D5B35F3C13B06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_DA4D5B35F3C13B06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_129C1C071DF9A7A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_129C1C071DF9A7A2_OFFSET))(a1, a2);
		}
	};
}
