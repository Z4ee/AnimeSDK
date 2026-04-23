#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_METHOD_3_388B71458FC90DBB_OFFSET UNITYSDK_OFFSET(0x190ABF30)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_METHOD_3_9D65B1E361A4073F_OFFSET UNITYSDK_OFFSET(0x190ABC10)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190ABC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSetCardIdBetweenConfig_TypeDefinitionIndex = 17199;

	class TrainPartyModifierSetCardIdBetweenConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_388B71458FC90DBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_METHOD_3_388B71458FC90DBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D65B1E361A4073F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_METHOD_3_9D65B1E361A4073F_OFFSET))(a1, a2);
		}
	};
}
