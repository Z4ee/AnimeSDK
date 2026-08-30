#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline::BattlePerform { class BPCameraBlendConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12B0B0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCameraConfig_TypeDefinitionIndex = 49242;

	class BPCameraConfig : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* FollowTargetUniqueName; // 0x20
		::System::String* FollowTargetAttachPoint; // 0x28
		::System::String* LookAtTargetUniqueName; // 0x30
		::System::String* LookAtTargetAttachPoint; // 0x38
		::System::String* LookAtTargetAnchorName; // 0x40
		::RPGTools::Timeline::BattlePerform::BPCameraBlendConfig* BlendConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
