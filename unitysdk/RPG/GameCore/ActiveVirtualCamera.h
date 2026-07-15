#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActiveVirtualCameraTargetSelectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VirtualCameraModeDynamicParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_METHOD_3_4BD98F092BADBE91_OFFSET UNITYSDK_OFFSET(0x1AADB5D0)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_METHOD_3_68DE2B2E790B38E5_OFFSET UNITYSDK_OFFSET(0x1AADB760)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_METHOD_3_B1559056ADA042F3_OFFSET UNITYSDK_OFFSET(0x1AADC280)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADA860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveVirtualCamera_TypeDefinitionIndex = 20051;

	class ActiveVirtualCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x28
		::System::Boolean IsEntryPointCamera; // 0x30
		::System::Boolean IsActive; // 0x31
		::RPG::GameCore::ActiveVirtualCameraTargetSelectType SelectFollowTargetType; // 0x34
		::System::String* FollowTargetUniqueName; // 0x38
		::System::String* FollowTargetAnchorName; // 0x40
		::RPG::GameCore::DynamicString* LevelAreaFollowKey; // 0x48
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x50
		::System::String* FollowTargetAttachPoint; // 0x58
		::RPG::GameCore::ActiveVirtualCameraTargetSelectType SelectLookAtTargetType; // 0x60
		::System::String* LookAtTargetUniqueName; // 0x68
		::System::String* LookAtTargetAnchorName; // 0x70
		::RPG::GameCore::DynamicString* LevelAreaLookAtKey; // 0x78
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x80
		::System::String* LookAtTargetAttachPoint; // 0x88
		::System::Boolean WaitBlendFinish; // 0x90
		::System::Boolean BlockInputWhenBlending; // 0x91
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x98
		::System::Boolean VCameraDitherNPCOn; // 0xA0
		::System::Single VCameraDitherMaxDistance; // 0xA4
		::System::Single VCameraDitherAlphaMin; // 0xA8
		::System::Boolean KeepMainCameraRotation; // 0xAC
		::System::Single CenterPosX; // 0xB0
		::System::Single CenterPosY; // 0xB4
		::RPG::GameCore::DynamicFloat* OrthoGraphicSize; // 0xB8
		::System::Boolean DisableProtectWhenBlending; // 0xC0
		::RPG::GameCore::VirtualCameraModeDynamicParam* DynamicParams; // 0xC8
		::System::Boolean ImmediatelyRefresh; // 0xD0
		::System::Boolean OverrideBlendConfig; // 0xD1
		::RPG::GameCore::DynamicString* OverrideBlendCurveName; // 0xD8
		::RPG::GameCore::DynamicFloat* OverrideBlendTime; // 0xE0
		::System::Boolean EnableCameraProtectAfterBlendOut; // 0xE8
		::System::Boolean EnableDragCamera; // 0xE9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4BD98F092BADBE91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveVirtualCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveVirtualCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_METHOD_3_4BD98F092BADBE91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68DE2B2E790B38E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveVirtualCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_METHOD_3_68DE2B2E790B38E5_OFFSET))(a1, a2);
		}

		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* Method_3_B1559056ADA042F3(::System::Boolean a1)
		{
			return ((::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_METHOD_3_B1559056ADA042F3_OFFSET))(this, a1);
		}
	};
}
