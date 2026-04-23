#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_METHOD_3_4705E89DEA220CB3_OFFSET UNITYSDK_OFFSET(0x190ABC50)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_METHOD_3_FD67C3582A28A5EF_OFFSET UNITYSDK_OFFSET(0x190ABFB0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190ABC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSetMeetingGridConfig_TypeDefinitionIndex = 17198;

	class TrainPartyModifierSetMeetingGridConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD67C3582A28A5EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_METHOD_3_FD67C3582A28A5EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4705E89DEA220CB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_METHOD_3_4705E89DEA220CB3_OFFSET))(a1, a2);
		}
	};
}
