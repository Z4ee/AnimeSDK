#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_6_053D6D92322CD0EC_OFFSET UNITYSDK_OFFSET(0x1764FB30)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_6_CFE949152AA492C2_OFFSET UNITYSDK_OFFSET(0x1764FDE0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764FCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomMarkTypeConfig_TypeDefinitionIndex = 18162;

	class RogueParamRogueTournCurrentRoomMarkTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_053D6D92322CD0EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_6_053D6D92322CD0EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CFE949152AA492C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_6_CFE949152AA492C2_OFFSET))(a1, a2);
		}
	};
}
