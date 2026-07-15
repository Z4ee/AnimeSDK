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

#define CLASS_1_1F5D319A6E7604E8_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x13A75F70)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_2D5A1CC9F08DBA6D_OFFSET UNITYSDK_OFFSET(0x13A75570)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_35121603E3CE9EF2_OFFSET UNITYSDK_OFFSET(0x13A75CA0)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_479981B955EF6A97_OFFSET UNITYSDK_OFFSET(0x13A76170)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_51E5EEEA00253CC2_OFFSET UNITYSDK_OFFSET(0x13A76390)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_70AC483A8F5F5998_OFFSET UNITYSDK_OFFSET(0x13A75880)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_9E34A975F420F38C_OFFSET UNITYSDK_OFFSET(0x13A75370)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_C2087D1A224544A0_OFFSET UNITYSDK_OFFSET(0x13A75B10)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_D6683575D8F1F976_OFFSET UNITYSDK_OFFSET(0x13A75FC0)
#define CLASS_1_1F5D319A6E7604E8_METHOD_1_DB1E903C36FB1894_OFFSET UNITYSDK_OFFSET(0x13A764B0)
#define CLASS_1_1F5D319A6E7604E8__CTOR_OFFSET UNITYSDK_OFFSET(0x13A76530)
#define CLASS_1_1F5D319A6E7604E8___GETALLWEAPONLIST_B__1_0_OFFSET UNITYSDK_OFFSET(0x13A76570)
#define CLASS_1_1F5D319A6E7604E8___GETALLWEAPONLIST_B__1_1_OFFSET UNITYSDK_OFFSET(0x13A76690)

inline static constexpr unsigned int Class_1_1F5D319A6E7604E8_TypeDefinitionIndex = 51109;

class Class_1_1F5D319A6E7604E8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::Class_1_7E1676DAE92296EE* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x28

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

	::System::Void Method_1_2D5A1CC9F08DBA6D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F5D319A6E7604E8_METHOD_1_2D5A1CC9F08DBA6D_OFFSET))(this, a1);
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
