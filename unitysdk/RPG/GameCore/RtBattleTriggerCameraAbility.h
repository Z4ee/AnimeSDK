#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_METHOD_3_504DFF4CE4471434_OFFSET UNITYSDK_OFFSET(0x19BDD540)
#define RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_METHOD_3_A1BE10D6A54D9C11_OFFSET UNITYSDK_OFFSET(0x19BDD610)
#define RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDD5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTriggerCameraAbility_TypeDefinitionIndex = 22773;

	class RtBattleTriggerCameraAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AbilityName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_504DFF4CE4471434(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTriggerCameraAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTriggerCameraAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_METHOD_3_504DFF4CE4471434_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1BE10D6A54D9C11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTriggerCameraAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTriggerCameraAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_METHOD_3_A1BE10D6A54D9C11_OFFSET))(a1, a2);
		}
	};
}
