#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MB3_MeshBakerGrouper_ClusterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

class MB3_MeshBakerCommon;
class MB3_MeshBakerGrouper;
class MB3_TextureBaker;
namespace DigitalOpus::MB::Core { class GrouperData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_ADDMESHBAKER_OFFSET UNITYSDK_OFFSET(0x1F88C0C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_DOCLUSTERING_OFFSET UNITYSDK_OFFSET(0x1F88A160)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_GETCLUSTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F88C480)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_GROUPBYLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1F88BDF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F88C490)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperBehaviour_TypeDefinitionIndex = 94500;

	class MB3_MeshBakerGrouperBehaviour : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MB3_MeshBakerCommon*>* DoClustering(::MB3_TextureBaker* tb, ::MB3_MeshBakerGrouper* grouper, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Collections::Generic::List_1<::MB3_MeshBakerCommon*>*(*)(::PVOID, ::MB3_TextureBaker*, ::MB3_MeshBakerGrouper*, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_DOCLUSTERING_OFFSET))(this, tb, grouper, d);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* GroupByLightmapIndex(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* gaws)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_GROUPBYLIGHTMAPINDEX_OFFSET))(this, gaws);
		}

		::MB3_MeshBakerCommon* AddMeshBaker(::MB3_MeshBakerGrouper* grouper, ::MB3_TextureBaker* tb, ::System::String* key, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* gaws)
		{
			return ((::MB3_MeshBakerCommon*(*)(::PVOID, ::MB3_MeshBakerGrouper*, ::MB3_TextureBaker*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_ADDMESHBAKER_OFFSET))(this, grouper, tb, key, gaws);
		}

		::MB3_MeshBakerGrouper_ClusterType GetClusterType()
		{
			return ((::MB3_MeshBakerGrouper_ClusterType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERBEHAVIOUR_GETCLUSTERTYPE_OFFSET))(this);
		}
	};
}
