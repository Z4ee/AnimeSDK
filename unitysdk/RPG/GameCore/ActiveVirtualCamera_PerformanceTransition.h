#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class VCameraBlend_PerformanceTransition; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_METHOD_3_2B8DAD87E37E1F9B_OFFSET UNITYSDK_OFFSET(0x1AADC4B0)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_METHOD_3_35FB502404EFCE2A_OFFSET UNITYSDK_OFFSET(0x1AADC460)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_METHOD_3_844132D0780C62B7_OFFSET UNITYSDK_OFFSET(0x1AADCAC0)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADC440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveVirtualCamera_PerformanceTransition_TypeDefinitionIndex = 21054;

	class ActiveVirtualCamera_PerformanceTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x28
		::System::Boolean IsEntryPointCamera; // 0x30
		::System::Boolean IsActive; // 0x31
		::System::String* FollowTargetUniqueName; // 0x38
		::System::String* FollowTargetAttachPoint; // 0x40
		::System::String* FollowTargetAnchorName; // 0x48
		::System::String* LookAtTargetUniqueName; // 0x50
		::System::String* LookAtTargetAnchorName; // 0x58
		::RPG::GameCore::DynamicString* LevelAreaLookAtKey; // 0x60
		::System::Boolean WaitBlendFinish; // 0x68
		::RPG::GameCore::VCameraBlend_PerformanceTransition* BlendConfig; // 0x70
		::System::Boolean VCameraDitherNPCOn; // 0x78
		::System::Single VCameraDitherMaxDistance; // 0x7C
		::System::Single VCameraDitherAlphaMin; // 0x80
		::System::Boolean KeepMainCameraRotation; // 0x84
		::System::Single CenterPosX; // 0x88
		::System::Single CenterPosY; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35FB502404EFCE2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_METHOD_3_35FB502404EFCE2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B8DAD87E37E1F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_METHOD_3_2B8DAD87E37E1F9B_OFFSET))(a1, a2);
		}

		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* Method_3_844132D0780C62B7(::System::Boolean a1)
		{
			return ((::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_METHOD_3_844132D0780C62B7_OFFSET))(this, a1);
		}
	};
}
