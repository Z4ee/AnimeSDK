#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_METHOD_6_410CB7DBA8DF6536_OFFSET UNITYSDK_OFFSET(0x1D40D320)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_METHOD_6_7AA7B5DEDBF6AB92_OFFSET UNITYSDK_OFFSET(0x1D40D370)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig_TypeDefinitionIndex = 19620;

	class RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_410CB7DBA8DF6536(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_METHOD_6_410CB7DBA8DF6536_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7AA7B5DEDBF6AB92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaRoomCardAttributeCountByFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONAROOMCARDATTRIBUTECOUNTBYFILTERCONFIG_METHOD_6_7AA7B5DEDBF6AB92_OFFSET))(a1, a2);
		}
	};
}
