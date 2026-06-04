#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_METHOD_3_A50D6F4715ACBC4E_OFFSET UNITYSDK_OFFSET(0x19BDBFA0)
#define RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_METHOD_3_DE2048DA5DBD8F84_OFFSET UNITYSDK_OFFSET(0x19BDBED0)
#define RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDBF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSetCameraFocusTarget_TypeDefinitionIndex = 22772;

	class RtBattleSetCameraFocusTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE2048DA5DBD8F84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleSetCameraFocusTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleSetCameraFocusTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_METHOD_3_DE2048DA5DBD8F84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A50D6F4715ACBC4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleSetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleSetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_METHOD_3_A50D6F4715ACBC4E_OFFSET))(a1, a2);
		}
	};
}
