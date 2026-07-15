#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class WaterReflectionFoamShaderParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG_METHOD_2_661D6E1574E5B2EF_OFFSET UNITYSDK_OFFSET(0x1BE9E810)
#define RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9EB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelGlobalConfig_TypeDefinitionIndex = 16058;

	class FiveDimLevelGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HoyoTagContainer* VisibleRootTag; // 0x10
		::RPG::GameCore::HoyoTagContainer* VisibleOnExitTag; // 0x18
		::RPG::GameCore::HoyoTagContainer* VisibleOnEnterTag; // 0x20
		::RPG::GameCore::HoyoTagContainer* VisibleAlwaysTag; // 0x28
		::System::Single EnterExitDitherDuration; // 0x30
		::RPG::GameCore::HoyoTagContainer* EnableWaterReflectionTag; // 0x38
		::System::String* ContactWaterEffect; // 0x40
		::Il2CppArray<::RPG::GameCore::WaterReflectionFoamShaderParam*>* FoamParams; // 0x48
		::RPG::GameCore::HoyoTagContainer* NoArrowAttachTag; // 0x50
		::RPG::GameCore::HoyoTagContainer* UnloadOnEnterGroupTag; // 0x58
		::RPG::GameCore::HoyoTagContainer* KeepMoveOnHitTag; // 0x60
		::RPG::GameCore::HoyoTagContainer* DestroyOnOtherStandTag; // 0x68
		::RPG::GameCore::HoyoTagContainer* WaterColliderTag; // 0x70
		::RPG::GameCore::HoyoTagContainer* SpikeTag; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_661D6E1574E5B2EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelGlobalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelGlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG_METHOD_2_661D6E1574E5B2EF_OFFSET))(a1, a2);
		}
	};
}
