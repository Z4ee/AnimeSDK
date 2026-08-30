#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITSELECTCONFIG_METHOD_3_6FD7073AF274B0EB_OFFSET UNITYSDK_OFFSET(0x1EEFAE10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITSELECTCONFIG_METHOD_3_B4D4BFF31B9D03EF_OFFSET UNITYSDK_OFFSET(0x1EEFAE60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFAE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitSelectConfig_TypeDefinitionIndex = 17516;

	class RogueModifierModifyMagicUnitSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FD7073AF274B0EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITSELECTCONFIG_METHOD_3_6FD7073AF274B0EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4D4BFF31B9D03EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITSELECTCONFIG_METHOD_3_B4D4BFF31B9D03EF_OFFSET))(a1, a2);
		}
	};
}
