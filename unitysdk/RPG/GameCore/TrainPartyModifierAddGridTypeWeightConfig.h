#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_METHOD_3_0CE85E176220403F_OFFSET UNITYSDK_OFFSET(0x1D5DE510)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_METHOD_3_6E0BE9FC9B41AC43_OFFSET UNITYSDK_OFFSET(0x1D5DE560)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DE550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddGridTypeWeightConfig_TypeDefinitionIndex = 17888;

	class TrainPartyModifierAddGridTypeWeightConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CE85E176220403F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_METHOD_3_0CE85E176220403F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E0BE9FC9B41AC43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_METHOD_3_6E0BE9FC9B41AC43_OFFSET))(a1, a2);
		}
	};
}
