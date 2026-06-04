#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_75D6A6CD8F418D47.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EC1088B4E10FDB50_METHOD_1_96A09DDF77598FA4_OFFSET UNITYSDK_OFFSET(0x12379D10)
#define CLASS_1_EC1088B4E10FDB50_METHOD_1_F38C78080477A6D3_OFFSET UNITYSDK_OFFSET(0x12379E00)

inline static constexpr unsigned int Class_1_EC1088B4E10FDB50_TypeDefinitionIndex = 58141;

class Class_1_EC1088B4E10FDB50 : public ::System::Object
{
public:
	static ::Struct_2_75D6A6CD8F418D47 Method_1_96A09DDF77598FA4(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a3)
	{
		return ((::Struct_2_75D6A6CD8F418D47(*)(::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_EC1088B4E10FDB50_METHOD_1_96A09DDF77598FA4_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_75D6A6CD8F418D47 Method_1_F38C78080477A6D3(::RPG::GameCore::RegionBlockVisibilityStatus a1, ::System::Boolean a2)
	{
		return ((::Struct_2_75D6A6CD8F418D47(*)(::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC1088B4E10FDB50_METHOD_1_F38C78080477A6D3_OFFSET))(a1, a2);
	}
};
