#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_METHOD_3_432577730F5D4401_OFFSET UNITYSDK_OFFSET(0x1940C330)
#define RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_METHOD_3_9C66B3FB54F584E0_OFFSET UNITYSDK_OFFSET(0x1940C2B0)
#define RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1940C300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddChallengeBossInfoPanelState_TypeDefinitionIndex = 21952;

	class AddChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID WarningText; // 0x18
		::System::Int32 Priority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C66B3FB54F584E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddChallengeBossInfoPanelState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddChallengeBossInfoPanelState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_METHOD_3_9C66B3FB54F584E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_432577730F5D4401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_METHOD_3_432577730F5D4401_OFFSET))(a1, a2);
		}
	};
}
