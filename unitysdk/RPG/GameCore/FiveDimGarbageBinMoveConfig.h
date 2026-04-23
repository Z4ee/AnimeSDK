#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGarbageBinOnRollToAnother.h"
#include "unitysdk/RPG/GameCore/FiveDimGarbageBinRollDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_1E2F4DE51CAE63E2_OFFSET UNITYSDK_OFFSET(0x189035F0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_55EF89347D4899DF_OFFSET UNITYSDK_OFFSET(0x189035A0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189035E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinMoveConfig_TypeDefinitionIndex = 15815;

	class FiveDimGarbageBinMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single ColliderSizeXSmall; // 0x4C
		::System::Single ColliderSizeYSmall; // 0x50
		::RPG::MVector3 ColliderCenterSmall; // 0x54
		::RPG::GameCore::FiveDimGarbageBinRollDirection RollDirection; // 0x60
		::RPG::GameCore::FiveDimGarbageBinOnRollToAnother OnRollToAnother; // 0x64
		::System::Boolean OverrideJumpParams; // 0x68
		::System::Single TrampolineJumpHeight; // 0x6C
		::System::Single FallGravity; // 0x70
		::System::Single MaxFallSpeed; // 0x74
		::System::Int32 MaxHitWallCount; // 0x78
		::System::String* FirstStepOnEvent; // 0x80
		::System::String* SecondStepOnEvent; // 0x88
		::System::String* RemovalEvent; // 0x90
		::System::String* HitPlayerEvent; // 0x98
		::System::String* HitWithInvinciblePlayerEvent; // 0xA0
		::System::String* StepOnEffectPath; // 0xA8
		::System::String* HitPlayerEffectPath; // 0xB0
		::System::String* HitWithInvinciblePlayerEffectPath; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55EF89347D4899DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_55EF89347D4899DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E2F4DE51CAE63E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINMOVECONFIG_METHOD_3_1E2F4DE51CAE63E2_OFFSET))(a1, a2);
		}
	};
}
