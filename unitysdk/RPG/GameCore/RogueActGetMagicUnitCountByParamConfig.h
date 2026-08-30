#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_8CE78A5F604E3C7A_OFFSET UNITYSDK_OFFSET(0x1D3B76E0)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_F693345530C781BE_OFFSET UNITYSDK_OFFSET(0x1D3B7690)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B76D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitCountByParamConfig_TypeDefinitionIndex = 19463;

	class RogueActGetMagicUnitCountByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F693345530C781BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_F693345530C781BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8CE78A5F604E3C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_6_8CE78A5F604E3C7A_OFFSET))(a1, a2);
		}
	};
}
