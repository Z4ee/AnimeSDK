#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/FiveDimLevelCameraType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimCameraObserveConfig; }
namespace RPG::GameCore { class FiveDimCameraSimpleOverrideFollow; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }

#define RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_METHOD_3_2D514F79D5F42B7D_OFFSET UNITYSDK_OFFSET(0x197290E0)
#define RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_METHOD_3_ED9C06CF4EA81F79_OFFSET UNITYSDK_OFFSET(0x197294E0)
#define RPG_GAMECORE_FIVEDIMBASECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197294A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseCameraConfig_TypeDefinitionIndex = 17719;

	class FiveDimBaseCameraConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::FiveDimLevelCameraType Type; // 0x10
		::RPG::MVector3 LocalPosition; // 0x14
		::RPG::MVector3 LocalRotation; // 0x20
		::System::Boolean UseDefaultLens; // 0x2C
		::RPG::GameCore::FiveDimCameraLensConfig* Lens; // 0x30
		::System::Boolean UseDefaultFollow; // 0x38
		::System::Boolean UseSimpleOverrideFollow; // 0x39
		::RPG::GameCore::FiveDimCameraSimpleOverrideFollow* SimpleOverrideFollow; // 0x40
		::RPG::GameCore::FiveDimCameraFollowConfig* Follow; // 0x48
		::RPG::GameCore::FiveDimCameraFollowConfig* BakedFollow; // 0x50
		::RPG::GameCore::FiveDimCameraFollowClampMask FollowClampMask; // 0x58
		::System::Boolean UseDefaultObserve; // 0x5C
		::System::Boolean UseMinimalObserve; // 0x5D
		::RPG::GameCore::FiveDimCameraObserveConfig* Observe; // 0x60
		::RPG::GameCore::FiveDimCameraObserveConfig* BakedObserve; // 0x68
		::System::Boolean UseDefaultBlend; // 0x70
		::RPG::GameCore::FiveDimVCameraBlendConfig* Blend; // 0x78
		::System::UInt32 BlendPivot; // 0x80
		::System::Boolean UseDefaultDOF; // 0x84
		::RPG::GameCore::FiveDimCameraDOFConfig* DOFConfig; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASECAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D514F79D5F42B7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_METHOD_3_2D514F79D5F42B7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED9C06CF4EA81F79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_METHOD_3_ED9C06CF4EA81F79_OFFSET))(a1, a2);
		}
	};
}
