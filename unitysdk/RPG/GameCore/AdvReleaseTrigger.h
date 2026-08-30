#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_B576376E7A6AE2E6_OFFSET UNITYSDK_OFFSET(0x1CB9D850)
#define RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_EFAA8DF0BD89DA24_OFFSET UNITYSDK_OFFSET(0x1CB9D8D0)
#define RPG_GAMECORE_ADVRELEASETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9D8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvReleaseTrigger_TypeDefinitionIndex = 20304;

	class AdvReleaseTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRELEASETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B576376E7A6AE2E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvReleaseTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvReleaseTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_B576376E7A6AE2E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFAA8DF0BD89DA24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvReleaseTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvReleaseTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_EFAA8DF0BD89DA24_OFFSET))(a1, a2);
		}
	};
}
