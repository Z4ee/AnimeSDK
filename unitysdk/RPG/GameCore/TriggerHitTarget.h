#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERHITTARGET_METHOD_3_1A419D080CA4B90F_OFFSET UNITYSDK_OFFSET(0x190C6E20)
#define RPG_GAMECORE_TRIGGERHITTARGET_METHOD_3_905B2FD520DF3D0E_OFFSET UNITYSDK_OFFSET(0x190C6DA0)
#define RPG_GAMECORE_TRIGGERHITTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x190C6DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerHitTarget_TypeDefinitionIndex = 19150;

	class TriggerHitTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x20
		::System::Boolean OnlyHitClientTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_905B2FD520DF3D0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerHitTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerHitTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITTARGET_METHOD_3_905B2FD520DF3D0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A419D080CA4B90F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerHitTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITTARGET_METHOD_3_1A419D080CA4B90F_OFFSET))(a1, a2);
		}
	};
}
