#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_METHOD_3_1329A361D3758237_OFFSET UNITYSDK_OFFSET(0x1E546E40)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_METHOD_3_8D9DC27334CE6F9B_OFFSET UNITYSDK_OFFSET(0x1E546BF0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E546BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByDiscardConfig_TypeDefinitionIndex = 19643;

	class RoguePersonaRoomCardFilterByDiscardConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1329A361D3758237(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_METHOD_3_1329A361D3758237_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D9DC27334CE6F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_METHOD_3_8D9DC27334CE6F9B_OFFSET))(a1, a2);
		}
	};
}
