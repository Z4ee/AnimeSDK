#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMTOWERSIVYBLOCKCOMPONENTCONFIG_METHOD_3_03E41278EEFA2A6F_OFFSET UNITYSDK_OFFSET(0x1D5C5E40)
#define RPG_GAMECORE_TEAMTOWERSIVYBLOCKCOMPONENTCONFIG_METHOD_3_906504D229E277DD_OFFSET UNITYSDK_OFFSET(0x1D5C5EA0)
#define RPG_GAMECORE_TEAMTOWERSIVYBLOCKCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersIvyBlockComponentConfig_TypeDefinitionIndex = 18722;

	class TeamTowersIvyBlockComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::UInt32 MaxSpreadTimes; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSIVYBLOCKCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03E41278EEFA2A6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersIvyBlockComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersIvyBlockComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSIVYBLOCKCOMPONENTCONFIG_METHOD_3_03E41278EEFA2A6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_906504D229E277DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersIvyBlockComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersIvyBlockComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSIVYBLOCKCOMPONENTCONFIG_METHOD_3_906504D229E277DD_OFFSET))(a1, a2);
		}
	};
}
