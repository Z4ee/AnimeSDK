#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_16FB6D02E0414538_OFFSET UNITYSDK_OFFSET(0x1D40D4A0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_BA1381A42D8197B4_OFFSET UNITYSDK_OFFSET(0x1D40D4F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig_TypeDefinitionIndex = 19628;

	class RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_16FB6D02E0414538(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_16FB6D02E0414538_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BA1381A42D8197B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomDisplayCardAttributeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMDISPLAYCARDATTRIBUTENUMCONFIG_METHOD_6_BA1381A42D8197B4_OFFSET))(a1, a2);
		}
	};
}
