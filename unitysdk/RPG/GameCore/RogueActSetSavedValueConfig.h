#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_34DF227E25B474D4_OFFSET UNITYSDK_OFFSET(0x1D3BB120)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_695FCC8BA4CF39D8_OFFSET UNITYSDK_OFFSET(0x1D3BB0D0)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BB110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetSavedValueConfig_TypeDefinitionIndex = 19479;

	class RogueActSetSavedValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_695FCC8BA4CF39D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_695FCC8BA4CF39D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_34DF227E25B474D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_6_34DF227E25B474D4_OFFSET))(a1, a2);
		}
	};
}
