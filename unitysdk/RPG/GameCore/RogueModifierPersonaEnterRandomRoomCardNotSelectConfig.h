#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_06AF325CD8AAF4D1_OFFSET UNITYSDK_OFFSET(0x1D164FB0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_D5BB9CF3465E4D6D_OFFSET UNITYSDK_OFFSET(0x1D164F60)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D164FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaEnterRandomRoomCardNotSelectConfig_TypeDefinitionIndex = 17113;

	class RogueModifierPersonaEnterRandomRoomCardNotSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5BB9CF3465E4D6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_D5BB9CF3465E4D6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06AF325CD8AAF4D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_06AF325CD8AAF4D1_OFFSET))(a1, a2);
		}
	};
}
