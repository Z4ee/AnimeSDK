#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_1C35F7284B8E6633_OFFSET UNITYSDK_OFFSET(0x19C25400)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_FEAA68D8B5DA4430_OFFSET UNITYSDK_OFFSET(0x19C25440)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C25430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantPreloadConfig_TypeDefinitionIndex = 15528;

	class ServantPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C35F7284B8E6633(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_1C35F7284B8E6633_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEAA68D8B5DA4430(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_FEAA68D8B5DA4430_OFFSET))(a1, a2);
		}
	};
}
