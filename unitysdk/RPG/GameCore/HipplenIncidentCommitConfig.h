#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }

#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_METHOD_3_8FE97D121DEC0C88_OFFSET UNITYSDK_OFFSET(0x172AE0C0)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_METHOD_3_AE31E4728DBA66BC_OFFSET UNITYSDK_OFFSET(0x172ADFF0)
#define RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172AE0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentCommitConfig_TypeDefinitionIndex = 15390;

	class HipplenIncidentCommitConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::RPG::GameCore::HipplenIncidentSettlementConfig* Settlement; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE31E4728DBA66BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentCommitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentCommitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_METHOD_3_AE31E4728DBA66BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FE97D121DEC0C88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentCommitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentCommitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTCOMMITCONFIG_METHOD_3_8FE97D121DEC0C88_OFFSET))(a1, a2);
		}
	};
}
