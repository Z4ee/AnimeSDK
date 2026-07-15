#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_040DF01F8B602825_OFFSET UNITYSDK_OFFSET(0x1A3F68E0)
#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_B3972B4F140B1124_OFFSET UNITYSDK_OFFSET(0x1A3F8A40)
#define RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F68D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSingleClickQTEConfig_TypeDefinitionIndex = 22507;

	class BattleSingleClickQTEConfig : public ::RPG::GameCore::BattleQTEBaseConfig
	{
	public:
		::System::Boolean SkipInAutoBattle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3972B4F140B1124(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleSingleClickQTEConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleSingleClickQTEConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_B3972B4F140B1124_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_040DF01F8B602825(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleSingleClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleSingleClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESINGLECLICKQTECONFIG_METHOD_3_040DF01F8B602825_OFFSET))(a1, a2);
		}
	};
}
