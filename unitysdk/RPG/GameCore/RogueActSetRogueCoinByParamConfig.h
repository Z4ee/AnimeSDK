#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_00B458059A7DF927_OFFSET UNITYSDK_OFFSET(0x1C49E020)
#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_F8A47AB36FE437CB_OFFSET UNITYSDK_OFFSET(0x1C49E070)
#define RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49E060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetRogueCoinByParamConfig_TypeDefinitionIndex = 18864;

	class RogueActSetRogueCoinByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_00B458059A7DF927(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_00B458059A7DF927_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F8A47AB36FE437CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetRogueCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETROGUECOINBYPARAMCONFIG_METHOD_6_F8A47AB36FE437CB_OFFSET))(a1, a2);
		}
	};
}
