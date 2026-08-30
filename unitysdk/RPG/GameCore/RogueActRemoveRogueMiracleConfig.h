#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_6_7AC09978DA445911_OFFSET UNITYSDK_OFFSET(0x1EE88920)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_6_7F004D16E920E935_OFFSET UNITYSDK_OFFSET(0x1EE88970)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleConfig_TypeDefinitionIndex = 19377;

	class RogueActRemoveRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7AC09978DA445911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_6_7AC09978DA445911_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7F004D16E920E935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLECONFIG_METHOD_6_7F004D16E920E935_OFFSET))(a1, a2);
		}
	};
}
