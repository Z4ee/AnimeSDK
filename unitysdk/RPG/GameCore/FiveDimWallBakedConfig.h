#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG_METHOD_2_6BFD8AB0052E6619_OFFSET UNITYSDK_OFFSET(0x1BEA29E0)
#define RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB8CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWallBakedConfig_TypeDefinitionIndex = 16002;

	class FiveDimWallBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single QueryWallOffset; // 0x10
		::System::Single QueryWallMinHeight; // 0x14
		::System::Single WallSlideSpeed; // 0x18
		::System::Single WallSlideGravity; // 0x1C
		::RPG::MVector3 WallJumpInitVelocity; // 0x20
		::System::Single WallJumpUpwardSpeed; // 0x2C
		::System::Single JumpCutExemptSpeed; // 0x30
		::System::Single JumpCutMinHeight; // 0x34
		::System::Single UpwardJumpCutExemptSpeed; // 0x38
		::System::Single UpwardJumpCutMinHeight; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6BFD8AB0052E6619(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWallBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWallBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG_METHOD_2_6BFD8AB0052E6619_OFFSET))(a1, a2);
		}
	};
}
