#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_METHOD_3_39B9AEFBE609ADBE_OFFSET UNITYSDK_OFFSET(0x17657D40)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_METHOD_3_B6707E2BB4C576A2_OFFSET UNITYSDK_OFFSET(0x17657FD0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17657D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByLevelRangeConfig_TypeDefinitionIndex = 18209;

	class RoguePersonaRoomCardFilterByLevelRangeConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6707E2BB4C576A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_METHOD_3_B6707E2BB4C576A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39B9AEFBE609ADBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByLevelRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYLEVELRANGECONFIG_METHOD_3_39B9AEFBE609ADBE_OFFSET))(a1, a2);
		}
	};
}
