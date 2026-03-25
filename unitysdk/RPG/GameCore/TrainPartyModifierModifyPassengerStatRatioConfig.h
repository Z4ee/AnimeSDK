#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_METHOD_3_A44A26093E9F91E9_OFFSET UNITYSDK_OFFSET(0x178AD380)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_METHOD_3_ADB9A763B5E9096D_OFFSET UNITYSDK_OFFSET(0x178AD100)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178AD0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierModifyPassengerStatRatioConfig_TypeDefinitionIndex = 16618;

	class TrainPartyModifierModifyPassengerStatRatioConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A44A26093E9F91E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_METHOD_3_A44A26093E9F91E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADB9A763B5E9096D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_METHOD_3_ADB9A763B5E9096D_OFFSET))(a1, a2);
		}
	};
}
