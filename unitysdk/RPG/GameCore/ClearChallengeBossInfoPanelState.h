#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_METHOD_3_43CFBDF13022B8DF_OFFSET UNITYSDK_OFFSET(0x170B19C0)
#define RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_METHOD_3_962089B46ED9C76B_OFFSET UNITYSDK_OFFSET(0x170B18B0)
#define RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170B1990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearChallengeBossInfoPanelState_TypeDefinitionIndex = 21439;

	class ClearChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_962089B46ED9C76B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearChallengeBossInfoPanelState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearChallengeBossInfoPanelState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_METHOD_3_962089B46ED9C76B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43CFBDF13022B8DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_METHOD_3_43CFBDF13022B8DF_OFFSET))(a1, a2);
		}
	};
}
