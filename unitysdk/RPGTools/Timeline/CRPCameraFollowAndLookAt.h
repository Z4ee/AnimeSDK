#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CRPCAMERAFOLLOWANDLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0xB89FCF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraFollowAndLookAt_TypeDefinitionIndex = 44640;

	class CRPCameraFollowAndLookAt : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* FollowTargetUniqueName; // 0x18
		::System::String* FollowTargetAttachPoint; // 0x20
		::System::String* LookAtTargetUniqueName; // 0x28
		::System::String* LookAtTargetAttachPoint; // 0x30
		::System::String* LookAtTargetAnchorName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERAFOLLOWANDLOOKAT__CTOR_OFFSET))(this);
		}
	};
}
