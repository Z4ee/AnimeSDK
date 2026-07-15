#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEGROUPCONFIG_METHOD_3_510AFE3D69074087_OFFSET UNITYSDK_OFFSET(0x1D165B00)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEGROUPCONFIG_METHOD_3_9B47C259291AE42B_OFFSET UNITYSDK_OFFSET(0x1D165B50)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMiracleGroupConfig_TypeDefinitionIndex = 16989;

	class RogueModifierReplaceContentRogueMiracleGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_510AFE3D69074087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEGROUPCONFIG_METHOD_3_510AFE3D69074087_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B47C259291AE42B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEGROUPCONFIG_METHOD_3_9B47C259291AE42B_OFFSET))(a1, a2);
		}
	};
}
