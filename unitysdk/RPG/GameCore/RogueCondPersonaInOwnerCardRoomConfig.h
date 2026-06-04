#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_METHOD_6_A3248E8F23B887FF_OFFSET UNITYSDK_OFFSET(0x19B1D2C0)
#define RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_METHOD_6_E6EBCC91E6E4C6B9_OFFSET UNITYSDK_OFFSET(0x19B1D010)
#define RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1D190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaInOwnerCardRoomConfig_TypeDefinitionIndex = 18768;

	class RogueCondPersonaInOwnerCardRoomConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E6EBCC91E6E4C6B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_METHOD_6_E6EBCC91E6E4C6B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A3248E8F23B887FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPersonaInOwnerCardRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAINOWNERCARDROOMCONFIG_METHOD_6_A3248E8F23B887FF_OFFSET))(a1, a2);
		}
	};
}
