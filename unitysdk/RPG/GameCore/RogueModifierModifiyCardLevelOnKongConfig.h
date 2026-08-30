#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_METHOD_3_6EFA892614B38301_OFFSET UNITYSDK_OFFSET(0x1D3F9610)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_METHOD_3_8E9BDE1041CBBEDD_OFFSET UNITYSDK_OFFSET(0x1D3F95C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifiyCardLevelOnKongConfig_TypeDefinitionIndex = 17612;

	class RogueModifierModifiyCardLevelOnKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E9BDE1041CBBEDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_METHOD_3_8E9BDE1041CBBEDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6EFA892614B38301(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyCardLevelOnKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYCARDLEVELONKONGCONFIG_METHOD_3_6EFA892614B38301_OFFSET))(a1, a2);
		}
	};
}
