#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_8EC2CD4E59D5D571_OFFSET UNITYSDK_OFFSET(0x19432EF0)
#define RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_EFAA8DF0BD89DA24_OFFSET UNITYSDK_OFFSET(0x19433040)
#define RPG_GAMECORE_ADVRELEASETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19432FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvReleaseTrigger_TypeDefinitionIndex = 19400;

	class AdvReleaseTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRELEASETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EC2CD4E59D5D571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvReleaseTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvReleaseTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_8EC2CD4E59D5D571_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFAA8DF0BD89DA24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvReleaseTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvReleaseTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRELEASETRIGGER_METHOD_3_EFAA8DF0BD89DA24_OFFSET))(a1, a2);
		}
	};
}
