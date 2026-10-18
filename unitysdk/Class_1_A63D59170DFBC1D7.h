#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A63D59170DFBC1D7_RegionStrategy.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class PerformanceRegionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_1_A63D59170DFBC1D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ECF000)
#define CLASS_1_A63D59170DFBC1D7_GET_ENABLESPECIFICREGIONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15ECEDB0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x15ECF4B0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x15ECF100)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_319606A0D2FD4BE8_OFFSET UNITYSDK_OFFSET(0x15ECF680)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15ECF3F0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x15ECF2A0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15ECF8A0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_9241125F79498587_OFFSET UNITYSDK_OFFSET(0x15ED0010)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_B99BAB258F170D35_OFFSET UNITYSDK_OFFSET(0x15ECFC20)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x15ECFF60)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_F3BA259643FD821A_OFFSET UNITYSDK_OFFSET(0x15ECFB50)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_FF208F2E2D0BD46F_OFFSET UNITYSDK_OFFSET(0x15ECF9C0)
#define CLASS_1_A63D59170DFBC1D7_SET_ENABLESPECIFICREGIONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15ECEDC0)
#define CLASS_1_A63D59170DFBC1D7__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECEDD0)

inline static constexpr unsigned int Class_1_A63D59170DFBC1D7_TypeDefinitionIndex = 60731;

class Class_1_A63D59170DFBC1D7 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__EnableSpecificRegionStrategy_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A63D59170DFBC1D7_TypeDefinitionIndex)->GetStaticField(0x10570);
	}
	// static const ::System::String* BBINBEOGDCJ; // 0x0
	// static const ::System::String* IKMIGELDJHD; // 0x0
	// static const ::System::String* MLGMEBAPOMB; // 0x0
	// static const ::System::String* BJBJIPKIANF; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* DCAONJMLMFD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DPLKDAELAMF; // 0x18
	::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* BELODKMCMBA; // 0x28
	::System::String* KILNEFGPOPP; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* IMBCBILBDJE; // 0x38
	::RPG::GameCore::PerformanceRegionConfig* HMPDKCFLOFJ; // 0x40
	::System::String* AJAMCHDOGKA; // 0x48
	::Class_1_A63D59170DFBC1D7_RegionStrategy FAPADHGKAPO; // 0x50
	::System::Boolean DNEANHCFEGC; // 0x54
	::System::Boolean ACHFNFCHNBC; // 0x55
	::System::Boolean ABAMGGLADEB; // 0x56
	::System::Boolean ECCDAOFMKJL; // 0x57
	::System::Boolean OPJJIHEMPMN; // 0x58
	::System::Boolean GCGHEEAJDHF; // 0x59
	::System::Boolean BEJMCPDBCAN; // 0x5A

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7__CTOR_OFFSET))(this, a1);
	}

	static ::System::Boolean get_EnableSpecificRegionStrategy()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_GET_ENABLESPECIFICREGIONSTRATEGY_OFFSET))();
	}

	static ::System::Void set_EnableSpecificRegionStrategy(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_SET_ENABLESPECIFICREGIONSTRATEGY_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_FF208F2E2D0BD46F(::System::Int32 a1, ::UnityEngine::Timeline::TimelineClip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_FF208F2E2D0BD46F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3BA259643FD821A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_F3BA259643FD821A_OFFSET))(this, a1);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Boolean Method_1_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Boolean Method_1_319606A0D2FD4BE8(::RPG::GameCore::ELevelPerformanceType a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_319606A0D2FD4BE8_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_9241125F79498587(::Il2CppArray<::System::String*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_9241125F79498587_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_B99BAB258F170D35(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_B99BAB258F170D35_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}
};
