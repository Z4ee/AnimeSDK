#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_METHOD_6_4C4D496939216E17_OFFSET UNITYSDK_OFFSET(0x1D918D70)
#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_METHOD_6_53443E76F725E3D3_OFFSET UNITYSDK_OFFSET(0x1D918D20)
#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D918D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondTournRoomTypeConfig_TypeDefinitionIndex = 19580;

	class RogueCondTournRoomTypeConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_53443E76F725E3D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondTournRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondTournRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_METHOD_6_53443E76F725E3D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4C4D496939216E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondTournRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondTournRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_METHOD_6_4C4D496939216E17_OFFSET))(a1, a2);
		}
	};
}
