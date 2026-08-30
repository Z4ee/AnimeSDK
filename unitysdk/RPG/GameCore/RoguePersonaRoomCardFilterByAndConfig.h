#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_METHOD_3_774B333111682004_OFFSET UNITYSDK_OFFSET(0x1E546B50)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_METHOD_3_82FE655606986048_OFFSET UNITYSDK_OFFSET(0x1E546D00)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E546B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAndConfig_TypeDefinitionIndex = 19645;

	class RoguePersonaRoomCardFilterByAndConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82FE655606986048(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_METHOD_3_82FE655606986048_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_774B333111682004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYANDCONFIG_METHOD_3_774B333111682004_OFFSET))(a1, a2);
		}
	};
}
