#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_19;
namespace RPG::Client { template <typename T> class PrefList_1; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TriggerPerformanceMask; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_1_OFFSET UNITYSDK_OFFSET(0x9F308F0)
#define RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x9F30250)
#define RPG_CLIENT_PERFORMANCEUITLS_DESTORYPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x9F30FB0)
#define RPG_CLIENT_PERFORMANCEUITLS_GETSAVEPREFLIST_OFFSET UNITYSDK_OFFSET(0x9F31AB0)
#define RPG_CLIENT_PERFORMANCEUITLS_GETSEENPREFLIST_OFFSET UNITYSDK_OFFSET(0x9F31540)
#define RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESAVE_OFFSET UNITYSDK_OFFSET(0x9F318D0)
#define RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESEEN_OFFSET UNITYSDK_OFFSET(0x9F31360)
#define RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESAVE_OFFSET UNITYSDK_OFFSET(0x9F31CC0)
#define RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESEEN_OFFSET UNITYSDK_OFFSET(0x9F31750)
#define RPG_CLIENT_PERFORMANCEUITLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F31E40)
#define RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_1_OFFSET UNITYSDK_OFFSET(0x9F30C50)
#define RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x9F30620)
#define RPG_CLIENT_PERFORMANCEUITLS__PREFLISTADDUINTVALUE_OFFSET UNITYSDK_OFFSET(0x9F31200)
#define RPG_CLIENT_PERFORMANCEUITLS__PREFLISTCONTAINSUINTVALUE_OFFSET UNITYSDK_OFFSET(0x9F31180)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceUitls_TypeDefinitionIndex = 49219;

	class PerformanceUitls : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PREFS_MAX_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PerformanceUitls_TypeDefinitionIndex)->GetStaticField(0x12120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::LevelGraphComponent* CreateTriggerPerformanceLevelGraph(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType, ::System::String* levelGraphName, ::Class_1_83665B095F1535B5_19* flags, ::RPG::GameCore::TriggerPerformanceMask* maskConfig, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::String*, ::Class_1_83665B095F1535B5_19*, ::RPG::GameCore::TriggerPerformanceMask*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_OFFSET))(performanceID, performanceType, levelGraphName, flags, maskConfig, groupInfo);
		}

		static ::RPG::GameCore::LevelGraphComponent* CreateTriggerPerformanceLevelGraph_1(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* performanceIDPairList, ::System::String* levelGraphName)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_CREATETRIGGERPERFORMANCELEVELGRAPH_1_OFFSET))(performanceIDPairList, levelGraphName);
		}

		static ::System::Void DestoryPerformanceLevelGraph(::RPG::GameCore::LevelGraphComponent* graphComponent)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_DESTORYPERFORMANCELEVELGRAPH_OFFSET))(graphComponent);
		}

		static ::RPG::GameCore::LevelGraphConfig* _GetPerformanceLevelGraphConfig(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType, ::RPG::GameCore::TriggerPerformanceMask* maskConfig)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::RPG::GameCore::TriggerPerformanceMask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_OFFSET))(performanceID, performanceType, maskConfig);
		}

		static ::RPG::GameCore::LevelGraphConfig* _GetPerformanceLevelGraphConfig_1(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* performanceIDPairList)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__GETPERFORMANCELEVELGRAPHCONFIG_1_OFFSET))(performanceIDPairList);
		}

		static ::System::Boolean _PrefListContainsUintValue(::RPG::Client::PrefList_1<::System::UInt32>* prefList, ::System::UInt32 v)
		{
			return ((::System::Boolean(*)(::RPG::Client::PrefList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__PREFLISTCONTAINSUINTVALUE_OFFSET))(prefList, v);
		}

		static ::System::Void _PrefListAddUintValue(::RPG::Client::PrefList_1<::System::UInt32>* prefList, ::System::UInt32 v)
		{
			return ((::System::Void(*)(::RPG::Client::PrefList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS__PREFLISTADDUINTVALUE_OFFSET))(prefList, v);
		}

		static ::System::Boolean IsPerformanceSeen(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESEEN_OFFSET))(performanceType, performanceID);
		}

		static ::System::Void SetPerformanceSeen(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESEEN_OFFSET))(performanceType, performanceID);
		}

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetSeenPrefList(::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_GETSEENPREFLIST_OFFSET))(performanceType);
		}

		static ::System::Boolean IsPerformanceSave(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_ISPERFORMANCESAVE_OFFSET))(performanceType, performanceID);
		}

		static ::System::Void SetPerformanceSave(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_SETPERFORMANCESAVE_OFFSET))(performanceType, performanceID);
		}

		static ::RPG::Client::PrefList_1<::System::UInt32>* GetSavePrefList(::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::RPG::Client::PrefList_1<::System::UInt32>*(*)(::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEUITLS_GETSAVEPREFLIST_OFFSET))(performanceType);
		}
	};
}
