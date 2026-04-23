#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_METHOD_3_0C9CE99EF94D1513_OFFSET UNITYSDK_OFFSET(0x190ABE70)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_METHOD_3_501E7401C2F9CD57_OFFSET UNITYSDK_OFFSET(0x190ABBB0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190ABBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierRefreshCardStepOnRoundFinishConfig_TypeDefinitionIndex = 17209;

	class TrainPartyModifierRefreshCardStepOnRoundFinishConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C9CE99EF94D1513(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_METHOD_3_0C9CE99EF94D1513_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_501E7401C2F9CD57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_METHOD_3_501E7401C2F9CD57_OFFSET))(a1, a2);
		}
	};
}
