#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_18;
namespace RPG::Client { template <typename T> class PrefList_1; }
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_1_OFFSET UNITYSDK_OFFSET(0xDA5C9C0)
#define RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDA5C340)
#define RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERSTANDALONEPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDA5D0C0)
#define RPG_CLIENT_PERFORMANCEUITLS_DESTORYPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDA5D810)
#define RPG_CLIENT_PERFORMANCEUITLS_GETSAVEPREFLIST_OFFSET UNITYSDK_OFFSET(0xDA5E360)
#define RPG_CLIENT_PERFORMANCEUITLS_GETSEENPREFLIST_OFFSET UNITYSDK_OFFSET(0xDA5DE20)
#define RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESAVE_OFFSET UNITYSDK_OFFSET(0xDA5E1A0)
#define RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESEEN_OFFSET UNITYSDK_OFFSET(0xDA5DC60)
#define RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESAVE_OFFSET UNITYSDK_OFFSET(0xDA5E570)
#define RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESEEN_OFFSET UNITYSDK_OFFSET(0xDA5E030)
#define RPG_CLIENT_PERFORMANCEUITLS__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA5E6E0)
#define RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_1_OFFSET UNITYSDK_OFFSET(0xDA5CD70)
#define RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xDA5C7C0)
#define RPG_CLIENT_PERFORMANCEUITLS__GETSTANDALONEPERFORMANCELEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xDA5D550)
#define RPG_CLIENT_PERFORMANCEUITLS__PREFLISTADDUINTVALUE_OFFSET UNITYSDK_OFFSET(0xDA5DA60)
#define RPG_CLIENT_PERFORMANCEUITLS__PREFLISTCONTAINSUINTVALUE_OFFSET UNITYSDK_OFFSET(0xDA5D9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceUitls_TypeDefinitionIndex = 60852;

	class PerformanceUitls : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PREFS_MAX_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PerformanceUitls_TypeDefinitionIndex)->GetStaticField(0xE800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::LevelGraphComponent* CreateTriggerPerformanceLevelGraph(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::String* a3, ::Class_1_83665B095F1535B5_18* a4, ::RPG::GameCore::TriggerPerformanceMask* a5, ::RPG::GameCore::RuntimeGroupInfo* a6)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::String*, ::Class_1_83665B095F1535B5_18*, ::RPG::GameCore::TriggerPerformanceMask*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::LevelGraphComponent* CreateTriggerPerformanceLevelGraph_1(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LevelGraphComponent* CreateTriggerStandalonePerformanceLevelGraph(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::String* a6, ::RPG::GameCore::TriggerPerformanceMask* a7, ::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* a8, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a9, ::System::String* a10)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::RPG::GameCore::TriggerPerformanceMask*, ::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERSTANDALONEPERFORMANCELEVELGRAPH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DestoryPerformanceLevelGraph(::RPG::GameCore::LevelGraphComponent* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_DESTORYPERFORMANCELEVELGRAPH_OFFSET))(a1);
		}

		static ::RPG::GameCore::LevelGraphConfig* _GetPerformanceLevelGraphConfig(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::RPG::GameCore::TriggerPerformanceMask* a3)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::RPG::GameCore::TriggerPerformanceMask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::LevelGraphConfig* _GetPerformanceLevelGraphConfig_1(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* a1)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::LevelGraphConfig* _GetStandalonePerformanceLevelGraphConfig(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::RPG::GameCore::TriggerPerformanceMask* a6, ::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* a7, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a8, ::System::String* a9)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TriggerPerformanceMask*, ::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__GETSTANDALONEPERFORMANCELEVELGRAPHCONFIG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean _PrefListContainsUintValue(::RPG::Client::PrefList_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::PrefList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__PREFLISTCONTAINSUINTVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void _PrefListAddUintValue(::RPG::Client::PrefList_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::PrefList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__PREFLISTADDUINTVALUE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPerformanceSeen(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESEEN_OFFSET))(a1, a2);
		}

		static ::System::Void SetPerformanceSeen(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESEEN_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetSeenPrefList(::RPG::GameCore::ELevelPerformanceType a1)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_GETSEENPREFLIST_OFFSET))(a1);
		}

		static ::System::Boolean IsPerformanceSave(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESAVE_OFFSET))(a1, a2);
		}

		static ::System::Void SetPerformanceSave(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESAVE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetSavePrefList(::RPG::GameCore::ELevelPerformanceType a1)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_GETSAVEPREFLIST_OFFSET))(a1);
		}
	};
}
