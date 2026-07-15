#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_METHOD_3_154C2B615961802F_OFFSET UNITYSDK_OFFSET(0x1C161BF0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_METHOD_3_5EDB2F3BA2D771F3_OFFSET UNITYSDK_OFFSET(0x1C161910)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C161900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierReplaceGridAfterGeneratedConfig_TypeDefinitionIndex = 17372;

	class TrainPartyModifierReplaceGridAfterGeneratedConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_154C2B615961802F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_METHOD_3_154C2B615961802F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EDB2F3BA2D771F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_METHOD_3_5EDB2F3BA2D771F3_OFFSET))(a1, a2);
		}
	};
}
