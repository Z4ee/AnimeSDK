#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_METHOD_3_882627E56C5C6DBB_OFFSET UNITYSDK_OFFSET(0x1E547000)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_METHOD_3_ED0068833E37673F_OFFSET UNITYSDK_OFFSET(0x1E546CD0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E546CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByUniqueIdConfig_TypeDefinitionIndex = 19647;

	class RoguePersonaRoomCardFilterByUniqueIdConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_882627E56C5C6DBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_METHOD_3_882627E56C5C6DBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED0068833E37673F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByUniqueIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYUNIQUEIDCONFIG_METHOD_3_ED0068833E37673F_OFFSET))(a1, a2);
		}
	};
}
