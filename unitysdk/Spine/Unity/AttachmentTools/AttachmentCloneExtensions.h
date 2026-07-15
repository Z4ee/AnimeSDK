#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace Spine { class AtlasRegion; }
namespace Spine { class Attachment; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_1_OFFSET UNITYSDK_OFFSET(0x1689F3D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET UNITYSDK_OFFSET(0x1689F0E0)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentCloneExtensions_TypeDefinitionIndex = 42311;

	class AttachmentCloneExtensions : public ::System::Object
	{
	public:
		static ::Spine::Attachment* GetRemappedClone(::Spine::Attachment* a1, ::UnityEngine::Sprite* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::TextureFormat a9, ::System::Boolean a10)
		{
			return ((::Spine::Attachment*(*)(::Spine::Attachment*, ::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::Spine::Attachment* GetRemappedClone_1(::Spine::Attachment* a1, ::Spine::AtlasRegion* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::Spine::Attachment*(*)(::Spine::Attachment*, ::Spine::AtlasRegion*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_1_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
