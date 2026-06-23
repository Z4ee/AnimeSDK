#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_UVAdjuster_Atlas; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_GenerateUV2Delegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLYSHOWHIDE_OFFSET UNITYSDK_OFFSET(0x1DAD3A50)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1DAD3990)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1DAD09C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLY_OFFSET UNITYSDK_OFFSET(0x1DAD0060)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_INSTANCE2COMBINED_MAPADD_OFFSET UNITYSDK_OFFSET(0x1DACBDD0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_INSTANCE2COMBINED_MAPREMOVE_OFFSET UNITYSDK_OFFSET(0x1DACBE60)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__ADDTOCOMBINED_OFFSET UNITYSDK_OFFSET(0x1DACBFB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4150)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__SHOWHIDEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1DACBEC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1DACF6C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner_TypeDefinitionIndex = 90644;

	class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__CTOR_OFFSET))(this);
		}

		static ::System::Void instance2Combined_MapAdd(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*& _instance2combined_map, ::UnityEngine::GameObject* gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*&, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_INSTANCE2COMBINED_MAPADD_OFFSET))(_instance2combined_map, gameObjectID, dgo);
		}

		static ::System::Void instance2Combined_MapRemove(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*& _instance2combined_map, ::UnityEngine::GameObject* gameObjectID)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_INSTANCE2COMBINED_MAPREMOVE_OFFSET))(_instance2combined_map, gameObjectID);
		}

		static ::System::Boolean _ShowHideGameObjects(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* c)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__SHOWHIDEGAMEOBJECTS_OFFSET))(c);
		}

		static ::System::Boolean _AddToCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::System::Int32 totalAddVerts, ::System::Int32 totalDeleteVerts, ::System::Int32 numResultMats, ::System::Int32 totalAddBlendShapes, ::System::Int32 totalDeleteBlendShapes, ::Il2CppArray<::System::Int32>* totalAddSubmeshTris, ::Il2CppArray<::System::Int32>* totalDeleteSubmeshTris, ::Il2CppArray<::System::Int32>* _goToDelete, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* toAddDGOs, ::Il2CppArray<::UnityEngine::GameObject*>* _goToAdd, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas* uvAdjuster, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*& oldMeshData, ::System::Diagnostics::Stopwatch* sw)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*&, ::System::Diagnostics::Stopwatch*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__ADDTOCOMBINED_OFFSET))(c, newChannels, totalAddVerts, totalDeleteVerts, numResultMats, totalAddBlendShapes, totalDeleteBlendShapes, totalAddSubmeshTris, totalDeleteSubmeshTris, _goToDelete, toAddDGOs, _goToAdd, uvAdjuster, oldMeshData, sw);
		}

		static ::System::Boolean _UpdateGameObjects(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* dgosToUpdate, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateUV5, ::System::Boolean updateUV6, ::System::Boolean updateUV7, ::System::Boolean updateUV8, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas* uVAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER__UPDATEGAMEOBJECTS_OFFSET))(combiner, dgosToUpdate, newChannels, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo, uVAdjuster, LOG_LEVEL);
		}

		static ::System::Boolean Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLY_OFFSET))(combiner, uv2GenerationMethod);
		}

		static ::System::Boolean Apply_1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLY_1_OFFSET))(combiner, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
		}

		static ::System::Boolean Apply_2(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean uv5, ::System::Boolean uv6, ::System::Boolean uv7, ::System::Boolean uv8, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapesFlag, ::System::Boolean suppressClearMesh, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLY_2_OFFSET))(combiner, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapesFlag, suppressClearMesh, uv2GenerationMethod);
		}

		static ::System::Boolean ApplyShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_SUBCOMBINER_APPLYSHOWHIDE_OFFSET))(combiner);
		}
	};
}
