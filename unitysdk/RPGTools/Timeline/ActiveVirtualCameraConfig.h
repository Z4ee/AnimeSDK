#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActiveVirtualCamera; }
namespace RPGTools::Timeline { class CameraBlendConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACONFIG_METHOD_1_01D7A2526CAC6B2C_OFFSET UNITYSDK_OFFSET(0xAB1BA90)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1BBF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActiveVirtualCameraConfig_TypeDefinitionIndex = 38685;

	class ActiveVirtualCameraConfig : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::Boolean IsActive; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* FollowTargetUniqueName; // 0x28
		::System::String* FollowTargetAttachPoint; // 0x30
		::System::String* LookAtTargetUniqueName; // 0x38
		::System::String* LookAtTargetAttachPoint; // 0x40
		::System::String* LookAtTargetAnchorName; // 0x48
		::System::Boolean WaitBlendFinish; // 0x50
		::RPGTools::Timeline::CameraBlendConfig* BlendConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActiveVirtualCamera* Method_1_01D7A2526CAC6B2C()
		{
			return ((::RPG::GameCore::ActiveVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACONFIG_METHOD_1_01D7A2526CAC6B2C_OFFSET))(this);
		}
	};
}
