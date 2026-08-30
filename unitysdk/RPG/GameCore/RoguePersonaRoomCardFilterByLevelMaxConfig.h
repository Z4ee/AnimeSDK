#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_METHOD_3_CE18CFE180B9EE21_OFFSET UNITYSDK_OFFSET(0x1D40E490)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_METHOD_3_F38CF28ACD109F85_OFFSET UNITYSDK_OFFSET(0x1D40E200)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40E1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByLevelMaxConfig_TypeDefinitionIndex = 19640;

	class RoguePersonaRoomCardFilterByLevelMaxConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE18CFE180B9EE21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_METHOD_3_CE18CFE180B9EE21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F38CF28ACD109F85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELMAXCONFIG_METHOD_3_F38CF28ACD109F85_OFFSET))(a1, a2);
		}
	};
}
