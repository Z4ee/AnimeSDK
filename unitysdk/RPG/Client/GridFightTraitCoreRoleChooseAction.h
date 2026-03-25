#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0x98CF890)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x98CF840)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x98CF830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseAction_TypeDefinitionIndex = 53079;

	class GridFightTraitCoreRoleChooseAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 traitID, ::System::UInt32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION__CTOR_OFFSET))(this, traitID, effectID);
		}

		::System::Void Sync(::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SYNC_OFFSET))(this, actionID);
		}

		::System::Void SelectMember(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SELECTMEMBER_OFFSET))(this, uid);
		}
	};
}
