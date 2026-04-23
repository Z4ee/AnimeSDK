#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class __f__AnonymousType0_3;

#define CLASS_1_B6B8E3B8688F8129_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x12A8C540)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x12A8B970)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12A8BB00)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x12A8B380)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_28C6E0FADF303548_1_OFFSET UNITYSDK_OFFSET(0x12A8AD10)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_28C6E0FADF303548_OFFSET UNITYSDK_OFFSET(0x12A8ACF0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_40E496A2D9215DB6_OFFSET UNITYSDK_OFFSET(0x12A8C3B0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_42ADF3CD22C6DC0B_OFFSET UNITYSDK_OFFSET(0x12A8C020)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_5792ABA1B94CBFDD_1_OFFSET UNITYSDK_OFFSET(0x12A8C510)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_5792ABA1B94CBFDD_OFFSET UNITYSDK_OFFSET(0x12A8B7A0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_714BD8F42894237B_OFFSET UNITYSDK_OFFSET(0x12A8B7C0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x12A8AF00)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_9318E8EEE0BEDE0E_OFFSET UNITYSDK_OFFSET(0x12A8BEC0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_A583248D0B8C6672_OFFSET UNITYSDK_OFFSET(0x12A8BBA0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_AE415E676B976D3D_OFFSET UNITYSDK_OFFSET(0x12A8AD30)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_DCD877BD19E8D449_OFFSET UNITYSDK_OFFSET(0x12A8C160)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_E80EA32BE81E63BF_OFFSET UNITYSDK_OFFSET(0x12A8BC50)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_E813A7E4FE6C2748_OFFSET UNITYSDK_OFFSET(0x12A8ABA0)
#define CLASS_1_B6B8E3B8688F8129_METHOD_1_F59A5133C1E3113B_OFFSET UNITYSDK_OFFSET(0x12A8C0E0)
#define CLASS_1_B6B8E3B8688F8129_SET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x12A8C550)
#define CLASS_1_B6B8E3B8688F8129__CTOR_OFFSET UNITYSDK_OFFSET(0x12A8C560)
#define CLASS_1_B6B8E3B8688F8129__SORTWEAPONLIST_B__1_2_OFFSET UNITYSDK_OFFSET(0x12A8C580)

inline static constexpr unsigned int Class_1_B6B8E3B8688F8129_TypeDefinitionIndex = 49361;

class Class_1_B6B8E3B8688F8129 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x10
	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _SortLists_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129__CTOR_OFFSET))(this);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* Method_1_E813A7E4FE6C2748(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_E813A7E4FE6C2748_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Boolean Method_1_E80EA32BE81E63BF(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_E80EA32BE81E63BF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_A583248D0B8C6672(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_A583248D0B8C6672_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_42ADF3CD22C6DC0B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_42ADF3CD22C6DC0B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_AE415E676B976D3D(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_AE415E676B976D3D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F59A5133C1E3113B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_F59A5133C1E3113B_OFFSET))(a1);
	}

	::System::Void Method_1_714BD8F42894237B(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_714BD8F42894237B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_9318E8EEE0BEDE0E(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_9318E8EEE0BEDE0E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_DCD877BD19E8D449(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::RPG::GameCore::EvolveGearType a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_DCD877BD19E8D449_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_40E496A2D9215DB6(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_40E496A2D9215DB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_GET_SORTLISTS_OFFSET))(this);
	}

	::System::Void set_SortLists(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_SET_SORTLISTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_5792ABA1B94CBFDD()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_5792ABA1B94CBFDD_OFFSET))(this);
	}

	::System::Void Method_1_28C6E0FADF303548(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_28C6E0FADF303548_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_5792ABA1B94CBFDD_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_5792ABA1B94CBFDD_1_OFFSET))(this);
	}

	::System::Void Method_1_28C6E0FADF303548_1(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129_METHOD_1_28C6E0FADF303548_1_OFFSET))(this, a1);
	}

	::System::Boolean _SortWeaponList_b__1_2(::__f__AnonymousType0_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::UInt32>* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType0_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B8E3B8688F8129__SORTWEAPONLIST_B__1_2_OFFSET))(this, x);
	}
};
