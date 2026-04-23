#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_METHOD_4_2211AD7C90AB7C6C_OFFSET UNITYSDK_OFFSET(0x18DC67F0)
#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_METHOD_4_2D2FDDF86B9B9FAE_OFFSET UNITYSDK_OFFSET(0x18DC66C0)
#define RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC67A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTargetCameraFocusTarget_TypeDefinitionIndex = 23254;

	class RtBattleTargetCameraFocusTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D2FDDF86B9B9FAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_METHOD_4_2D2FDDF86B9B9FAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2211AD7C90AB7C6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETCAMERAFOCUSTARGET_METHOD_4_2211AD7C90AB7C6C_OFFSET))(a1, a2);
		}
	};
}
