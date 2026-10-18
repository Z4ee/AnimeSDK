#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_METHOD_3_A2672517F3A60198_OFFSET UNITYSDK_OFFSET(0x1D692A80)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_METHOD_3_E61C390488456FC1_OFFSET UNITYSDK_OFFSET(0x1D692A40)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D692A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinBakedMoveConfig_TypeDefinitionIndex = 16681;

	class FiveDimGarbageBinBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single FallGravity; // 0x30
		::System::Single MaxFallSpeed; // 0x34
		::System::Single ColliderSizeXSmall; // 0x38
		::System::Single ColliderSizeYSmall; // 0x3C
		::RPG::MVector3 ColliderCenterSmall; // 0x40
		::RPG::GameCore::FiveDimTrampolineConfig* InternalTrampolineConfig; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E61C390488456FC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_METHOD_3_E61C390488456FC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2672517F3A60198(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_METHOD_3_A2672517F3A60198_OFFSET))(a1, a2);
		}
	};
}
