#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
template <typename T> class NPCSoftAssetPathList_1;
template <typename T> class NPCSoftAssetPath_1;

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D962E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceComponentInfo_TypeDefinitionIndex = 77396;

	class NPCAvatarGOReferenceComponentInfo : public ::System::Object
	{
	public:
		::NPCSoftAssetPathList_1<::UnityEngine::Material*>* materialAssetRef; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*>* overridePropertyColorsList; // 0x18
		::UnityEngine::GameObject* gpuGo; // 0x20
		::UnityEngine::MeshRenderer* gpuMR; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* gpuMaterials; // 0x30
		::UnityEngine::GameObject* cpuGo; // 0x38
		::UnityEngine::SkinnedMeshRenderer* smr; // 0x40
		::System::String* smrMeshName; // 0x48
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* lodMeshAssetRef; // 0x50
		::UnityEngine::MeshFilter* gpuMF; // 0x58
		::System::Int32 currentPartID; // 0x60
		::ENPCAvatarBodyPart part; // 0x64
		::System::Boolean hasBlendShape; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
