#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_MBBlendShapeKey; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_MBBlendShapeValue; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED_DEBUGPRINT_OFFSET UNITYSDK_OFFSET(0x1DADB940)
#define DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED_GENERATEMAPFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1DADBD30)
#define DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED_SETBUFFERS_OFFSET UNITYSDK_OFFSET(0x1DADB920)
#define DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DADC170)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int SerializableSourceBlendShape2Combined_TypeDefinitionIndex = 90667;

	class SerializableSourceBlendShape2Combined : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::GameObject*>* srcGameObject; // 0x10
		::Il2CppArray<::System::Int32>* srcBlendShapeIdx; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* combinedMeshTargetGameObject; // 0x20
		::Il2CppArray<::System::Int32>* blendShapeIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED__CTOR_OFFSET))(this);
		}

		::System::Void SetBuffers(::Il2CppArray<::UnityEngine::GameObject*>* srcGameObjs, ::Il2CppArray<::System::Int32>* srcBlendShapeIdxs, ::Il2CppArray<::UnityEngine::GameObject*>* targGameObjs, ::Il2CppArray<::System::Int32>* targBlendShapeIdx)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED_SETBUFFERS_OFFSET))(this, srcGameObjs, srcBlendShapeIdxs, targGameObjs, targBlendShapeIdx);
		}

		::System::Void DebugPrint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED_DEBUGPRINT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*, ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>* GenerateMapFromSerializedData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*, ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SERIALIZABLESOURCEBLENDSHAPE2COMBINED_GENERATEMAPFROMSERIALIZEDDATA_OFFSET))(this);
		}
	};
}
