#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_6_2B92648A599E35B9_OFFSET UNITYSDK_OFFSET(0x1D40D8C0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_6_46A95BFF27DFB0FD_OFFSET UNITYSDK_OFFSET(0x1D40D910)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournPreviousRoomTypeConfig_TypeDefinitionIndex = 19589;

	class RogueParamRogueTournPreviousRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2B92648A599E35B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_6_2B92648A599E35B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_46A95BFF27DFB0FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_6_46A95BFF27DFB0FD_OFFSET))(a1, a2);
		}
	};
}
