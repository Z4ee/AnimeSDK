#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentSettlementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_METHOD_3_A0F99B48A8D4224D_OFFSET UNITYSDK_OFFSET(0x1D2038A0)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_METHOD_3_AC403B2704E56C7F_OFFSET UNITYSDK_OFFSET(0x1D203900)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2038F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomSettlementConfig_TypeDefinitionIndex = 16626;

	class HipplenIncidentRandomSettlementConfig : public ::RPG::GameCore::HipplenIncidentSettlementConfig
	{
	public:
		::System::UInt32 Weight; // 0x28
		::System::UInt32 Ratio; // 0x2C
		::System::Boolean IsSuccess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0F99B48A8D4224D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_METHOD_3_A0F99B48A8D4224D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC403B2704E56C7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSETTLEMENTCONFIG_METHOD_3_AC403B2704E56C7F_OFFSET))(a1, a2);
		}
	};
}
