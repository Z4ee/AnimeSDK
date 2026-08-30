#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_METHOD_3_2E47F52435499BB6_OFFSET UNITYSDK_OFFSET(0x1CCD9770)
#define RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_METHOD_3_E6581FF04890F4EC_OFFSET UNITYSDK_OFFSET(0x1CCD96D0)
#define RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD9730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTriggerCharacterCamera_TypeDefinitionIndex = 23821;

	class RtBattleTriggerCharacterCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RtBattleCharacterCameraTag CameraTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6581FF04890F4EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTriggerCharacterCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTriggerCharacterCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_METHOD_3_E6581FF04890F4EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E47F52435499BB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTriggerCharacterCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTriggerCharacterCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_METHOD_3_2E47F52435499BB6_OFFSET))(a1, a2);
		}
	};
}
