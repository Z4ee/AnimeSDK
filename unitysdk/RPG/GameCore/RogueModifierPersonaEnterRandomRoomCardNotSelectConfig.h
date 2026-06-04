#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_06AF325CD8AAF4D1_OFFSET UNITYSDK_OFFSET(0x19B99C50)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_70C074A11DAAE638_OFFSET UNITYSDK_OFFSET(0x19B99B80)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaEnterRandomRoomCardNotSelectConfig_TypeDefinitionIndex = 16951;

	class RogueModifierPersonaEnterRandomRoomCardNotSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70C074A11DAAE638(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_70C074A11DAAE638_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06AF325CD8AAF4D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaEnterRandomRoomCardNotSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAENTERRANDOMROOMCARDNOTSELECTCONFIG_METHOD_3_06AF325CD8AAF4D1_OFFSET))(a1, a2);
		}
	};
}
