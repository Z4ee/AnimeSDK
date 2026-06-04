#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG_METHOD_2_FB9351093B15A38A_OFFSET UNITYSDK_OFFSET(0x19760510)
#define RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19760550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorBattleAreaSyncTemplateConfig_TypeDefinitionIndex = 16551;

	class FloorBattleAreaSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB9351093B15A38A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorBattleAreaSyncTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorBattleAreaSyncTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORBATTLEAREASYNCTEMPLATECONFIG_METHOD_2_FB9351093B15A38A_OFFSET))(a1, a2);
		}
	};
}
