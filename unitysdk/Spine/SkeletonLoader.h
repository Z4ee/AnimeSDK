#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Atlas; }
namespace Spine { class AttachmentLoader; }
namespace Spine { class SkeletonData; }
namespace Spine { class SkeletonLoader_LinkedMesh; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_SKELETONLOADER_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1E349680)
#define SPINE_SKELETONLOADER_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1E349690)
#define SPINE_SKELETONLOADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3495B0)
#define SPINE_SKELETONLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3494C0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonLoader_TypeDefinitionIndex = 32899;

	class SkeletonLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Spine::SkeletonLoader_LinkedMesh*>* linkedMeshes; // 0x10
		::Spine::AttachmentLoader* attachmentLoader; // 0x18
		::System::Single scale; // 0x20

		::System::Void _ctor(::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER__CTOR_OFFSET))(this, atlasArray);
		}

		::System::Void _ctor_1(::Spine::AttachmentLoader* attachmentLoader)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER__CTOR_1_OFFSET))(this, attachmentLoader);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_SET_SCALE_OFFSET))(this, value);
		}
	};
}
