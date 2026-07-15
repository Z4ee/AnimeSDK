#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_METHOD_3_31C9171DC5884F4C_OFFSET UNITYSDK_OFFSET(0x1C1497B0)
#define RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_METHOD_3_F62640E469B6837E_OFFSET UNITYSDK_OFFSET(0x1C149750)
#define RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1497A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersTutorialComponentConfig_TypeDefinitionIndex = 18206;

	class TeamTowersTutorialComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::String* NodeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F62640E469B6837E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersTutorialComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersTutorialComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_METHOD_3_F62640E469B6837E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_31C9171DC5884F4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersTutorialComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersTutorialComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSTUTORIALCOMPONENTCONFIG_METHOD_3_31C9171DC5884F4C_OFFSET))(a1, a2);
		}
	};
}
