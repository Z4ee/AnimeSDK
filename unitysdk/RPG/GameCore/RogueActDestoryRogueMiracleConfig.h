#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_6_3A3FBAE20A24479D_OFFSET UNITYSDK_OFFSET(0x175B4170)
#define RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_6_8BDC98B45D0ED940_OFFSET UNITYSDK_OFFSET(0x175B3F50)
#define RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B4090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestoryRogueMiracleConfig_TypeDefinitionIndex = 18002;

	class RogueActDestoryRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8BDC98B45D0ED940(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_6_8BDC98B45D0ED940_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3A3FBAE20A24479D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestoryRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTORYROGUEMIRACLECONFIG_METHOD_6_3A3FBAE20A24479D_OFFSET))(a1, a2);
		}
	};
}
