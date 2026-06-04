#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine { class AnimationStateData; }
namespace Spine { class Atlas; }
namespace Spine { class AttachmentLoader; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class AtlasAssetBase; }
namespace Spine::Unity { class BlendModeMaterials; }
namespace Spine::Unity { class SkeletonDataModifierAsset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class TextAsset; }

#define SPINE_UNITY_SKELETONDATAASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACC0240)
#define SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1ACC0360)
#define SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACC0250)
#define SPINE_UNITY_SKELETONDATAASSET_FILLSTATEDATA_OFFSET UNITYSDK_OFFSET(0x1ACC0960)
#define SPINE_UNITY_SKELETONDATAASSET_GETANIMATIONSTATEDATA_OFFSET UNITYSDK_OFFSET(0x1ACBFA70)
#define SPINE_UNITY_SKELETONDATAASSET_GETATLASARRAY_OFFSET UNITYSDK_OFFSET(0x1ACC0400)
#define SPINE_UNITY_SKELETONDATAASSET_GETSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1ACA6490)
#define SPINE_UNITY_SKELETONDATAASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1ACC0220)
#define SPINE_UNITY_SKELETONDATAASSET_INITIALIZEWITHDATA_OFFSET UNITYSDK_OFFSET(0x1ACC0920)
#define SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_1_OFFSET UNITYSDK_OFFSET(0x1ACC0790)
#define SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1ACC0580)
#define SPINE_UNITY_SKELETONDATAASSET_RESET_OFFSET UNITYSDK_OFFSET(0x1ACC0230)
#define SPINE_UNITY_SKELETONDATAASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0A50)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataAsset_TypeDefinitionIndex = 41384;

	class SkeletonDataAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::Spine::Unity::AtlasAssetBase*>* atlasAssets; // 0x18
		::System::Single scale; // 0x20
		::UnityEngine::TextAsset* skeletonJSON; // 0x28
		::System::Boolean isUpgradingBlendModeMaterials; // 0x30
		::Spine::Unity::BlendModeMaterials* blendModeMaterials; // 0x38
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonDataModifierAsset*>* skeletonDataModifiers; // 0x40
		::Il2CppArray<::System::String*>* fromAnimation; // 0x48
		::Il2CppArray<::System::String*>* toAnimation; // 0x50
		::Il2CppArray<::System::Single>* duration; // 0x58
		::System::Single defaultMix; // 0x60
		::UnityEngine::RuntimeAnimatorController* controller; // 0x68
		::Spine::SkeletonData* skeletonData; // 0x70
		::Spine::AnimationStateData* stateData; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GET_ISLOADED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_RESET_OFFSET))(this);
		}

		static ::Spine::Unity::SkeletonDataAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* a1, ::Spine::Unity::AtlasAssetBase* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::UnityEngine::TextAsset*, ::Spine::Unity::AtlasAssetBase*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Spine::Unity::SkeletonDataAsset* CreateRuntimeInstance_1(::UnityEngine::TextAsset* a1, ::Il2CppArray<::Spine::Unity::AtlasAssetBase*>* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::Spine::Unity::AtlasAssetBase*>*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_CLEAR_OFFSET))(this);
		}

		::Spine::AnimationStateData* GetAnimationStateData()
		{
			return ((::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GETANIMATIONSTATEDATA_OFFSET))(this);
		}

		::Spine::SkeletonData* GetSkeletonData(::System::Boolean a1)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GETSKELETONDATA_OFFSET))(this, a1);
		}

		::System::Void InitializeWithData(::Spine::SkeletonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_INITIALIZEWITHDATA_OFFSET))(this, a1);
		}

		::System::Void FillStateData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_FILLSTATEDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::Spine::Atlas*>* GetAtlasArray()
		{
			return ((::Il2CppArray<::Spine::Atlas*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GETATLASARRAY_OFFSET))(this);
		}

		static ::Spine::SkeletonData* ReadSkeletonData(::Il2CppArray<::System::Byte>* a1, ::Spine::AttachmentLoader* a2, ::System::Single a3)
		{
			return ((::Spine::SkeletonData*(*)(::Il2CppArray<::System::Byte>*, ::Spine::AttachmentLoader*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_OFFSET))(a1, a2, a3);
		}

		static ::Spine::SkeletonData* ReadSkeletonData_1(::System::String* a1, ::Spine::AttachmentLoader* a2, ::System::Single a3)
		{
			return ((::Spine::SkeletonData*(*)(::System::String*, ::Spine::AttachmentLoader*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_1_OFFSET))(a1, a2, a3);
		}
	};
}
