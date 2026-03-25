#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_METHOD_3_2830705DE36EDE93_OFFSET UNITYSDK_OFFSET(0x176E0CC0)
#define RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_METHOD_3_CDB72EEE20CA3AC7_OFFSET UNITYSDK_OFFSET(0x176E0C40)
#define RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176E0C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetAlwaysAutoBattle_TypeDefinitionIndex = 20666;

	class SetTargetAlwaysAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AutoBattle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDB72EEE20CA3AC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetAlwaysAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetAlwaysAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_METHOD_3_CDB72EEE20CA3AC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2830705DE36EDE93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetAlwaysAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetAlwaysAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_METHOD_3_2830705DE36EDE93_OFFSET))(a1, a2);
		}
	};
}
