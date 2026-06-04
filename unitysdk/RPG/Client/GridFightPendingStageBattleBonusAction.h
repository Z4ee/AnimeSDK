#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0xBBC5580)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC5570)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION___IFIXBASEPROXY_HANDLE_OFFSET UNITYSDK_OFFSET(0xBBC5670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingStageBattleBonusAction_TypeDefinitionIndex = 60400;

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

		::System::Void __iFixBaseProxy_Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEBATTLEBONUSACTION___IFIXBASEPROXY_HANDLE_OFFSET))(this);
		}
	};
}
