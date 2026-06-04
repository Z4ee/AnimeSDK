#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_METHOD_3_1711F8E8D5558520_OFFSET UNITYSDK_OFFSET(0x19B4E330)
#define RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_METHOD_3_46CD91E84168E0F9_OFFSET UNITYSDK_OFFSET(0x19B4E400)
#define RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4E3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAppendAttributeOnPersonaRoomCardAddConfig_TypeDefinitionIndex = 16957;

	class RogueModifierAppendAttributeOnPersonaRoomCardAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1711F8E8D5558520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_METHOD_3_1711F8E8D5558520_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46CD91E84168E0F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAppendAttributeOnPersonaRoomCardAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERAPPENDATTRIBUTEONPERSONAROOMCARDADDCONFIG_METHOD_3_46CD91E84168E0F9_OFFSET))(a1, a2);
		}
	};
}
