#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }
namespace RPG::GameCore { class GridFightDragOpGridSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }
namespace RPG::GameCore { class GridFightDragOpgConsumableSelector; }

#define CLASS_1_32612C379DA34D00_METHOD_1_05B50BE164894E9D_OFFSET UNITYSDK_OFFSET(0x115EA2E0)
#define CLASS_1_32612C379DA34D00_METHOD_1_53C4D44F413294D5_OFFSET UNITYSDK_OFFSET(0x115EA590)
#define CLASS_1_32612C379DA34D00_METHOD_1_5815B86C36A91516_OFFSET UNITYSDK_OFFSET(0x115EA400)
#define CLASS_1_32612C379DA34D00_METHOD_1_E8A17197B878CC52_OFFSET UNITYSDK_OFFSET(0x115EA270)
#define CLASS_1_32612C379DA34D00_METHOD_1_F625427749226153_OFFSET UNITYSDK_OFFSET(0x115EA4F0)
#define CLASS_1_32612C379DA34D00__CTOR_OFFSET UNITYSDK_OFFSET(0x115EA600)

inline static constexpr unsigned int Class_1_32612C379DA34D00_TypeDefinitionIndex = 53177;

class Class_1_32612C379DA34D00 : public ::System::Object
{
public:
	::RPG::Client::GridFightEquipInfo* Field_1_1; // 0x10
	::RPG::Client::GridFightConsumableInfo* Field_1_2; // 0x18
	::RPG::Client::GridFightTeam* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E8A17197B878CC52(::RPG::Client::GridFightGameSession* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_E8A17197B878CC52_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightGridData* Method_1_05B50BE164894E9D(::RPG::GameCore::GridFightDragOpGridSelector* a1)
	{
		return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpGridSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_05B50BE164894E9D_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_5815B86C36A91516(::RPG::GameCore::GridFightDragOpRoleSelector* a1)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_5815B86C36A91516_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_F625427749226153(::RPG::GameCore::GridFightDragOpEquipSelector* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_F625427749226153_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_53C4D44F413294D5(::RPG::GameCore::GridFightDragOpgConsumableSelector* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_53C4D44F413294D5_OFFSET))(this, a1);
	}
};
