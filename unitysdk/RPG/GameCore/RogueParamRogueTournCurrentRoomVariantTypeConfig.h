#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_6_93046C9513DE07D0_OFFSET UNITYSDK_OFFSET(0x19BB3430)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_6_EE3E4100179CAA46_OFFSET UNITYSDK_OFFSET(0x19BB3180)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB3300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomVariantTypeConfig_TypeDefinitionIndex = 18775;

	class RogueParamRogueTournCurrentRoomVariantTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EE3E4100179CAA46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_6_EE3E4100179CAA46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_93046C9513DE07D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_6_93046C9513DE07D0_OFFSET))(a1, a2);
		}
	};
}
