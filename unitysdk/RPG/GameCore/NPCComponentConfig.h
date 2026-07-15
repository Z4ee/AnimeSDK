#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCCOMPONENTCONFIG_METHOD_3_1F55C4449312A662_OFFSET UNITYSDK_OFFSET(0x1BAF0490)
#define RPG_GAMECORE_NPCCOMPONENTCONFIG_METHOD_3_BD4A19436BEAECE3_OFFSET UNITYSDK_OFFSET(0x1BAF03F0)
#define RPG_GAMECORE_NPCCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF0480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponentConfig_TypeDefinitionIndex = 15917;

	class NPCComponentConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD4A19436BEAECE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENTCONFIG_METHOD_3_BD4A19436BEAECE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F55C4449312A662(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENTCONFIG_METHOD_3_1F55C4449312A662_OFFSET))(a1, a2);
		}
	};
}
