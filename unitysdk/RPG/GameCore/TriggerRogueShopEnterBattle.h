#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_METHOD_3_5EACA8055EE13559_OFFSET UNITYSDK_OFFSET(0x1D294190)
#define RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_METHOD_3_F2C1CDAD9F2A395C_OFFSET UNITYSDK_OFFSET(0x1D2940C0)
#define RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D294180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueShopEnterBattle_TypeDefinitionIndex = 20809;

	class TriggerRogueShopEnterBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F2C1CDAD9F2A395C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueShopEnterBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueShopEnterBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_METHOD_3_F2C1CDAD9F2A395C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EACA8055EE13559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueShopEnterBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueShopEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_METHOD_3_5EACA8055EE13559_OFFSET))(a1, a2);
		}
	};
}
