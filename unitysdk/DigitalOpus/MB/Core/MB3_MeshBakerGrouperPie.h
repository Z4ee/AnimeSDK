#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshBakerGrouperBehaviour.h"
#include "unitysdk/MB3_MeshBakerGrouper_ClusterType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class GrouperData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1E2CFBB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1E2CF3B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_FILTERINTOGROUPS_OFFSET UNITYSDK_OFFSET(0x1E2CE710)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_GETCLUSTERTYPE_OFFSET UNITYSDK_OFFSET(0x1E2D01A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_MAXINDEXINVECTOR3_OFFSET UNITYSDK_OFFSET(0x1E2D0170)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D01B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperPie_TypeDefinitionIndex = 90571;

	class MB3_MeshBakerGrouperPie : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* selection, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_FILTERINTOGROUPS_OFFSET))(this, selection, d);
		}

		::System::Void DrawGizmos(::UnityEngine::Bounds sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData* d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_DRAWGIZMOS_OFFSET))(this, sourceObjectBounds, d);
		}

		static ::System::Int32 MaxIndexInVector3(::UnityEngine::Vector3 v)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_MAXINDEXINVECTOR3_OFFSET))(v);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 axis, ::UnityEngine::Vector3 center, ::System::Single radius, ::System::Int32 subdiv)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_DRAWCIRCLE_OFFSET))(axis, center, radius, subdiv);
		}

		::MB3_MeshBakerGrouper_ClusterType GetClusterType()
		{
			return ((::MB3_MeshBakerGrouper_ClusterType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERPIE_GETCLUSTERTYPE_OFFSET))(this);
		}
	};
}
