#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG_METHOD_2_610744A499980B69_OFFSET UNITYSDK_OFFSET(0x1C05DC70)
#define RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C05DDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EraFlipperBattleAreaOverrideConfig_TypeDefinitionIndex = 15965;

	class EraFlipperBattleAreaOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EraStateType AffectEraState; // 0x10
		::System::UInt32 AffectBattleAreaID; // 0x14
		::System::UInt32 OverrideConfigID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_610744A499980B69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EraFlipperBattleAreaOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EraFlipperBattleAreaOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERBATTLEAREAOVERRIDECONFIG_METHOD_2_610744A499980B69_OFFSET))(a1, a2);
		}
	};
}
