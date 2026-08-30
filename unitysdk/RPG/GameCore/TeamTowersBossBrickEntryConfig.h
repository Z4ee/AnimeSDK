#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG_METHOD_2_E43B2EA901F3A5DE_OFFSET UNITYSDK_OFFSET(0x1D5C4910)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C4A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossBrickEntryConfig_TypeDefinitionIndex = 18733;

	class TeamTowersBossBrickEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BrickIndex; // 0x10
		::System::Single PositionX; // 0x14
		::System::Single PositionY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E43B2EA901F3A5DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersBossBrickEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersBossBrickEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG_METHOD_2_E43B2EA901F3A5DE_OFFSET))(a1, a2);
		}
	};
}
