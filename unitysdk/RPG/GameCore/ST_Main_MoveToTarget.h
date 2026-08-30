#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_MoveTargetType.h"
#include "unitysdk/RPG/GameCore/ST_ParamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_MOVETOTARGET_METHOD_4_5CAE1946446EE189_OFFSET UNITYSDK_OFFSET(0x1D4CCA10)
#define RPG_GAMECORE_ST_MAIN_MOVETOTARGET_METHOD_4_D381064D3211FF74_OFFSET UNITYSDK_OFFSET(0x1D4CC9B0)
#define RPG_GAMECORE_ST_MAIN_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CC9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_MoveToTarget_TypeDefinitionIndex = 19871;

	class ST_Main_MoveToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_MoveTargetType TargetType; // 0x18
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x1C
		::System::Boolean StanceUseVariable; // 0x20
		::System::String* StanceVariableName; // 0x28
		::RPG::GameCore::ST_ParamType ToleranceType; // 0x30
		::System::Single Tolerance; // 0x34
		::System::Single AngleTolerance; // 0x38
		::System::Boolean FourFeetMode; // 0x3C
		::System::Single SpeedScale; // 0x40
		::System::Boolean ForbidPreSteerWhenPathing; // 0x44
		::System::Boolean FailOnBlock; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D381064D3211FF74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_MoveToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_MoveToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOTARGET_METHOD_4_D381064D3211FF74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5CAE1946446EE189(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOTARGET_METHOD_4_5CAE1946446EE189_OFFSET))(a1, a2);
		}
	};
}
