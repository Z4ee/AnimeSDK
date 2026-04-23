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

#define CLASS_1_32612C379DA34D00_METHOD_1_05B50BE164894E9D_OFFSET UNITYSDK_OFFSET(0x9083F10)
#define CLASS_1_32612C379DA34D00_METHOD_1_53C4D44F413294D5_OFFSET UNITYSDK_OFFSET(0x90841C0)
#define CLASS_1_32612C379DA34D00_METHOD_1_55F57D3C76369AFF_OFFSET UNITYSDK_OFFSET(0x9084030)
#define CLASS_1_32612C379DA34D00_METHOD_1_7AB72DCF5FC91A4A_OFFSET UNITYSDK_OFFSET(0x9084120)
#define CLASS_1_32612C379DA34D00_METHOD_1_E8A17197B878CC52_OFFSET UNITYSDK_OFFSET(0x9083E90)
#define CLASS_1_32612C379DA34D00__CTOR_OFFSET UNITYSDK_OFFSET(0x9084230)

inline static constexpr unsigned int Class_1_32612C379DA34D00_TypeDefinitionIndex = 60300;

class Class_1_32612C379DA34D00 : public ::System::Object
{
public:
	::RPG::Client::GridFightEquipInfo* Field_1_1; // 0x10
	::RPG::Client::GridFightTeam* Field_1_0; // 0x18
	::RPG::Client::GridFightConsumableInfo* Field_1_2; // 0x20

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

	::RPG::Client::GridFightRole* Method_1_55F57D3C76369AFF(::RPG::GameCore::GridFightDragOpRoleSelector* a1)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_55F57D3C76369AFF_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_7AB72DCF5FC91A4A(::RPG::GameCore::GridFightDragOpEquipSelector* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_7AB72DCF5FC91A4A_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_53C4D44F413294D5(::RPG::GameCore::GridFightDragOpgConsumableSelector* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00_METHOD_1_53C4D44F413294D5_OFFSET))(this, a1);
	}
};
