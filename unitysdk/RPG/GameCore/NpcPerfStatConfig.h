#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCPERFSTATCONFIG_METHOD_2_E07B17868FCF22D0_OFFSET UNITYSDK_OFFSET(0x17478290)
#define RPG_GAMECORE_NPCPERFSTATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174782D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcPerfStatConfig_TypeDefinitionIndex = 17496;

	class NpcPerfStatConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPERFSTATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E07B17868FCF22D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcPerfStatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcPerfStatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPERFSTATCONFIG_METHOD_2_E07B17868FCF22D0_OFFSET))(a1, a2);
		}
	};
}
