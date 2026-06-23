#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/NapMaterialProperty.h"
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

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11371D90)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceComponentInfo_TypeDefinitionIndex = 72829;

	class NPCAvatarGOReferenceComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* gpuMR; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* gpuMaterials; // 0x18
		::NPCCrowd::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialAssetRef; // 0x20
		::UnityEngine::GameObject* cpuGo; // 0x28
		::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* lodMeshAssetRef; // 0x30
		::UnityEngine::MeshFilter* gpuMF; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*>* overridePropertyColorsList; // 0x40
		::UnityEngine::GameObject* gpuGo; // 0x48
		::System::String* smrMeshName; // 0x50
		::System::String* seqFrameKey; // 0x58
		::UnityEngine::SkinnedMeshRenderer* smr; // 0x60
		::ENPCAvatarBodyPart part; // 0x68
		::System::Int32 currentPartID; // 0x6C
		::System::Boolean forceHideBySequenceFrameTrack; // 0x70
		::System::Boolean hasBlendShape; // 0x71
		::System::Boolean gpuVisibleByLod; // 0x72
		::System::Boolean cpuVisibleByLod; // 0x73

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
