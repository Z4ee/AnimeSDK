#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_MeshData; }
namespace HoudiniEngineUnity { class HEU_VertexEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_GEOGROUP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x8432B00)
#define HOUDINIENGINEUNITY_HEU_GEOGROUP_SETUPNORMALINDICES_OFFSET UNITYSDK_OFFSET(0x842F0F0)
#define HOUDINIENGINEUNITY_HEU_GEOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x842F060)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeoGroup_TypeDefinitionIndex = 37819;

	class HEU_GeoGroup : public ::System::Object
	{
	public:
		::System::String* _groupName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>* _subMeshesMap; // 0x18
		::Il2CppArray<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>* _sharedNormalIndices; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::HoudiniEngineUnity::HEU_GeoGroup* other)
		{
			return ((::System::Int32(*)(::PVOID, ::HoudiniEngineUnity::HEU_GeoGroup*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOGROUP_COMPARETO_OFFSET))(this, other);
		}

		::System::Void SetupNormalIndices(::System::Int32 indicesCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOGROUP_SETUPNORMALINDICES_OFFSET))(this, indicesCount);
		}
	};
}
