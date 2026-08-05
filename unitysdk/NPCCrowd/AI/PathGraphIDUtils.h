#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x119218E0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTPATHID_OFFSET UNITYSDK_OFFSET(0x119219F0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHID_OFFSET UNITYSDK_OFFSET(0x11921B00)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHNODEID_OFFSET UNITYSDK_OFFSET(0x11921C10)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x11921D20)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x11921820)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMGRAPHNODEID_OFFSET UNITYSDK_OFFSET(0x11921BB0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x119217C0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTPATHID_OFFSET UNITYSDK_OFFSET(0x11921930)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHID_OFFSET UNITYSDK_OFFSET(0x11921A40)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHNODEID_OFFSET UNITYSDK_OFFSET(0x11921B50)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x11921C60)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x11921880)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTPATHID_OFFSET UNITYSDK_OFFSET(0x11921990)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMGRAPHID_OFFSET UNITYSDK_OFFSET(0x11921AA0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x11921CC0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphIDUtils_TypeDefinitionIndex = 89190;

	class PathGraphIDUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_GRAPH_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MAX_GRAPH_ID_INDEX = 0x63; // 0x0
		// static const ::System::Int32 INVALID_GRAPH_NODE_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MAX_GRAPH_NODE_ID = 0x3E7; // 0x0

		static ::System::Int32 GetIndexFromFeaturePointID(::System::Int32 featurePointID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTID_OFFSET))(featurePointID);
		}

		static ::System::Int32 GetGraphIDFromFeaturePointID(::System::Int32 featurePointID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMFEATUREPOINTID_OFFSET))(featurePointID);
		}

		static ::System::Int32 GetSectionIDFromFeaturePointID(::System::Int32 featurePointID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTID_OFFSET))(featurePointID);
		}

		static ::System::Int32 FormatFeaturePointID(::System::Int32 graphID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTID_OFFSET))(graphID, index);
		}

		static ::System::Int32 GetIndexFromFeaturePointPathID(::System::Int32 pathID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTPATHID_OFFSET))(pathID);
		}

		static ::System::Int32 GetSectionIDFromFeaturePointPathID(::System::Int32 pathID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTPATHID_OFFSET))(pathID);
		}

		static ::System::Int32 FormatFeaturePointPathID(::System::Int32 sectionID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTPATHID_OFFSET))(sectionID, index);
		}

		static ::System::Int32 GetIndexFromGraphID(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHID_OFFSET))(graphID);
		}

		static ::System::Int32 GetSectionIDFromGraphID(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMGRAPHID_OFFSET))(graphID);
		}

		static ::System::Int32 FormatGraphID(::System::Int32 sectionID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHID_OFFSET))(sectionID, index);
		}

		static ::System::Int32 GetIndexFromGraphNodeID(::System::Int32 nodeID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHNODEID_OFFSET))(nodeID);
		}

		static ::System::Int32 GetGraphIDFromGraphNodeID(::System::Int32 nodeID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMGRAPHNODEID_OFFSET))(nodeID);
		}

		static ::System::Int32 FormatGraphNodeID(::System::Int32 graphID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHNODEID_OFFSET))(graphID, index);
		}

		static ::System::Int32 GetIndexFromSpawnGroupID(::System::Int32 spawnGroupID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMSPAWNGROUPID_OFFSET))(spawnGroupID);
		}

		static ::System::Int32 GetSectionIDFromSpawnGroupID(::System::Int32 spawnGroupID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMSPAWNGROUPID_OFFSET))(spawnGroupID);
		}

		static ::System::Int32 FormatSpawnGroupID(::System::Int32 sectionID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATSPAWNGROUPID_OFFSET))(sectionID, index);
		}
	};
}
