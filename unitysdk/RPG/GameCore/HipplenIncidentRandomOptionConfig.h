#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentOptionConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenIncidentRandomSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_METHOD_3_0EEAD21C6FF35882_OFFSET UNITYSDK_OFFSET(0x18A03740)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_METHOD_3_CC5447A2C10649B0_OFFSET UNITYSDK_OFFSET(0x18A03B00)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A03730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomOptionConfig_TypeDefinitionIndex = 15916;

	class HipplenIncidentRandomOptionConfig : public ::RPG::GameCore::HipplenIncidentOptionConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenIncidentRandomSettlementConfig*>* Settlements; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC5447A2C10649B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_METHOD_3_CC5447A2C10649B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0EEAD21C6FF35882(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMOPTIONCONFIG_METHOD_3_0EEAD21C6FF35882_OFFSET))(a1, a2);
		}
	};
}
