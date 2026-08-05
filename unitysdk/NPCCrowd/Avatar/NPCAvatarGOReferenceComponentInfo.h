#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace NPCCrowd { template <typename T> class NPCSoftAssetPathList_1; }
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF5650)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceComponentInfo_TypeDefinitionIndex = 55881;

	class NPCAvatarGOReferenceComponentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*>* overridePropertyColorsList; // 0x10
		::System::String* seqFrameKey; // 0x18
		::System::String* smrMeshName; // 0x20
		::UnityEngine::GameObject* cpuGo; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* gpuMaterials; // 0x30
		::UnityEngine::GameObject* gpuGo; // 0x38
		::NPCCrowd::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialAssetRef; // 0x40
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* lodMeshAssetRef; // 0x48
		::UnityEngine::MeshFilter* gpuMF; // 0x50
		::UnityEngine::MeshRenderer* gpuMR; // 0x58
		::UnityEngine::SkinnedMeshRenderer* smr; // 0x60
		::System::Boolean cpuVisibleByLod; // 0x68
		::System::Boolean gpuVisibleByLod; // 0x69
		::System::Boolean forceHideBySequenceFrameTrack; // 0x6A
		::System::Boolean hasBlendShape; // 0x6B
		::ENPCAvatarBodyPart part; // 0x6C
		::System::Int32 currentPartID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
