#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_METHOD_6_1F9F55AECC0CACB0_OFFSET UNITYSDK_OFFSET(0x18D5E660)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_METHOD_6_AD567C8389FE4486_OFFSET UNITYSDK_OFFSET(0x18D5E910)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5E7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomCompositionTypeConfig_TypeDefinitionIndex = 18840;

	class RogueParamRogueTournRoomCompositionTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1F9F55AECC0CACB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_METHOD_6_1F9F55AECC0CACB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AD567C8389FE4486(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMCOMPOSITIONTYPECONFIG_METHOD_6_AD567C8389FE4486_OFFSET))(a1, a2);
		}
	};
}
