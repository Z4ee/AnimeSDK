#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryResult.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"

#define NPCCROWD_ABILITY_MINPATHQUERYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5ECD50)
#define NPCCROWD_ABILITY_MINPATHQUERYDATA_GETNEARESTPOS_OFFSET UNITYSDK_OFFSET(0x5ECE70)
#define NPCCROWD_ABILITY_MINPATHQUERYDATA_INITDATA_OFFSET UNITYSDK_OFFSET(0x5ECD40)
#define NPCCROWD_ABILITY_MINPATHQUERYDATA_QUERYFINISHED_OFFSET UNITYSDK_OFFSET(0x5ECD60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MinPathQueryData_TypeDefinitionIndex = 66569;

	struct alignas(8) MinPathQueryData
	{
		// static const ::System::Int32 MaxPolygonCnt = 0x64; // 0x0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment> queryDatas; // 0x10
		::Il2CppArray<::UnityEngine::Experimental::AI::NavMeshQuery>* queries; // 0x20
		::System::Int32 count; // 0x28
		::NPCCrowd::Ability::MinPathQueryResult queryResult; // 0x2C

		::System::Boolean InitData(::System::Int32 cnt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MINPATHQUERYDATA_INITDATA_OFFSET))(this, cnt);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MINPATHQUERYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean QueryFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MINPATHQUERYDATA_QUERYFINISHED_OFFSET))(this);
		}

		::System::Void GetNearestPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MINPATHQUERYDATA_GETNEARESTPOS_OFFSET))(this);
		}
	};
}
