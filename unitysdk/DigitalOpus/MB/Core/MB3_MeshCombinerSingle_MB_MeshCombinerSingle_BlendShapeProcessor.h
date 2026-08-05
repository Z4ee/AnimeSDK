#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MBBlendShape; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MeshChannels; }
namespace DigitalOpus::MB::Core { class SerializableSourceBlendShape2Combined; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_ALLOCATEBLENDSHAPEARRAYIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1F53DAF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_APPLYBLENDSHAPEFRAMESTOMESHANDBUILDMAP_MERGEBLENDSHAPESWITHTHESAMENAME_OFFSET UNITYSDK_OFFSET(0x1F53DFB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_APPLYBLENDSHAPEFRAMESTOMESHANDBUILDMAP_OFFSET UNITYSDK_OFFSET(0x1F53CB30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_ASSIGNNEWBLENDSHAPESTOCOMBINERIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1F53DBF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_COPYBLENDSHAPESFORNEWMESHIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1F53DE30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_COPYBLENDSHAPESINCURRENTMESHIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1F53DD00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F53C370)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F53C350)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_GETBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1F53C3A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__BUILDSRCSHAPE2COMBINEDMAP_OFFSET UNITYSDK_OFFSET(0x1F53D660)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__CONVERTBLENDSHAPENAMETOOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x1F53D530)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F53C390)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__ZEROARRAY_OFFSET UNITYSDK_OFFSET(0x1F53D5F0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor_TypeDefinitionIndex = 94563;

	class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor : public ::System::Object
	{
	public:
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>* nblendShapes; // 0x10
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner; // 0x18
		::System::Boolean _disposed; // 0x20

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* cm)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__CTOR_OFFSET))(this, cm);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_DISPOSE_1_OFFSET))(this);
		}

		static ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>* GetBlendShapes(::UnityEngine::Mesh* m, ::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>* meshID2MeshChannels)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>*(*)(::UnityEngine::Mesh*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_GETBLENDSHAPES_OFFSET))(m, gameObject, meshID2MeshChannels);
		}

		::System::Void ApplyBlendShapeFramesToMeshAndBuildMap(::System::Int32 newVertCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_APPLYBLENDSHAPEFRAMESTOMESHANDBUILDMAP_OFFSET))(this, newVertCount);
		}

		::System::Void AllocateBlendShapeArrayIfNecessary(::System::Int32 nBlendShapeSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_ALLOCATEBLENDSHAPEARRAYIFNECESSARY_OFFSET))(this, nBlendShapeSize);
		}

		::System::Void AssignNewBlendShapesToCombinerIfNecessary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_ASSIGNNEWBLENDSHAPESTOCOMBINERIFNECESSARY_OFFSET))(this);
		}

		::System::Void CopyBlendShapesInCurrentMeshIfNecessary(::System::Int32& targBlendShapeIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_COPYBLENDSHAPESINCURRENTMESHIFNECESSARY_OFFSET))(this, targBlendShapeIdx, dgo);
		}

		::System::Void CopyBlendShapesForNewMeshIfNecessary(::System::Int32& targBlendShapeIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::UnityEngine::Mesh* mesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* meshChannelCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_COPYBLENDSHAPESFORNEWMESHIFNECESSARY_OFFSET))(this, targBlendShapeIdx, dgo, mesh, meshChannelCache);
		}

		static ::System::String* _ConvertBlendShapeNameToOutputName(::System::String* bs)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__CONVERTBLENDSHAPENAMETOOUTPUTNAME_OFFSET))(bs);
		}

		::System::Void ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName(::System::Int32 newVertCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR_APPLYBLENDSHAPEFRAMESTOMESHANDBUILDMAP_MERGEBLENDSHAPESWITHTHESAMENAME_OFFSET))(this, newVertCount);
		}

		static ::System::Void _BuildSrcShape2CombinedMap(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* map, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>* bs)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__BUILDSRCSHAPE2COMBINEDMAP_OFFSET))(combiner, map, bs);
		}

		static ::System::Void _ZeroArray(::Il2CppArray<::UnityEngine::Vector3>* arr, ::System::Int32 idx, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BLENDSHAPEPROCESSOR__ZEROARRAY_OFFSET))(arr, idx, length);
		}
	};
}
