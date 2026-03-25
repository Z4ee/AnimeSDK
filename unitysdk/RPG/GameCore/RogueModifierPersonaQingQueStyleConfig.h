#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_7BC9C76041E685BB_OFFSET UNITYSDK_OFFSET(0x176374A0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_98E7C334B763D9A2_OFFSET UNITYSDK_OFFSET(0x176373D0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17637450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaQingQueStyleConfig_TypeDefinitionIndex = 16370;

	class RogueModifierPersonaQingQueStyleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98E7C334B763D9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_98E7C334B763D9A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BC9C76041E685BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaQingQueStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAQINGQUESTYLECONFIG_METHOD_3_7BC9C76041E685BB_OFFSET))(a1, a2);
		}
	};
}
