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

#define CLASS_1_422ED86A802898E9_METHOD_1_5815B86C36A91516_OFFSET UNITYSDK_OFFSET(0x18BA3880)
#define CLASS_1_422ED86A802898E9_METHOD_1_5F843A97F523D9EF_OFFSET UNITYSDK_OFFSET(0x18BA3730)
#define CLASS_1_422ED86A802898E9_METHOD_1_83EE08F077CD2B04_OFFSET UNITYSDK_OFFSET(0x18BA3A30)
#define CLASS_1_422ED86A802898E9_METHOD_1_E8A17197B878CC52_OFFSET UNITYSDK_OFFSET(0x18BA36B0)
#define CLASS_1_422ED86A802898E9_METHOD_1_F625427749226153_OFFSET UNITYSDK_OFFSET(0x18BA3990)
#define CLASS_1_422ED86A802898E9__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA3AD0)

inline static constexpr unsigned int Class_1_422ED86A802898E9_TypeDefinitionIndex = 65562;

class Class_1_422ED86A802898E9 : public ::System::Object
{
public:
	::RPG::Client::GridFightTeam* GJHCMKBNING; // 0x10
	::RPG::Client::GridFightConsumableInfo* KBOHJOMPLKH; // 0x18
	::RPG::Client::GridFightEquipInfo* NCHCLADAFBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_422ED86A802898E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E8A17197B878CC52(::RPG::Client::GridFightGameSession* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + CLASS_1_422ED86A802898E9_METHOD_1_E8A17197B878CC52_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightGridData* Method_1_5F843A97F523D9EF(::RPG::GameCore::GridFightDragOpGridSelector* a1)
	{
		return ((::RPG::Client::GridFightGridData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpGridSelector*))((::PBYTE)hIl2Cpp + CLASS_1_422ED86A802898E9_METHOD_1_5F843A97F523D9EF_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_5815B86C36A91516(::RPG::GameCore::GridFightDragOpRoleSelector* a1)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + CLASS_1_422ED86A802898E9_METHOD_1_5815B86C36A91516_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemData* Method_1_F625427749226153(::RPG::GameCore::GridFightDragOpEquipSelector* a1)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + CLASS_1_422ED86A802898E9_METHOD_1_F625427749226153_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableItemData* Method_1_83EE08F077CD2B04(::RPG::GameCore::GridFightDragOpgConsumableSelector* a1)
	{
		return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + CLASS_1_422ED86A802898E9_METHOD_1_83EE08F077CD2B04_OFFSET))(this, a1);
	}
};
