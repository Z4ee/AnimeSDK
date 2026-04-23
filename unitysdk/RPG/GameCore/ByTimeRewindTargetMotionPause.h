#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_CCC70C9B8AFDFC1C_OFFSET UNITYSDK_OFFSET(0x18762F80)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_E2434423E662D322_OFFSET UNITYSDK_OFFSET(0x18763050)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18763000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetMotionPause_TypeDefinitionIndex = 19647;

	class ByTimeRewindTargetMotionPause : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CCC70C9B8AFDFC1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_CCC70C9B8AFDFC1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2434423E662D322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_E2434423E662D322_OFFSET))(a1, a2);
		}
	};
}
