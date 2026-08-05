#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/Struct_2_115F5D066814FA71_1.h"
#include "unitysdk/Struct_2_3C5D54311FBE5AAF.h"
#include "unitysdk/Struct_2_EF1414971144FA6A.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_3E16E0E6C44BD7A7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7FD8E0)
#define STRUCT_2_3E16E0E6C44BD7A7_METHOD_2_373F176746230A05_OFFSET UNITYSDK_OFFSET(0x14634950)
#define STRUCT_2_3E16E0E6C44BD7A7_METHOD_2_8B74F04D6BA25D7B_OFFSET UNITYSDK_OFFSET(0x146348A0)

inline static constexpr unsigned int Struct_2_3E16E0E6C44BD7A7_TypeDefinitionIndex = 55446;

struct alignas(8) Struct_2_3E16E0E6C44BD7A7
{
	::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> Field_2_3; // 0x10
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> Field_2_2; // 0x60
	::Unity::Collections::NativeArray_1<::Struct_2_3C5D54311FBE5AAF> Field_2_1; // 0x80
	::Unity::Collections::NativeArray_1<::Struct_2_EF1414971144FA6A> Field_2_0; // 0x90
	::Unity::Collections::NativeArray_1<::Struct_2_115F5D066814FA71_1> Field_2_7; // 0xA0
	::System::Single Field_2_6; // 0xB0

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_3E16E0E6C44BD7A7_EXECUTE_OFFSET))(this, a1);
	}

	/*
	static ::UnityEngine::Bounds Method_2_373F176746230A05(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3E16E0E6C44BD7A7_METHOD_2_373F176746230A05_OFFSET))(a1, a2, a3, a4);
	}
	*/

	/*
	static ::UnityEngine::Bounds Method_2_8B74F04D6BA25D7B(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3E16E0E6C44BD7A7_METHOD_2_8B74F04D6BA25D7B_OFFSET))(a1, a2);
	}
	*/
};
