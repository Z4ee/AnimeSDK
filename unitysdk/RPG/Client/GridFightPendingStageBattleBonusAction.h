#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0xA51D8E0)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA51D8D0)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION___IFIXBASEPROXY_HANDLE_OFFSET UNITYSDK_OFFSET(0xA51D9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingStageBattleBonusAction_TypeDefinitionIndex = 59465;

	class GridFightPendingStageBattleBonusAction : public ::RPG::Client::GridFightPendingStageBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION__CTOR_OFFSET))(this, actionID);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION_HANDLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION___IFIXBASEPROXY_HANDLE_OFFSET))(this);
		}
	};
}
