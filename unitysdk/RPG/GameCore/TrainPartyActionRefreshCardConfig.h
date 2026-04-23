#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_129C1C071DF9A7A2_OFFSET UNITYSDK_OFFSET(0x190A6520)
#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_D00C966B231B9AAB_OFFSET UNITYSDK_OFFSET(0x190A67D0)
#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190A64D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionRefreshCardConfig_TypeDefinitionIndex = 17172;

	class TrainPartyActionRefreshCardConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D00C966B231B9AAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_D00C966B231B9AAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_129C1C071DF9A7A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_METHOD_5_129C1C071DF9A7A2_OFFSET))(a1, a2);
		}
	};
}
