#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTECOUNTCONFIG_METHOD_3_02F75EC7EFEB84E2_OFFSET UNITYSDK_OFFSET(0x1BB67F20)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTECOUNTCONFIG_METHOD_3_3D68F97F6568E3FE_OFFSET UNITYSDK_OFFSET(0x1BB67D50)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB67D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAttributeCountConfig_TypeDefinitionIndex = 19108;

	class RoguePersonaRoomCardFilterByAttributeCountConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02F75EC7EFEB84E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTECOUNTCONFIG_METHOD_3_02F75EC7EFEB84E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D68F97F6568E3FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTECOUNTCONFIG_METHOD_3_3D68F97F6568E3FE_OFFSET))(a1, a2);
		}
	};
}
