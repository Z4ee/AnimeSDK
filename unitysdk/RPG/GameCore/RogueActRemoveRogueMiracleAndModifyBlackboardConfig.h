#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_8FB16F3CE4DA5869_OFFSET UNITYSDK_OFFSET(0x1C49DA20)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_9920F0975C23CFED_OFFSET UNITYSDK_OFFSET(0x1C49DA70)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49DA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleAndModifyBlackboardConfig_TypeDefinitionIndex = 18852;

	class RogueActRemoveRogueMiracleAndModifyBlackboardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8FB16F3CE4DA5869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_8FB16F3CE4DA5869_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9920F0975C23CFED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_9920F0975C23CFED_OFFSET))(a1, a2);
		}
	};
}
