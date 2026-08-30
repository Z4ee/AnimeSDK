#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class __f__AnonymousType0_3;

#define CLASS_1_7E1676DAE92296EE_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x169AFD40)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x169ADDC0)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_3DC762133EDE8148_OFFSET UNITYSDK_OFFSET(0x169AFB80)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_81E30764936033FF_1_OFFSET UNITYSDK_OFFSET(0x169AFCE0)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_81E30764936033FF_OFFSET UNITYSDK_OFFSET(0x169AE740)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_8A10D5349EC61A74_OFFSET UNITYSDK_OFFSET(0x169AF030)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_8C4591490B4A8B06_OFFSET UNITYSDK_OFFSET(0x169AD310)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_9F3E211EA39E6081_1_OFFSET UNITYSDK_OFFSET(0x169AD520)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_9F3E211EA39E6081_OFFSET UNITYSDK_OFFSET(0x169AD4C0)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_A55D0CAB5131E54B_OFFSET UNITYSDK_OFFSET(0x169AF530)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_AB5056432453A6A7_OFFSET UNITYSDK_OFFSET(0x169AF720)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_BC4740E176F1E3DE_OFFSET UNITYSDK_OFFSET(0x169AE790)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_DB1C94D9F4964A97_OFFSET UNITYSDK_OFFSET(0x169AD580)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_DCD877BD19E8D449_OFFSET UNITYSDK_OFFSET(0x169AF8F0)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_E02F100F3080733B_OFFSET UNITYSDK_OFFSET(0x169AEA30)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x169AD770)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_E9A7ABBC27926278_OFFSET UNITYSDK_OFFSET(0x169AEF50)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_F59A5133C1E3113B_OFFSET UNITYSDK_OFFSET(0x169AF870)
#define CLASS_1_7E1676DAE92296EE_METHOD_1_F61674668435814A_OFFSET UNITYSDK_OFFSET(0x169AEDE0)
#define CLASS_1_7E1676DAE92296EE_SET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x169AFD50)
#define CLASS_1_7E1676DAE92296EE__CTOR_OFFSET UNITYSDK_OFFSET(0x169AFD60)
#define CLASS_1_7E1676DAE92296EE__SORTWEAPONLIST_B__1_2_OFFSET UNITYSDK_OFFSET(0x169AFD80)

inline static constexpr unsigned int Class_1_7E1676DAE92296EE_TypeDefinitionIndex = 53794;

class Class_1_7E1676DAE92296EE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* NAFNMAAFMPE; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* LLJNCILHILH; // 0x18
	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _SortLists_k__BackingField; // 0x20
	::System::Int32 PMLEJJCOCOE; // 0x28
	::System::Int32 IEFIPOKEJHI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE__CTOR_OFFSET))(this);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* Method_1_8C4591490B4A8B06(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_8C4591490B4A8B06_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_E02F100F3080733B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_E02F100F3080733B_OFFSET))(this);
	}

	::System::Boolean Method_1_8A10D5349EC61A74(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_8A10D5349EC61A74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_E9A7ABBC27926278(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_E9A7ABBC27926278_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F61674668435814A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_F61674668435814A_OFFSET))(this);
	}

	::System::Boolean Method_1_AB5056432453A6A7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_AB5056432453A6A7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_DB1C94D9F4964A97(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_DB1C94D9F4964A97_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F59A5133C1E3113B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_F59A5133C1E3113B_OFFSET))(a1);
	}

	::System::Void Method_1_BC4740E176F1E3DE(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_BC4740E176F1E3DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A55D0CAB5131E54B(::RPG::GameCore::EvolveGearType a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_A55D0CAB5131E54B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_DCD877BD19E8D449(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3, ::RPG::GameCore::EvolveGearType a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_DCD877BD19E8D449_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3DC762133EDE8148(::System::UInt32 a1, ::RPG::GameCore::EvolveGearType a2, ::RPG::GameCore::EvolveGearType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EvolveGearType, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_3DC762133EDE8148_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_GET_SORTLISTS_OFFSET))(this);
	}

	::System::Void set_SortLists(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_SET_SORTLISTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_81E30764936033FF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_81E30764936033FF_OFFSET))(this);
	}

	::System::Void Method_1_9F3E211EA39E6081(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_9F3E211EA39E6081_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* Method_1_81E30764936033FF_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_81E30764936033FF_1_OFFSET))(this);
	}

	::System::Void Method_1_9F3E211EA39E6081_1(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE_METHOD_1_9F3E211EA39E6081_1_OFFSET))(this, a1);
	}

	::System::Boolean _SortWeaponList_b__1_2(::__f__AnonymousType0_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType0_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE__SORTWEAPONLIST_B__1_2_OFFSET))(this, a1);
	}
};
