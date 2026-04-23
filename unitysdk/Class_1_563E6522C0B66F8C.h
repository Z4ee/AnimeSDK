#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

class Class_1_B6B8E3B8688F8129;
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_563E6522C0B66F8C_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x11E84430)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_2D5A1CC9F08DBA6D_OFFSET UNITYSDK_OFFSET(0x11E83B00)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_35121603E3CE9EF2_OFFSET UNITYSDK_OFFSET(0x11E841E0)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_56FD732C92374785_OFFSET UNITYSDK_OFFSET(0x11E84760)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_70AC483A8F5F5998_OFFSET UNITYSDK_OFFSET(0x11E83E10)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_747FD4D2EE10D57A_OFFSET UNITYSDK_OFFSET(0x11E84880)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_8CC975A3C6CCF32C_OFFSET UNITYSDK_OFFSET(0x11E84450)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_9E34A975F420F38C_OFFSET UNITYSDK_OFFSET(0x11E83900)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_C2087D1A224544A0_OFFSET UNITYSDK_OFFSET(0x11E84050)
#define CLASS_1_563E6522C0B66F8C_METHOD_1_D1D49EAE2709AEB6_OFFSET UNITYSDK_OFFSET(0x11E845A0)
#define CLASS_1_563E6522C0B66F8C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E84900)
#define CLASS_1_563E6522C0B66F8C___GETALLWEAPONLIST_B__1_0_OFFSET UNITYSDK_OFFSET(0x11E84940)
#define CLASS_1_563E6522C0B66F8C___GETALLWEAPONLIST_B__1_1_OFFSET UNITYSDK_OFFSET(0x11E849F0)

inline static constexpr unsigned int Class_1_563E6522C0B66F8C_TypeDefinitionIndex = 49360;

class Class_1_563E6522C0B66F8C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::Class_1_B6B8E3B8688F8129* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E34A975F420F38C(::RPG::GameCore::EvolveBuildGearManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_9E34A975F420F38C_OFFSET))(this, a1);
	}

	::System::Void Method_1_70AC483A8F5F5998(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_70AC483A8F5F5998_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_C2087D1A224544A0(::Il2CppArray<::RPG::GameCore::EvolveGearType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EvolveGearType>*))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_C2087D1A224544A0_OFFSET))(this, a1);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_GET_SORTLISTS_OFFSET))(this);
	}

	::System::Void Method_1_2D5A1CC9F08DBA6D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_2D5A1CC9F08DBA6D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_35121603E3CE9EF2(::RPG::GameCore::EvolveGearType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_35121603E3CE9EF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CC975A3C6CCF32C(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_8CC975A3C6CCF32C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1D49EAE2709AEB6(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_D1D49EAE2709AEB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_56FD732C92374785(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_56FD732C92374785_OFFSET))(this, a1);
	}

	::System::Void Method_1_747FD4D2EE10D57A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C_METHOD_1_747FD4D2EE10D57A_OFFSET))(this, a1, a2);
	}

	::System::Int32 __GetAllWeaponList_b__1_0(::RPG::GameCore::EvolveBuildGearEquipInfo* a, ::RPG::GameCore::EvolveBuildGearEquipInfo* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C___GETALLWEAPONLIST_B__1_0_OFFSET))(this, a, b);
	}

	::System::Int32 __GetAllWeaponList_b__1_1(::RPG::GameCore::EvolveBuildGearEquipInfo* a, ::RPG::GameCore::EvolveBuildGearEquipInfo* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_563E6522C0B66F8C___GETALLWEAPONLIST_B__1_1_OFFSET))(this, a, b);
	}
};
