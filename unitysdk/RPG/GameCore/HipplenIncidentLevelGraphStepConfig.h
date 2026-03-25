#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_METHOD_3_105FC3801429951C_OFFSET UNITYSDK_OFFSET(0x172AE850)
#define RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_METHOD_3_41B09ED233523A44_OFFSET UNITYSDK_OFFSET(0x172AE8B0)
#define RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172AE8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentLevelGraphStepConfig_TypeDefinitionIndex = 15393;

	class HipplenIncidentLevelGraphStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::RPG::GameCore::HipplenIncidentStepConfig* Next; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_105FC3801429951C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_METHOD_3_105FC3801429951C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41B09ED233523A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTLEVELGRAPHSTEPCONFIG_METHOD_3_41B09ED233523A44_OFFSET))(a1, a2);
		}
	};
}
