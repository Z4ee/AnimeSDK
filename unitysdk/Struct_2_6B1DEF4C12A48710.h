#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6B1DEF4C12A48710_GET_ACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x784260)
#define STRUCT_2_6B1DEF4C12A48710_GET_AGGREGATEDSTATEV2_OFFSET UNITYSDK_OFFSET(0x3A319B0)
#define STRUCT_2_6B1DEF4C12A48710_GET_COMPATKEY_OFFSET UNITYSDK_OFFSET(0xF080)
#define STRUCT_2_6B1DEF4C12A48710_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12370)
#define STRUCT_2_6B1DEF4C12A48710_GET_USESSOURCEPROFILE_OFFSET UNITYSDK_OFFSET(0x3AA6B30)
#define STRUCT_2_6B1DEF4C12A48710_GET_VISUALSTATE_OFFSET UNITYSDK_OFFSET(0x19050)
#define STRUCT_2_6B1DEF4C12A48710__CTOR_OFFSET UNITYSDK_OFFSET(0x3AA6B00)

inline static constexpr unsigned int Struct_2_6B1DEF4C12A48710_TypeDefinitionIndex = 62231;

struct alignas(4) Struct_2_6B1DEF4C12A48710
{
	::RPG::GameCore::StageRegionVisualState _VisualState_k__BackingField; // 0x10
	::RPG::GameCore::StageRegionActiveState _ActiveState_k__BackingField; // 0x14
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority _Priority_k__BackingField; // 0x18
	::Struct_2_960171EC79068492 _AggregatedStateV2_k__BackingField; // 0x1C
	::RPG::Client::CompatKey _CompatKey_k__BackingField; // 0x24
	::System::Boolean _UsesSourceProfile_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::StageRegionVisualState a1, ::RPG::GameCore::StageRegionActiveState a2, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a3, ::Struct_2_960171EC79068492 a4, ::RPG::Client::CompatKey a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionActiveState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::Struct_2_960171EC79068492, ::RPG::Client::CompatKey, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::GameCore::StageRegionVisualState get_VisualState()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710_GET_VISUALSTATE_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionActiveState get_ActiveState()
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710_GET_ACTIVESTATE_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_Priority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710_GET_PRIORITY_OFFSET))(this);
	}

	::Struct_2_960171EC79068492 get_AggregatedStateV2()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710_GET_AGGREGATEDSTATEV2_OFFSET))(this);
	}

	::RPG::Client::CompatKey get_CompatKey()
	{
		return ((::RPG::Client::CompatKey(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710_GET_COMPATKEY_OFFSET))(this);
	}

	::System::Boolean get_UsesSourceProfile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B1DEF4C12A48710_GET_USESSOURCEPROFILE_OFFSET))(this);
	}
};
