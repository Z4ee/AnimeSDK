#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_METHOD_3_44A2D97E0ECFE0CA_OFFSET UNITYSDK_OFFSET(0x1BB67FE0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_METHOD_3_4A8462AE64ACA126_OFFSET UNITYSDK_OFFSET(0x1BB67DB0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB67DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByInDisplayConfig_TypeDefinitionIndex = 19106;

	class RoguePersonaRoomCardFilterByInDisplayConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44A2D97E0ECFE0CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_METHOD_3_44A2D97E0ECFE0CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A8462AE64ACA126(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByInDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYINDISPLAYCONFIG_METHOD_3_4A8462AE64ACA126_OFFSET))(a1, a2);
		}
	};
}
