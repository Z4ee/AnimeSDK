#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_3FCA5B4E256724D0_OFFSET UNITYSDK_OFFSET(0x1EEF7660)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_C61AD26EBD3B014C_OFFSET UNITYSDK_OFFSET(0x1EEF76B0)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF76A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddMazeBuffExConfig_TypeDefinitionIndex = 17737;

	class RogueModifierAddMazeBuffExConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FCA5B4E256724D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_3FCA5B4E256724D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C61AD26EBD3B014C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_C61AD26EBD3B014C_OFFSET))(a1, a2);
		}
	};
}
