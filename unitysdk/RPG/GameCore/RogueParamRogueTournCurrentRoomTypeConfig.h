#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_6_9F6E954C292EFE13_OFFSET UNITYSDK_OFFSET(0x1E5461D0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_6_E2F01FAEF2DBB657_OFFSET UNITYSDK_OFFSET(0x1E546220)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E546210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomTypeConfig_TypeDefinitionIndex = 19588;

	class RogueParamRogueTournCurrentRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9F6E954C292EFE13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_6_9F6E954C292EFE13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E2F01FAEF2DBB657(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_6_E2F01FAEF2DBB657_OFFSET))(a1, a2);
		}
	};
}
