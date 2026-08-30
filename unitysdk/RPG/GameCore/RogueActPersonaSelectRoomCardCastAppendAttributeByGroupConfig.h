#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_76F10FE0EDB98E9D_OFFSET UNITYSDK_OFFSET(0x1D3B99C0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_B144B56DC3CC26D9_OFFSET UNITYSDK_OFFSET(0x1D3B9970)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B99B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastAppendAttributeByGroupConfig_TypeDefinitionIndex = 19492;

	class RogueActPersonaSelectRoomCardCastAppendAttributeByGroupConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_B144B56DC3CC26D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeByGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeByGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_B144B56DC3CC26D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_76F10FE0EDB98E9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeByGroupConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeByGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTEBYGROUPCONFIG_METHOD_7_76F10FE0EDB98E9D_OFFSET))(a1, a2);
		}
	};
}
