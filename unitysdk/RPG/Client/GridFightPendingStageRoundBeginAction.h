#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0x987B350)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x987B340)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION___IFIXBASEPROXY_HANDLE_OFFSET UNITYSDK_OFFSET(0x987B440)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingStageRoundBeginAction_TypeDefinitionIndex = 52508;

	class GridFightPendingStageRoundBeginAction : public ::RPG::Client::GridFightPendingStageBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION__CTOR_OFFSET))(this, actionID);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION_HANDLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION___IFIXBASEPROXY_HANDLE_OFFSET))(this);
		}
	};
}
