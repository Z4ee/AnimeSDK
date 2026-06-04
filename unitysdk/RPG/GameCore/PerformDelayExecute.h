#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_5AB35309CAAE71D8_OFFSET UNITYSDK_OFFSET(0x199ED180)
#define RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_8178C658EE754F66_OFFSET UNITYSDK_OFFSET(0x199ED100)
#define RPG_GAMECORE_PERFORMDELAYEXECUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x199ED150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformDelayExecute_TypeDefinitionIndex = 21588;

	class PerformDelayExecute : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PerformTaskList; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::RPG::GameCore::DynamicFloat* Delay; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8178C658EE754F66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformDelayExecute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformDelayExecute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_8178C658EE754F66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5AB35309CAAE71D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformDelayExecute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformDelayExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_5AB35309CAAE71D8_OFFSET))(a1, a2);
		}
	};
}
