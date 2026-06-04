#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_METHOD_3_158E99EED5EF953D_OFFSET UNITYSDK_OFFSET(0x19DE71A0)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_METHOD_3_D768DADB4CB1E67E_OFFSET UNITYSDK_OFFSET(0x19DE7120)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE7170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindOverrideHitProtectTime_TypeDefinitionIndex = 19501;

	class TimeRewindOverrideHitProtectTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* HitProtectTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D768DADB4CB1E67E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_METHOD_3_D768DADB4CB1E67E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_158E99EED5EF953D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverrideHitProtectTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_METHOD_3_158E99EED5EF953D_OFFSET))(a1, a2);
		}
	};
}
