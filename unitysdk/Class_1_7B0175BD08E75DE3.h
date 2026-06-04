#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class __f__AnonymousType0_3;

#define CLASS_1_7B0175BD08E75DE3_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0xA998D20)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA997970)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_0C04AA32A9483F52_OFFSET UNITYSDK_OFFSET(0xA998940)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA998170)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_28C6E0FADF303548_1_OFFSET UNITYSDK_OFFSET(0xA997260)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_28C6E0FADF303548_OFFSET UNITYSDK_OFFSET(0xA997240)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_3BFD6EC773610597_OFFSET UNITYSDK_OFFSET(0xA998640)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_3DC762133EDE8148_OFFSET UNITYSDK_OFFSET(0xA998B90)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_47CCC0ABD8EC9D6A_OFFSET UNITYSDK_OFFSET(0xA998310)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_5792ABA1B94CBFDD_1_OFFSET UNITYSDK_OFFSET(0xA998CF0)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_5792ABA1B94CBFDD_OFFSET UNITYSDK_OFFSET(0xA997E40)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xA997470)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_AB5056432453A6A7_OFFSET UNITYSDK_OFFSET(0xA998770)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xA998020)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_DB1C94D9F4964A97_OFFSET UNITYSDK_OFFSET(0xA997280)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_E3BD7CDE7636BDA1_OFFSET UNITYSDK_OFFSET(0xA997E60)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_E813A7E4FE6C2748_OFFSET UNITYSDK_OFFSET(0xA9970F0)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_E9A7ABBC27926278_OFFSET UNITYSDK_OFFSET(0xA998230)
#define CLASS_1_7B0175BD08E75DE3_METHOD_1_F59A5133C1E3113B_OFFSET UNITYSDK_OFFSET(0xA9988C0)
#define CLASS_1_7B0175BD08E75DE3_SET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0xA998D30)
#define CLASS_1_7B0175BD08E75DE3__CTOR_OFFSET UNITYSDK_OFFSET(0xA998D40)
#define CLASS_1_7B0175BD08E75DE3__SORTWEAPONLIST_B__1_2_OFFSET UNITYSDK_OFFSET(0xA998D60)

inline static constexpr unsigned int Class_1_7B0175BD08E75DE3_TypeDefinitionIndex = 50028;

class Class_1_7B0175BD08E75DE3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _SortLists_k__BackingField; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3__CTOR_OFFSET))(this);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* Method_1_E813A7E4FE6C2748(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_E813A7E4FE6C2748_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Boolean Method_1_47CCC0ABD8EC9D6A(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_47CCC0ABD8EC9D6A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_E9A7ABBC27926278(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_E9A7ABBC27926278_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_AB5056432453A6A7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_AB5056432453A6A7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_DB1C94D9F4964A97(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_DB1C94D9F4964A97_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F59A5133C1E3113B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_F59A5133C1E3113B_OFFSET))(a1);
	}

	::System::Void Method_1_E3BD7CDE7636BDA1(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_E3BD7CDE7636BDA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3BFD6EC773610597(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_3BFD6EC773610597_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_0C04AA32A9483F52(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::RPG::GameCore::EvolveGearType a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_0C04AA32A9483F52_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3DC762133EDE8148(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_3DC762133EDE8148_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_GET_SORTLISTS_OFFSET))(this);
	}

	::System::Void set_SortLists(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_SET_SORTLISTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_5792ABA1B94CBFDD()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_5792ABA1B94CBFDD_OFFSET))(this);
	}

	::System::Void Method_1_28C6E0FADF303548(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_28C6E0FADF303548_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_5792ABA1B94CBFDD_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_5792ABA1B94CBFDD_1_OFFSET))(this);
	}

	::System::Void Method_1_28C6E0FADF303548_1(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3_METHOD_1_28C6E0FADF303548_1_OFFSET))(this, a1);
	}

	::System::Boolean _SortWeaponList_b__1_2(::__f__AnonymousType0_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType0_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3__SORTWEAPONLIST_B__1_2_OFFSET))(this, a1);
	}
};
