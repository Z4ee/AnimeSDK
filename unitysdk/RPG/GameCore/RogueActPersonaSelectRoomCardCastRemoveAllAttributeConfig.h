#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_METHOD_7_04BC042A07B32CA1_OFFSET UNITYSDK_OFFSET(0x175C37A0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_METHOD_7_5111CA642B98C11C_OFFSET UNITYSDK_OFFSET(0x175C2CE0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C2C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig_TypeDefinitionIndex = 18079;

	class RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_04BC042A07B32CA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_METHOD_7_04BC042A07B32CA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_5111CA642B98C11C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAllAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEALLATTRIBUTECONFIG_METHOD_7_5111CA642B98C11C_OFFSET))(a1, a2);
		}
	};
}
