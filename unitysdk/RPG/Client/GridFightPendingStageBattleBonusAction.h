#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0xD2DC2C0)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD2DC2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingStageBattleBonusAction_TypeDefinitionIndex = 64675;

	class GridFightPendingStageBattleBonusAction : public ::RPG::Client::GridFightPendingStageBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION_HANDLE_OFFSET))(this);
		}
	};
}
