#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_GPUIBONE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xD5CD2C0)
#define NPCCROWD_ANIMATION_GPUIBONE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xD5CD390)
#define NPCCROWD_ANIMATION_GPUIBONE__CTOR_OFFSET UNITYSDK_OFFSET(0xD5CD3F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUIBone_TypeDefinitionIndex = 79241;

	class GPUIBone : public ::System::Object
	{
	public:
		::System::String* boneTransformName; // 0x10
		::System::Int32 boneIndex; // 0x18
		::System::Int32 parentBoneIndex; // 0x1C
		::System::Collections::Generic::List_1<::System::Int32>* childBoneIndexes; // 0x20
		::System::Boolean dontDestroy; // 0x28
		::System::Boolean isRoot; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIBONE__CTOR_OFFSET))(this);
		}

		::System::Void AddChild(::System::Int32 childBoneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIBONE_ADDCHILD_OFFSET))(this, childBoneIndex);
		}

		::System::Void RemoveChild(::System::Int32 childBoneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIBONE_REMOVECHILD_OFFSET))(this, childBoneIndex);
		}
	};
}
