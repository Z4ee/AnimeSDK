#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_5_83A7ED8E84CAE601_OFFSET UNITYSDK_OFFSET(0x1C15CEA0)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_5_CE8064D885BB6365_OFFSET UNITYSDK_OFFSET(0x1C15CDB0)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15CDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifyGridTypeConfig_TypeDefinitionIndex = 17348;

	class TrainPartyActionModifyGridTypeConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_83A7ED8E84CAE601(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_5_83A7ED8E84CAE601_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CE8064D885BB6365(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_5_CE8064D885BB6365_OFFSET))(a1, a2);
		}
	};
}
