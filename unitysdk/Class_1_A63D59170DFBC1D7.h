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

#define CLASS_1_A63D59170DFBC1D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EDAF20)
#define CLASS_1_A63D59170DFBC1D7_GET_ENABLESPECIFICREGIONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15EDACD0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x15EDB3D0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x15EDB020)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_319606A0D2FD4BE8_OFFSET UNITYSDK_OFFSET(0x15EDB5A0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15EDB300)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15EDB7C0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x15EDB1B0)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_9241125F79498587_OFFSET UNITYSDK_OFFSET(0x15EDBF30)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_B99BAB258F170D35_OFFSET UNITYSDK_OFFSET(0x15EDBB40)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x15EDBE80)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_F3BA259643FD821A_OFFSET UNITYSDK_OFFSET(0x15EDBA70)
#define CLASS_1_A63D59170DFBC1D7_METHOD_1_FF208F2E2D0BD46F_OFFSET UNITYSDK_OFFSET(0x15EDB8E0)
#define CLASS_1_A63D59170DFBC1D7_SET_ENABLESPECIFICREGIONSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15EDACE0)
#define CLASS_1_A63D59170DFBC1D7__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDACF0)

inline static constexpr unsigned int Class_1_A63D59170DFBC1D7_TypeDefinitionIndex = 60731;

class Class_1_A63D59170DFBC1D7 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__EnableSpecificRegionStrategy_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A63D59170DFBC1D7_TypeDefinitionIndex)->GetStaticField(0x12740);
	}
	// static const ::System::String* BBINBEOGDCJ; // 0x0
	// static const ::System::String* IKMIGELDJHD; // 0x0
	// static const ::System::String* MLGMEBAPOMB; // 0x0
	// static const ::System::String* BJBJIPKIANF; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* DCAONJMLMFD; // 0x10
	::RPG::GameCore::PerformanceRegionConfig* HMPDKCFLOFJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* BELODKMCMBA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* IMBCBILBDJE; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DPLKDAELAMF; // 0x30
	::System::String* KILNEFGPOPP; // 0x38
	::System::String* AJAMCHDOGKA; // 0x40
	::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x48
	::System::Boolean ABAMGGLADEB; // 0x50
	::System::Boolean OPJJIHEMPMN; // 0x51
	::System::Boolean DNEANHCFEGC; // 0x52
	::System::Boolean ECCDAOFMKJL; // 0x53
	::System::Boolean GCGHEEAJDHF; // 0x54
	::System::Boolean BEJMCPDBCAN; // 0x55
	::System::Boolean ACHFNFCHNBC; // 0x56
	::Class_1_A63D59170DFBC1D7_RegionStrategy FAPADHGKAPO; // 0x58

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

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A63D59170DFBC1D7_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
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
