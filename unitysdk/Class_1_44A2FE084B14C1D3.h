#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_2150278D7330DC8D.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_44A2FE084B14C1D3_METHOD_1_6EC81E5701BBC69A_OFFSET UNITYSDK_OFFSET(0x140DBDA0)
#define CLASS_1_44A2FE084B14C1D3_METHOD_1_D312A472792231FE_OFFSET UNITYSDK_OFFSET(0x140DBB40)
#define CLASS_1_44A2FE084B14C1D3_METHOD_1_EC7CE4A7E99D1C98_OFFSET UNITYSDK_OFFSET(0x140DBCD0)
#define CLASS_1_44A2FE084B14C1D3_METHOD_1_F7606175EF4528A6_OFFSET UNITYSDK_OFFSET(0x140DBC80)

inline static constexpr unsigned int Class_1_44A2FE084B14C1D3_TypeDefinitionIndex = 59408;

class Class_1_44A2FE084B14C1D3 : public ::System::Object
{
public:
	static ::Struct_2_2150278D7330DC8D Method_1_D312A472792231FE(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a3)
	{
		return ((::Struct_2_2150278D7330DC8D(*)(::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_44A2FE084B14C1D3_METHOD_1_D312A472792231FE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F7606175EF4528A6(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_44A2FE084B14C1D3_METHOD_1_F7606175EF4528A6_OFFSET))(a1);
	}

	static ::Struct_2_2150278D7330DC8D Method_1_EC7CE4A7E99D1C98(::RPG::GameCore::StageRegionVisualState a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2)
	{
		return ((::Struct_2_2150278D7330DC8D(*)(::RPG::GameCore::StageRegionVisualState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_44A2FE084B14C1D3_METHOD_1_EC7CE4A7E99D1C98_OFFSET))(a1, a2);
	}

	static ::Struct_2_2150278D7330DC8D Method_1_6EC81E5701BBC69A(::RPG::GameCore::RegionBlockVisibilityStatus a1, ::System::Boolean a2)
	{
		return ((::Struct_2_2150278D7330DC8D(*)(::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_44A2FE084B14C1D3_METHOD_1_6EC81E5701BBC69A_OFFSET))(a1, a2);
	}
};
