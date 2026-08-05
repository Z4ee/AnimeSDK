#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_022E518FD1A94CEB.h"
#include "unitysdk/Enum_3_1B9F00670C415C4C.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/Struct_2_F33C61518C6E2081_Struct_2_FD8E1D4014EE315F_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_F33C61518C6E2081_COMPARE_OFFSET UNITYSDK_OFFSET(0x667E40)
#define STRUCT_2_F33C61518C6E2081_GETCELLKEY_OFFSET UNITYSDK_OFFSET(0x6CCA40)
#define STRUCT_2_F33C61518C6E2081_GETKEY_OFFSET UNITYSDK_OFFSET(0x6CCA80)
#define STRUCT_2_F33C61518C6E2081_METHOD_2_7939672D634AD205_OFFSET UNITYSDK_OFFSET(0x10986670)
#define STRUCT_2_F33C61518C6E2081_METHOD_2_8679965A56F08BD0_OFFSET UNITYSDK_OFFSET(0x6CCC10)
#define STRUCT_2_F33C61518C6E2081__CTOR_OFFSET UNITYSDK_OFFSET(0x6CC890)

inline static constexpr unsigned int Struct_2_F33C61518C6E2081_TypeDefinitionIndex = 41750;

struct alignas(8) Struct_2_F33C61518C6E2081
{
	::UnityEngine::Vector3 Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::UInt32 Field_2_0; // 0x20
	::Enum_3_1B9F00670C415C4C Field_2_7; // 0x24
	::MoleMole::Config::CampType Field_2_6; // 0x28
	::Enum_3_022E518FD1A94CEB Field_2_5; // 0x2C
	::System::UInt32 Field_2_4; // 0x30
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> Field_2_11; // 0x38
	::Struct_2_F33C61518C6E2081_Struct_2_FD8E1D4014EE315F_1 Field_2_10; // 0x58

	/*
	::System::Void _ctor(::UnityEngine::Vector3 a1, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> a2, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> a3, ::System::Single a4, ::System::UInt32 a5, ::Enum_3_1B9F00670C415C4C a6, ::MoleMole::Config::CampType a7, ::Enum_3_022E518FD1A94CEB a8, ::System::UInt32 a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::System::Single, ::System::UInt32, ::Enum_3_1B9F00670C415C4C, ::MoleMole::Config::CampType, ::Enum_3_022E518FD1A94CEB, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F33C61518C6E2081__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
	*/

	/*
	::System::Double GetCellKey(::Foundation::Container::CellLocation a1)
	{
		return ((::System::Double(*)(::PVOID, ::Foundation::Container::CellLocation))((::PBYTE)hIl2Cpp + STRUCT_2_F33C61518C6E2081_GETCELLKEY_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Double GetKey(::NPCCrowd::Ability::NavigationObstacleItem& a1)
	{
		return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + STRUCT_2_F33C61518C6E2081_GETKEY_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Compare(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_F33C61518C6E2081_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_7939672D634AD205(::Enum_3_022E518FD1A94CEB a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::Enum_3_022E518FD1A94CEB, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F33C61518C6E2081_METHOD_2_7939672D634AD205_OFFSET))(a1, a2, a3);
	}

	/*
	::System::Double Method_2_8679965A56F08BD0(::NPCCrowd::Ability::NavigationObstacleItem& a1)
	{
		return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + STRUCT_2_F33C61518C6E2081_METHOD_2_8679965A56F08BD0_OFFSET))(this, a1);
	}
	*/
};
