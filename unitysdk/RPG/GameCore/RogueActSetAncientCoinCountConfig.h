#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_METHOD_6_7D30DFF72003B104_OFFSET UNITYSDK_OFFSET(0x1EE88DF0)
#define RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_METHOD_6_88E4121C1533F148_OFFSET UNITYSDK_OFFSET(0x1EE88DA0)
#define RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetAncientCoinCountConfig_TypeDefinitionIndex = 19391;

	class RogueActSetAncientCoinCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_88E4121C1533F148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetAncientCoinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetAncientCoinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_METHOD_6_88E4121C1533F148_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7D30DFF72003B104(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetAncientCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetAncientCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_METHOD_6_7D30DFF72003B104_OFFSET))(a1, a2);
		}
	};
}
