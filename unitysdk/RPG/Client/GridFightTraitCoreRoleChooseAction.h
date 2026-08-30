#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xD35CF70)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xD35CF20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD35CF10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseAction_TypeDefinitionIndex = 65421;

	class GridFightTraitCoreRoleChooseAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SelectMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEACTION_SELECTMEMBER_OFFSET))(this, a1);
		}
	};
}
