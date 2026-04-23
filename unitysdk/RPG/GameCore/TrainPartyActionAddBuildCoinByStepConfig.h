#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_5_573A02DE81AB0F1B_OFFSET UNITYSDK_OFFSET(0x190A50F0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_5_B18DBF0E99E1BB2D_OFFSET UNITYSDK_OFFSET(0x190A5010)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190A50A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddBuildCoinByStepConfig_TypeDefinitionIndex = 17177;

	class TrainPartyActionAddBuildCoinByStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Int32 AddNumPerStep; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B18DBF0E99E1BB2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_5_B18DBF0E99E1BB2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_573A02DE81AB0F1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_5_573A02DE81AB0F1B_OFFSET))(a1, a2);
		}
	};
}
