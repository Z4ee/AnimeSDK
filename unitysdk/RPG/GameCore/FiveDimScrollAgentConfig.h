#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MRect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_METHOD_3_BF68D161E6B38CE2_OFFSET UNITYSDK_OFFSET(0x19752910)
#define RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_METHOD_3_E9A2DA54F37FE30D_OFFSET UNITYSDK_OFFSET(0x19752A40)
#define RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19752A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimScrollAgentConfig_TypeDefinitionIndex = 17633;

	class FiveDimScrollAgentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MRect ViewRect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF68D161E6B38CE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimScrollAgentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimScrollAgentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_METHOD_3_BF68D161E6B38CE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9A2DA54F37FE30D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimScrollAgentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimScrollAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_METHOD_3_E9A2DA54F37FE30D_OFFSET))(a1, a2);
		}
	};
}
