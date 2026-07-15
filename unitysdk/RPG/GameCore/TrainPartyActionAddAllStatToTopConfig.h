#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_5_8796175FC6D25D07_OFFSET UNITYSDK_OFFSET(0x1C15C070)
#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_5_BBFF9E826BD0F983_OFFSET UNITYSDK_OFFSET(0x1C15C020)
#define RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddAllStatToTopConfig_TypeDefinitionIndex = 17353;

	class TrainPartyActionAddAllStatToTopConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BBFF9E826BD0F983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_5_BBFF9E826BD0F983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8796175FC6D25D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddAllStatToTopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDALLSTATTOTOPCONFIG_METHOD_5_8796175FC6D25D07_OFFSET))(a1, a2);
		}
	};
}
