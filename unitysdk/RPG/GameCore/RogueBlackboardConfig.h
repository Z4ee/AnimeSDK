#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEBLACKBOARDCONFIG_METHOD_2_73EB6729DA177A39_OFFSET UNITYSDK_OFFSET(0x1D9119C0)
#define RPG_GAMECORE_ROGUEBLACKBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D911A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBlackboardConfig_TypeDefinitionIndex = 19559;

	class RogueBlackboardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLACKBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73EB6729DA177A39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueBlackboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBlackboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLACKBOARDCONFIG_METHOD_2_73EB6729DA177A39_OFFSET))(a1, a2);
		}
	};
}
