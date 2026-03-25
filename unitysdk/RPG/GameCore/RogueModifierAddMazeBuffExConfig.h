#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_092EBC330D640C95_OFFSET UNITYSDK_OFFSET(0x1761CC60)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_C61AD26EBD3B014C_OFFSET UNITYSDK_OFFSET(0x1761CD30)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761CCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddMazeBuffExConfig_TypeDefinitionIndex = 16492;

	class RogueModifierAddMazeBuffExConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_092EBC330D640C95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_092EBC330D640C95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C61AD26EBD3B014C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFEXCONFIG_METHOD_3_C61AD26EBD3B014C_OFFSET))(a1, a2);
		}
	};
}
