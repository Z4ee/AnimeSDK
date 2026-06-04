#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0xBBC56C0)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC56B0)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION___IFIXBASEPROXY_HANDLE_OFFSET UNITYSDK_OFFSET(0xBBC57B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingStageReturnPreparationAction_TypeDefinitionIndex = 60402;

	class GridFightPendingStageReturnPreparationAction : public ::RPG::Client::GridFightPendingStageBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION_HANDLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION___IFIXBASEPROXY_HANDLE_OFFSET))(this);
		}
	};
}
