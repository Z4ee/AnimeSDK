#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERSETGRIDIDBETWEENCONFIG_METHOD_3_787AA22114D35FCD_OFFSET UNITYSDK_OFFSET(0x1D5DF090)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETGRIDIDBETWEENCONFIG_METHOD_3_E90CCFABF46E1CB1_OFFSET UNITYSDK_OFFSET(0x1D5DED50)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETGRIDIDBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DED40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSetGridIdBetweenConfig_TypeDefinitionIndex = 17884;

	class TrainPartyModifierSetGridIdBetweenConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETGRIDIDBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_787AA22114D35FCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSetGridIdBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSetGridIdBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETGRIDIDBETWEENCONFIG_METHOD_3_787AA22114D35FCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E90CCFABF46E1CB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSetGridIdBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSetGridIdBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETGRIDIDBETWEENCONFIG_METHOD_3_E90CCFABF46E1CB1_OFFSET))(a1, a2);
		}
	};
}
