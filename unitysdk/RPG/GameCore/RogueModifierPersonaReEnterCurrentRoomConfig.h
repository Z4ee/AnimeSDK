#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_METHOD_3_72A12C88CE7E310D_OFFSET UNITYSDK_OFFSET(0x17637580)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_METHOD_3_FBAC2155B315B994_OFFSET UNITYSDK_OFFSET(0x176374B0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17637530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaReEnterCurrentRoomConfig_TypeDefinitionIndex = 16417;

	class RogueModifierPersonaReEnterCurrentRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FBAC2155B315B994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_METHOD_3_FBAC2155B315B994_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72A12C88CE7E310D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaReEnterCurrentRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAREENTERCURRENTROOMCONFIG_METHOD_3_72A12C88CE7E310D_OFFSET))(a1, a2);
		}
	};
}
