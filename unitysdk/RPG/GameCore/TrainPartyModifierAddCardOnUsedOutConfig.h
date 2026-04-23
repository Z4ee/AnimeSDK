#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_METHOD_3_6F57B9A142B6C581_OFFSET UNITYSDK_OFFSET(0x190AB430)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_METHOD_3_BA3030EB43A742E5_OFFSET UNITYSDK_OFFSET(0x190AB480)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190AB470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddCardOnUsedOutConfig_TypeDefinitionIndex = 17217;

	class TrainPartyModifierAddCardOnUsedOutConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F57B9A142B6C581(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_METHOD_3_6F57B9A142B6C581_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA3030EB43A742E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_METHOD_3_BA3030EB43A742E5_OFFSET))(a1, a2);
		}
	};
}
