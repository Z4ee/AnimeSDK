#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RedDotNodeConfig; }

#define RPG_GAMECORE_REDDOTGRAPHCONFIG_METHOD_2_CCDAC0D6CEB90D6D_OFFSET UNITYSDK_OFFSET(0x1D38EE10)
#define RPG_GAMECORE_REDDOTGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38EED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotGraphConfig_TypeDefinitionIndex = 16900;

	class RedDotGraphConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RedDotNodeConfig*>* Nodes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGRAPHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCDAC0D6CEB90D6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedDotGraphConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedDotGraphConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGRAPHCONFIG_METHOD_2_CCDAC0D6CEB90D6D_OFFSET))(a1, a2);
		}
	};
}
