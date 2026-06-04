#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_METHOD_6_9B83B137EC577AB3_OFFSET UNITYSDK_OFFSET(0x19B1C7D0)
#define RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_METHOD_6_F2ACCF5415F9159D_OFFSET UNITYSDK_OFFSET(0x19B1CA80)
#define RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1C950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondMiracleStatusConfig_TypeDefinitionIndex = 18767;

	class RogueCondMiracleStatusConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9B83B137EC577AB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleStatusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleStatusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_METHOD_6_9B83B137EC577AB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F2ACCF5415F9159D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleStatusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_METHOD_6_F2ACCF5415F9159D_OFFSET))(a1, a2);
		}
	};
}
