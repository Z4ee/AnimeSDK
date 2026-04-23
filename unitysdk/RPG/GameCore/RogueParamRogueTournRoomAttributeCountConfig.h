#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMATTRIBUTECOUNTCONFIG_METHOD_6_51EA20409CEED4C5_OFFSET UNITYSDK_OFFSET(0x18D5E3A0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMATTRIBUTECOUNTCONFIG_METHOD_6_C75AEDB031F3856B_OFFSET UNITYSDK_OFFSET(0x18D5E650)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMATTRIBUTECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5E520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomAttributeCountConfig_TypeDefinitionIndex = 18842;

	class RogueParamRogueTournRoomAttributeCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMATTRIBUTECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_51EA20409CEED4C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomAttributeCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomAttributeCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMATTRIBUTECOUNTCONFIG_METHOD_6_51EA20409CEED4C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C75AEDB031F3856B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomAttributeCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomAttributeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMATTRIBUTECOUNTCONFIG_METHOD_6_C75AEDB031F3856B_OFFSET))(a1, a2);
		}
	};
}
