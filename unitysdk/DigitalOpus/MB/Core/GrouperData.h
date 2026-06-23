#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering; }
namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_ClusterNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_GROUPERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA62000)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int GrouperData_TypeDefinitionIndex = 90566;

	class GrouperData : public ::System::Object
	{
	public:
		::System::Boolean clusterOnLMIndex; // 0x10
		::System::Boolean clusterByLODLevel; // 0x11
		::UnityEngine::Vector3 origin; // 0x14
		::UnityEngine::Vector3 cellSize; // 0x20
		::System::Int32 pieNumSegments; // 0x2C
		::UnityEngine::Vector3 pieAxis; // 0x30
		::System::Single ringSpacing; // 0x3C
		::System::Boolean combineSegmentsInInnermostRing; // 0x40
		::System::Boolean includeCellsWithOnlyOneRenderer; // 0x41
		::DigitalOpus::MB::Core::MB3_AgglomerativeClustering* cluster; // 0x48
		::System::Single maxDistBetweenClusters; // 0x50
		::System::Single _lastMaxDistBetweenClusters; // 0x54
		::System::Single _ObjsExtents; // 0x58
		::System::Single _minDistBetweenClusters; // 0x5C
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>* _clustersToDraw; // 0x60
		::Il2CppArray<::System::Single>* _radii; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_GROUPERDATA__CTOR_OFFSET))(this);
		}
	};
}
