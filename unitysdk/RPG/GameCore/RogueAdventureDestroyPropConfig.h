#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_METHOD_3_97D22BDB99681BE4_OFFSET UNITYSDK_OFFSET(0x18CE7110)
#define RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_METHOD_3_D0E437E4310F06A8_OFFSET UNITYSDK_OFFSET(0x18CE7180)
#define RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureDestroyPropConfig_TypeDefinitionIndex = 16987;

	class RogueAdventureDestroyPropConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0E437E4310F06A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureDestroyPropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureDestroyPropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_METHOD_3_D0E437E4310F06A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97D22BDB99681BE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureDestroyPropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureDestroyPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREDESTROYPROPCONFIG_METHOD_3_97D22BDB99681BE4_OFFSET))(a1, a2);
		}
	};
}
