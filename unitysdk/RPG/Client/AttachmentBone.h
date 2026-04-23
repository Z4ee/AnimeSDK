#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ATTACHMENTBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D48FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachmentBone_TypeDefinitionIndex = 63107;

	class AttachmentBone : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Boolean AllowUpdate; // 0x18
		::System::String* AttachmentRootName; // 0x20
		::UnityEngine::Transform* AttachmentRoot; // 0x28
		::System::String* TargetBoneName; // 0x30
		::UnityEngine::Transform* TargetBone; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTBONE__CTOR_OFFSET))(this);
		}
	};
}
