#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }
namespace RPG::Client { class FloorConnectivityData_VertexInfo; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_CLEARCACHESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x9702A00)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9702960)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x97029C0)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x9702B10)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9703B80)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__GETAVAILABLEEDGE_OFFSET UNITYSDK_OFFSET(0x9702BF0)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__GETPATH_OFFSET UNITYSDK_OFFSET(0x9703530)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__RESETALLVERTICESVISITEDFLAG_OFFSET UNITYSDK_OFFSET(0x9703410)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__TRYADDNEWVERTEX_OFFSET UNITYSDK_OFFSET(0x9703A20)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_TypeDefinitionIndex = 52144;

	class FloorConnectivityData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 WildcardID = 0x0; // 0x0
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeInfo*>* _Solutions; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeInfo*>*>* _SolutionPathes; // 0x18
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::LinkedList_1<::RPG::Client::FloorConnectivityData_VertexInfo*>*>* _PathsNeedCheck; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeInfo*>* _Edges; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FloorConnectivityData_VertexInfo*>* _Vertices; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _TempIDs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void SetupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_SETUPDATA_OFFSET))(this);
		}

		::System::Void ClearCacheSolutions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_CLEARCACHESOLUTIONS_OFFSET))(this);
		}

		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 curFloorId, ::System::UInt32 targetFloorId, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* targetEdgeConnectionInfo)
		{
			return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_TRYFINDNEXTPOINT_OFFSET))(this, curFloorId, targetFloorId, targetEdgeConnectionInfo);
		}

		::System::Boolean _GetAvailableEdge(::System::UInt32 startFloorId, ::System::UInt32 endFloorId, ::RPG::Client::FloorConnectivityData_EdgeInfo*& edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__GETAVAILABLEEDGE_OFFSET))(this, startFloorId, endFloorId, edge);
		}

		::System::Void _TryAddNewVertex(::System::UInt32 floorId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__TRYADDNEWVERTEX_OFFSET))(this, floorId);
		}

		::System::Void _ResetAllVerticesVisitedFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__RESETALLVERTICESVISITEDFLAG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeInfo*>* _GetPath(::System::Collections::Generic::LinkedList_1<::RPG::Client::FloorConnectivityData_VertexInfo*>* pathInfos, ::System::UInt32 targetID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeInfo*>*(*)(::PVOID, ::System::Collections::Generic::LinkedList_1<::RPG::Client::FloorConnectivityData_VertexInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__GETPATH_OFFSET))(this, pathInfos, targetID);
		}
	};
}
