#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_METHOD_3_57AF3ACA12CCB092_OFFSET UNITYSDK_OFFSET(0x1D112BB0)
#define RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_METHOD_3_69EDDAA07DFE3054_OFFSET UNITYSDK_OFFSET(0x1D112B70)
#define RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D112BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxel2DPlatformConfig_TypeDefinitionIndex = 16582;

	class FourRotateVoxel2DPlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPlatform; // 0x10
		::System::Boolean IsOverride3DPlatform; // 0x11
		::System::String* Platform3DPathRef; // 0x18
		::System::Boolean IsOverridePosition; // 0x20
		::RPG::MVector3 OverridePosition; // 0x24
		::System::Boolean IsOverrideRotation; // 0x30
		::RPG::MVector3 OverrideRotation; // 0x34
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x40
		::System::Boolean IsTriggerEventWhenLast2DPlatformUpgradeFinish; // 0x48
		::RPG::GameCore::LittleGameEvent* OnLast2DPlatformUpgradeFinish; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69EDDAA07DFE3054(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_METHOD_3_69EDDAA07DFE3054_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57AF3ACA12CCB092(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_METHOD_3_57AF3ACA12CCB092_OFFSET))(a1, a2);
		}
	};
}
