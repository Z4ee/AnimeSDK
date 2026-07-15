#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_7BC9C76041E685BB_OFFSET UNITYSDK_OFFSET(0x1D165130)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_D75B8959F69A40D7_OFFSET UNITYSDK_OFFSET(0x1D1650E0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaQingQueStyleConfig_TypeDefinitionIndex = 17101;

	class RogueModifierPersonaQingQueStyleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D75B8959F69A40D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_D75B8959F69A40D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BC9C76041E685BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_7BC9C76041E685BB_OFFSET))(a1, a2);
		}
	};
}
