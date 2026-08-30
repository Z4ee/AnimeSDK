#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentOptionConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_METHOD_3_F86649996E9CCC17_OFFSET UNITYSDK_OFFSET(0x1D202D00)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_METHOD_3_F9A0C8B7EC4E2793_OFFSET UNITYSDK_OFFSET(0x1D202CA0)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D202CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentCommitOptionConfig_TypeDefinitionIndex = 16634;

	class HipplenIncidentCommitOptionConfig : public ::RPG::GameCore::HipplenIncidentOptionConfig
	{
	public:
		::RPG::GameCore::HipplenIncidentSettlementConfig* Settlement; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9A0C8B7EC4E2793(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentCommitOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentCommitOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_METHOD_3_F9A0C8B7EC4E2793_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F86649996E9CCC17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentCommitOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentCommitOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITOPTIONCONFIG_METHOD_3_F86649996E9CCC17_OFFSET))(a1, a2);
		}
	};
}
