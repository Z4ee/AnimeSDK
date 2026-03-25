#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_8CE78A5F604E3C7A_OFFSET UNITYSDK_OFFSET(0x175B6010)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_D63AFB3B2E64860F_OFFSET UNITYSDK_OFFSET(0x175B5DF0)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B5F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitCountByParamConfig_TypeDefinitionIndex = 18048;

	class RogueActGetMagicUnitCountByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D63AFB3B2E64860F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_D63AFB3B2E64860F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8CE78A5F604E3C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_8CE78A5F604E3C7A_OFFSET))(a1, a2);
		}
	};
}
