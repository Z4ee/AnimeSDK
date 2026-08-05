#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MdbEditor { class MdbSkeletalNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MDBEDITOR_MDBSKELETON_CREATESKELETONFROMOBJECTHIERARCHY_OFFSET UNITYSDK_OFFSET(0x124212B0)
#define MDBEDITOR_MDBSKELETON_CREATESKELETONRECURSIVE_OFFSET UNITYSDK_OFFSET(0x12421F80)
#define MDBEDITOR_MDBSKELETON_GET_BONES_OFFSET UNITYSDK_OFFSET(0x12422430)
#define MDBEDITOR_MDBSKELETON_GET_SKELETONNAME_OFFSET UNITYSDK_OFFSET(0x12422450)
#define MDBEDITOR_MDBSKELETON_SET_BONES_OFFSET UNITYSDK_OFFSET(0x12422440)
#define MDBEDITOR_MDBSKELETON_SET_SKELETONNAME_OFFSET UNITYSDK_OFFSET(0x12422460)
#define MDBEDITOR_MDBSKELETON__CTOR_OFFSET UNITYSDK_OFFSET(0x124211B0)

namespace MdbEditor
{
	inline static constexpr unsigned int MdbSkeleton_TypeDefinitionIndex = 95362;

	class MdbSkeleton : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>* _Bones_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* TransformCaches; // 0x18
		::System::String* _SkeletonName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON__CTOR_OFFSET))(this);
		}

		static ::MdbEditor::MdbSkeleton* CreateSkeletonFromObjectHierarchy(::System::String* skeletonName, ::UnityEngine::GameObject* root)
		{
			return ((::MdbEditor::MdbSkeleton*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON_CREATESKELETONFROMOBJECTHIERARCHY_OFFSET))(skeletonName, root);
		}

		static ::System::Int32 CreateSkeletonRecursive(::UnityEngine::Transform* thisTransform, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>* container, ::System::Int32 parentIdx, ::System::Collections::Generic::HashSet_1<::System::String*>* validBoneNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* transformCaches)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON_CREATESKELETONRECURSIVE_OFFSET))(thisTransform, parentTransform, container, parentIdx, validBoneNames, transformCaches);
		}

		::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>* get_Bones()
		{
			return ((::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON_GET_BONES_OFFSET))(this);
		}

		::System::Void set_Bones(::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MdbEditor::MdbSkeletalNode*>*))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON_SET_BONES_OFFSET))(this, value);
		}

		::System::String* get_SkeletonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON_GET_SKELETONNAME_OFFSET))(this);
		}

		::System::Void set_SkeletonName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBSKELETON_SET_SKELETONNAME_OFFSET))(this, value);
		}
	};
}
