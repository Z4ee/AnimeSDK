#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_METHOD_3_15D8454C0B607FBB_OFFSET UNITYSDK_OFFSET(0x17573AC0)
#define RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_METHOD_3_D78CF67F1567E1AF_OFFSET UNITYSDK_OFFSET(0x17573BD0)
#define RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17573BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PumanHuntGameplayController_TypeDefinitionIndex = 19496;

	class PumanHuntGameplayController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15D8454C0B607FBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PumanHuntGameplayController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PumanHuntGameplayController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_METHOD_3_15D8454C0B607FBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D78CF67F1567E1AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PumanHuntGameplayController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PumanHuntGameplayController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_METHOD_3_D78CF67F1567E1AF_OFFSET))(a1, a2);
		}
	};
}
