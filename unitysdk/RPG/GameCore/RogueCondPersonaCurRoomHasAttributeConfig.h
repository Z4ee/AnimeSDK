#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_METHOD_6_29DC1BD09A56E9D5_OFFSET UNITYSDK_OFFSET(0x175EC180)
#define RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_METHOD_6_39FC354C8BDBF041_OFFSET UNITYSDK_OFFSET(0x175EC340)
#define RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175EC280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaCurRoomHasAttributeConfig_TypeDefinitionIndex = 18153;

	class RogueCondPersonaCurRoomHasAttributeConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_29DC1BD09A56E9D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_METHOD_6_29DC1BD09A56E9D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_39FC354C8BDBF041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaCurRoomHasAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONACURROOMHASATTRIBUTECONFIG_METHOD_6_39FC354C8BDBF041_OFFSET))(a1, a2);
		}
	};
}
