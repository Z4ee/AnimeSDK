#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RedDotModuleType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REDDOTGROUPCONFIG_METHOD_2_D8C7268EDE905A9A_OFFSET UNITYSDK_OFFSET(0x19AB84D0)
#define RPG_GAMECORE_REDDOTGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB8690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotGroupConfig_TypeDefinitionIndex = 23083;

	class RedDotGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxLength; // 0x10
		::RPG::GameCore::RedDotModuleType RedDotModuleType; // 0x14
		::System::Boolean IsCompatibleLocal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D8C7268EDE905A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedDotGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedDotGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGROUPCONFIG_METHOD_2_D8C7268EDE905A9A_OFFSET))(a1, a2);
		}
	};
}
