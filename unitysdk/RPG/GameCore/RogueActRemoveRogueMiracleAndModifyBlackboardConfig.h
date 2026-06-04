#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_9920F0975C23CFED_OFFSET UNITYSDK_OFFSET(0x19AF6870)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_99846CA6C01F06D0_OFFSET UNITYSDK_OFFSET(0x19AF6650)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF6790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueMiracleAndModifyBlackboardConfig_TypeDefinitionIndex = 18576;

	class RogueActRemoveRogueMiracleAndModifyBlackboardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_99846CA6C01F06D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_99846CA6C01F06D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9920F0975C23CFED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueMiracleAndModifyBlackboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEMIRACLEANDMODIFYBLACKBOARDCONFIG_METHOD_6_9920F0975C23CFED_OFFSET))(a1, a2);
		}
	};
}
