#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class WaterReflectionFoamShaderParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG_METHOD_2_E0E1BFE4574389C7_OFFSET UNITYSDK_OFFSET(0x171F37B0)
#define RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F8820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelGlobalConfig_TypeDefinitionIndex = 15310;

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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E0E1BFE4574389C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelGlobalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelGlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELGLOBALCONFIG_METHOD_2_E0E1BFE4574389C7_OFFSET))(a1, a2);
		}
	};
}
