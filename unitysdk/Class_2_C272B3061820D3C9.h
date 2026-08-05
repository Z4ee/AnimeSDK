#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C272B3061820D3C9_Struct_2_34C016D422AD5F80.h"
#include "unitysdk/Class_2_C272B3061820D3C9_Struct_2_BBD456EBC9087BC2_13.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/Struct_2_115F5D066814FA71.h"
#include "unitysdk/Struct_2_115F5D066814FA71_1.h"
#include "unitysdk/Struct_2_3C5D54311FBE5AAF.h"
#include "unitysdk/Struct_2_5A8D842CFA6E673C.h"
#include "unitysdk/Struct_2_825F51F177FF7CC0.h"
#include "unitysdk/Struct_2_951D1B23381BAAC2_1.h"
#include "unitysdk/Struct_2_E341BC45C7669AA6.h"
#include "unitysdk/Struct_2_EF1414971144FA6A.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1059624ADFC2A31E;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class PerceptionSenseConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnrealTypes { template <typename T> class ManagedListJobWrapper_1; }

#define CLASS_2_C272B3061820D3C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117A30E0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_01A618B377B44880_OFFSET UNITYSDK_OFFSET(0x117A8DA0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_025C809DC116AF4A_1_OFFSET UNITYSDK_OFFSET(0x117A7F80)
#define CLASS_2_C272B3061820D3C9_METHOD_2_025C809DC116AF4A_OFFSET UNITYSDK_OFFSET(0x117A6380)
#define CLASS_2_C272B3061820D3C9_METHOD_2_102BA849186931FD_OFFSET UNITYSDK_OFFSET(0x117A68A0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_118D555863230E29_OFFSET UNITYSDK_OFFSET(0x117A8320)
#define CLASS_2_C272B3061820D3C9_METHOD_2_1445716C70EB0998_1_OFFSET UNITYSDK_OFFSET(0x117A7AB0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_1445716C70EB0998_OFFSET UNITYSDK_OFFSET(0x117A6680)
#define CLASS_2_C272B3061820D3C9_METHOD_2_1F3D1DC9E97BA3E8_OFFSET UNITYSDK_OFFSET(0x117A7290)
#define CLASS_2_C272B3061820D3C9_METHOD_2_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x117A6F70)
#define CLASS_2_C272B3061820D3C9_METHOD_2_299B8F62DB118852_OFFSET UNITYSDK_OFFSET(0x117A7CD0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_2D0C5C56E7B6CE47_OFFSET UNITYSDK_OFFSET(0x117A80E0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x117A3250)
#define CLASS_2_C272B3061820D3C9_METHOD_2_5090DACB46042599_OFFSET UNITYSDK_OFFSET(0x117A35F0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_66CC9828DB1F478F_1_OFFSET UNITYSDK_OFFSET(0x117A41B0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x117A4F10)
#define CLASS_2_C272B3061820D3C9_METHOD_2_758C453BFBDB3A95_OFFSET UNITYSDK_OFFSET(0x117A4BD0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_81447978EAD29C52_OFFSET UNITYSDK_OFFSET(0x117A9160)
#define CLASS_2_C272B3061820D3C9_METHOD_2_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x117A6900)
#define CLASS_2_C272B3061820D3C9_METHOD_2_B05080FAA0B843D6_1_OFFSET UNITYSDK_OFFSET(0x117A9070)
#define CLASS_2_C272B3061820D3C9_METHOD_2_B05080FAA0B843D6_OFFSET UNITYSDK_OFFSET(0x117A8CB0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_C068A400EDDCE2FF_OFFSET UNITYSDK_OFFSET(0x117A9250)
#define CLASS_2_C272B3061820D3C9_METHOD_2_C638D0EFA253C40D_OFFSET UNITYSDK_OFFSET(0x117A7770)
#define CLASS_2_C272B3061820D3C9_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x117A30A0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117A3060)
#define CLASS_2_C272B3061820D3C9_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x117A3740)
#define CLASS_2_C272B3061820D3C9_METHOD_2_E483DF73A93B6E1A_OFFSET UNITYSDK_OFFSET(0x117A64E0)
#define CLASS_2_C272B3061820D3C9_METHOD_2_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x117A4520)
#define CLASS_2_C272B3061820D3C9_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x117A3450)
#define CLASS_2_C272B3061820D3C9_ONCREATE_OFFSET UNITYSDK_OFFSET(0x117A2F50)
#define CLASS_2_C272B3061820D3C9__CTOR_OFFSET UNITYSDK_OFFSET(0x117A5C60)

inline static constexpr unsigned int Class_2_C272B3061820D3C9_TypeDefinitionIndex = 63170;

class Class_2_C272B3061820D3C9 : public ::Foundation::SingletonDisposable_1<::Class_2_C272B3061820D3C9*>
{
public:
	// static const ::System::Int32 Field_2_1 = 0x300; // 0x0
	// static const ::System::Int32 Field_2_19 = 0x10; // 0x0
	// static const ::System::Int32 Field_2_17 = 0x8; // 0x0
	::UnrealTypes::ManagedListJobWrapper_1<::Struct_2_EF1414971144FA6A>* Field_2_11; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_E341BC45C7669AA6>* Field_2_0; // 0x18
	::UnrealTypes::ManagedListJobWrapper_1<::Struct_2_3C5D54311FBE5AAF>* Field_2_10; // 0x20
	::UnrealTypes::ManagedListJobWrapper_1<::Struct_2_115F5D066814FA71_1>* Field_2_9; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_951D1B23381BAAC2_1, ::System::Collections::Generic::List_1<::Struct_2_5A8D842CFA6E673C>*>* Field_2_21; // 0x30
	::UnrealTypes::ManagedListJobWrapper_1<::Struct_2_115F5D066814FA71>* Field_2_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Struct_2_5A8D842CFA6E673C>*>* Field_2_22; // 0x48
	::System::Collections::Generic::List_1<::Class_2_C272B3061820D3C9_Struct_2_BBD456EBC9087BC2_13>* Field_2_12; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_18; // 0x58
	::Class_1_1059624ADFC2A31E* Field_2_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::Struct_2_951D1B23381BAAC2_1, ::Class_2_C272B3061820D3C9_Struct_2_34C016D422AD5F80>* Field_2_15; // 0x68
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_2_6; // 0x70
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Struct_2_825F51F177FF7CC0>*>* Field_2_23; // 0x78
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_2_5; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_951D1B23381BAAC2_1>*>* Field_2_14; // 0x88
	::Unity::Jobs::JobHandle Field_2_16; // 0x90
	::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> Field_2_3; // 0xA0
	::System::Int32 Field_2_13; // 0xF0
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> Field_2_2; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5090DACB46042599(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_5090DACB46042599_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_758C453BFBDB3A95(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_758C453BFBDB3A95_OFFSET))(this, a1);
	}

	::System::Void Method_2_025C809DC116AF4A(::Struct_2_951D1B23381BAAC2_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_025C809DC116AF4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1445716C70EB0998(::Struct_2_951D1B23381BAAC2_1 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_1445716C70EB0998_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Boolean Method_2_E483DF73A93B6E1A(::Struct_2_951D1B23381BAAC2_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_E483DF73A93B6E1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_102BA849186931FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_102BA849186931FD_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Int32 Method_2_C638D0EFA253C40D(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_C638D0EFA253C40D_OFFSET))(this, a1);
	}

	::System::Void Method_2_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_2_1445716C70EB0998_1(::Struct_2_951D1B23381BAAC2_1 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_1445716C70EB0998_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_299B8F62DB118852(::Struct_2_951D1B23381BAAC2_1 a1, ::System::Int32 a2, ::Struct_2_5A8D842CFA6E673C& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1, ::System::Int32, ::Struct_2_5A8D842CFA6E673C&))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_299B8F62DB118852_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_025C809DC116AF4A_1(::Struct_2_951D1B23381BAAC2_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_025C809DC116AF4A_1_OFFSET))(this, a1);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_2_2D0C5C56E7B6CE47(::MoleMole::Battle::Entity* a1)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_2D0C5C56E7B6CE47_OFFSET))(a1);
	}

	::Struct_2_951D1B23381BAAC2_1 Method_2_118D555863230E29(::MoleMole::Config::PerceptionSenseConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::EntityHandle a4)
	{
		return ((::Struct_2_951D1B23381BAAC2_1(*)(::PVOID, ::MoleMole::Config::PerceptionSenseConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_118D555863230E29_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	::Struct_2_5A8D842CFA6E673C Method_2_1F3D1DC9E97BA3E8(::Struct_2_115F5D066814FA71& a1, ::System::Int32 a2, ::MoleMole::Config::PerceptionSenseConfig* a3)
	{
		return ((::Struct_2_5A8D842CFA6E673C(*)(::PVOID, ::Struct_2_115F5D066814FA71&, ::System::Int32, ::MoleMole::Config::PerceptionSenseConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_1F3D1DC9E97BA3E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B05080FAA0B843D6(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_B05080FAA0B843D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_66CC9828DB1F478F_1_OFFSET))(this);
	}

	::System::Void Method_2_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_2_01A618B377B44880(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_01A618B377B44880_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_B05080FAA0B843D6_1(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_B05080FAA0B843D6_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_81447978EAD29C52(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_81447978EAD29C52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C068A400EDDCE2FF(::Struct_2_951D1B23381BAAC2_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_951D1B23381BAAC2_1))((::PBYTE)hIl2Cpp + CLASS_2_C272B3061820D3C9_METHOD_2_C068A400EDDCE2FF_OFFSET))(this, a1);
	}
};
