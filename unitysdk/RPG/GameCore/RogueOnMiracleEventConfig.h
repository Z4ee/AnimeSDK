#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG_METHOD_2_3CE15F85292815C0_OFFSET UNITYSDK_OFFSET(0x17649D30)
#define RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17649D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueOnMiracleEventConfig_TypeDefinitionIndex = 16239;

	class RogueOnMiracleEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3CE15F85292815C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueOnMiracleEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueOnMiracleEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG_METHOD_2_3CE15F85292815C0_OFFSET))(a1, a2);
		}
	};
}
