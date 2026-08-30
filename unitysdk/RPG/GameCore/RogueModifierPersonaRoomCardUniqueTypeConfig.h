#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_METHOD_3_145E40A13369EF22_OFFSET UNITYSDK_OFFSET(0x1D3FB880)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_METHOD_3_97A7717164AE263E_OFFSET UNITYSDK_OFFSET(0x1D3FB8D0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardUniqueTypeConfig_TypeDefinitionIndex = 17613;

	class RogueModifierPersonaRoomCardUniqueTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_145E40A13369EF22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_METHOD_3_145E40A13369EF22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97A7717164AE263E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardUniqueTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDUNIQUETYPECONFIG_METHOD_3_97A7717164AE263E_OFFSET))(a1, a2);
		}
	};
}
