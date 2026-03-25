#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_METHOD_3_8E08AC6F6A1DCB9C_OFFSET UNITYSDK_OFFSET(0x176331F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_METHOD_3_A9930C26A742A8A5_OFFSET UNITYSDK_OFFSET(0x17633120)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176331A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifiyRoomCardForbidRerollConfig_TypeDefinitionIndex = 16379;

	class RogueModifierModifiyRoomCardForbidRerollConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A9930C26A742A8A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_METHOD_3_A9930C26A742A8A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E08AC6F6A1DCB9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyRoomCardForbidRerollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDFORBIDREROLLCONFIG_METHOD_3_8E08AC6F6A1DCB9C_OFFSET))(a1, a2);
		}
	};
}
