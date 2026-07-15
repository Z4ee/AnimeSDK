#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_METHOD_3_79380190B726AE28_OFFSET UNITYSDK_OFFSET(0x1D165610)
#define RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_METHOD_3_B02EA0BFE43EAAAC_OFFSET UNITYSDK_OFFSET(0x1D1655C0)
#define RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRepairMiracleAfterDestroyConfig_TypeDefinitionIndex = 17262;

	class RogueModifierRepairMiracleAfterDestroyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B02EA0BFE43EAAAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_METHOD_3_B02EA0BFE43EAAAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79380190B726AE28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRepairMiracleAfterDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPAIRMIRACLEAFTERDESTROYCONFIG_METHOD_3_79380190B726AE28_OFFSET))(a1, a2);
		}
	};
}
