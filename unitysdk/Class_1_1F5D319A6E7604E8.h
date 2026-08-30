#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

class Class_1_7E1676DAE92296EE;
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F5D319A6E7604E8_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0xBCF9E00)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_2B8A1C24CAC94DE4_OFFSET UNITYSDK_OFFSET(0xBCF93D0)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_35121603E3CE9EF2_OFFSET UNITYSDK_OFFSET(0xBCF9B30)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_479981B955EF6A97_OFFSET UNITYSDK_OFFSET(0xBCFA000)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_51E5EEEA00253CC2_OFFSET UNITYSDK_OFFSET(0xBCFA220)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_70AC483A8F5F5998_OFFSET UNITYSDK_OFFSET(0xBCF9710)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_9E34A975F420F38C_OFFSET UNITYSDK_OFFSET(0xBCF91D0)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_C2087D1A224544A0_OFFSET UNITYSDK_OFFSET(0xBCF99A0)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_D6683575D8F1F976_OFFSET UNITYSDK_OFFSET(0xBCF9E50)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_DB1E903C36FB1894_OFFSET UNITYSDK_OFFSET(0xBCFA340)
#define CLASS_1_1F5D319A6E7604E8__CTOR_OFFSET UNITYSDK_OFFSET(0xBCFA3C0)
#define CLASS_1_1F5D319A6E7604E8___GETALLWEAPONLIST_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCFA400)
#define CLASS_1_1F5D319A6E7604E8___GETALLWEAPONLIST_B__1_1_OFFSET UNITYSDK_OFFSET(0xBCFA520)

inline static constexpr unsigned int Class_1_1F5D319A6E7604E8_TypeDefinitionIndex = 53793;

class Class_1_1F5D319A6E7604E8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CNONBLDGIHJ; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* HHJNBBEECAO; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* DMEADPGDBKK; // 0x20
	::Class_1_7E1676DAE92296EE* PPIJFBECGNJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E34A975F420F38C(::RPG::GameCore::EvolveBuildGearManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_9E34A975F420F38C_OFFSET))(this, a1);
	}

	::System::Void Method_1_70AC483A8F5F5998(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_70AC483A8F5F5998_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_C2087D1A224544A0(::Il2CppArray<::RPG::GameCore::EvolveGearType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EvolveGearType>*))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_C2087D1A224544A0_OFFSET))(this, a1);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_GET_SORTLISTS_OFFSET))(this);
	}

	::System::Void Method_1_2B8A1C24CAC94DE4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_2B8A1C24CAC94DE4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_35121603E3CE9EF2(::RPG::GameCore::EvolveGearType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_35121603E3CE9EF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6683575D8F1F976(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_D6683575D8F1F976_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479981B955EF6A97(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_479981B955EF6A97_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51E5EEEA00253CC2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_51E5EEEA00253CC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB1E903C36FB1894(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_DB1E903C36FB1894_OFFSET))(this, a1, a2);
	}

	::System::Int32 __GetAllWeaponList_b__1_0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8___GETALLWEAPONLIST_B__1_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 __GetAllWeaponList_b__1_1(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8___GETALLWEAPONLIST_B__1_1_OFFSET))(this, a1, a2);
	}
};
