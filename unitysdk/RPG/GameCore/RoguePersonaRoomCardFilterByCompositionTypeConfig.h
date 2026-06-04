#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_METHOD_3_66C35781D9ACCC93_OFFSET UNITYSDK_OFFSET(0x19BB9E00)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_METHOD_3_AA44E1E4A35984D7_OFFSET UNITYSDK_OFFSET(0x19BB9C10)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB9C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByCompositionTypeConfig_TypeDefinitionIndex = 18820;

	class RoguePersonaRoomCardFilterByCompositionTypeConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66C35781D9ACCC93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_METHOD_3_66C35781D9ACCC93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA44E1E4A35984D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYCOMPOSITIONTYPECONFIG_METHOD_3_AA44E1E4A35984D7_OFFSET))(a1, a2);
		}
	};
}
