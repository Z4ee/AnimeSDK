#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_METHOD_3_A0BB4F717454F11C_OFFSET UNITYSDK_OFFSET(0x176364F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_METHOD_3_E21482E4260692F5_OFFSET UNITYSDK_OFFSET(0x176365C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomMarkProbabilityConfig_TypeDefinitionIndex = 16325;

	class RogueModifierModifyTournRoomMarkProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0BB4F717454F11C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_METHOD_3_A0BB4F717454F11C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E21482E4260692F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomMarkProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMMARKPROBABILITYCONFIG_METHOD_3_E21482E4260692F5_OFFSET))(a1, a2);
		}
	};
}
