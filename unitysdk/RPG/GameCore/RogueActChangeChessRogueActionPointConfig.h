#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_6_9E8DB20CCFF40EDE_OFFSET UNITYSDK_OFFSET(0x1D02D260)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_6_F92A08FA4507FC1A_OFFSET UNITYSDK_OFFSET(0x1D02D2B0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueActionPointConfig_TypeDefinitionIndex = 18884;

	class RogueActChangeChessRogueActionPointConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9E8DB20CCFF40EDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_6_9E8DB20CCFF40EDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F92A08FA4507FC1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_6_F92A08FA4507FC1A_OFFSET))(a1, a2);
		}
	};
}
