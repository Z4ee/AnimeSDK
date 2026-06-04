#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
#include "unitysdk/RPG/GameCore/SO_PositionType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_METHOD_4_6781C6220E925787_OFFSET UNITYSDK_OFFSET(0x19BFCDB0)
#define RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_METHOD_4_CE108CCD9C25A940_OFFSET UNITYSDK_OFFSET(0x19BFDFC0)
#define RPG_GAMECORE_SO_KEEPDISTANCEMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFCD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_KeepDistanceMoveTo_TypeDefinitionIndex = 18938;

	class SO_KeepDistanceMoveTo : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::SO_PositionType PositionType; // 0x18
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x1C
		::System::Single StartRunDistance; // 0x20
		::System::Single StartSprintDistance; // 0x24
		::System::Single FreeScaleDistance; // 0x28
		::System::Single ScaleInterval; // 0x2C
		::System::Single TransitionTime; // 0x30
		::System::Single PlayerSpeedRatio; // 0x34
		::System::Single ScaleStep; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_KEEPDISTANCEMOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CE108CCD9C25A940(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_KeepDistanceMoveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_METHOD_4_CE108CCD9C25A940_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6781C6220E925787(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_KeepDistanceMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_KEEPDISTANCEMOVETO_METHOD_4_6781C6220E925787_OFFSET))(a1, a2);
		}
	};
}
