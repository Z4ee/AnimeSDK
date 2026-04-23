#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_METHOD_3_8400E37B13A68A8E_OFFSET UNITYSDK_OFFSET(0x18D468E0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_METHOD_3_C5256458F882C107_OFFSET UNITYSDK_OFFSET(0x18D469B0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D46960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig_TypeDefinitionIndex = 16832;

	class RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8400E37B13A68A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_METHOD_3_8400E37B13A68A8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5256458F882C107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_METHOD_3_C5256458F882C107_OFFSET))(a1, a2);
		}
	};
}
