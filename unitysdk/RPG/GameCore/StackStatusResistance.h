#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKSTATUSRESISTANCE_METHOD_3_8FB84279E4D0530F_OFFSET UNITYSDK_OFFSET(0x19CA3600)
#define RPG_GAMECORE_STACKSTATUSRESISTANCE_METHOD_3_B59B10AC9E36F352_OFFSET UNITYSDK_OFFSET(0x19CA3680)
#define RPG_GAMECORE_STACKSTATUSRESISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA3650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackStatusResistance_TypeDefinitionIndex = 21443;

	class StackStatusResistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x20
		::RPG::GameCore::DynamicFloat* Resistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSRESISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FB84279E4D0530F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackStatusResistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackStatusResistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSRESISTANCE_METHOD_3_8FB84279E4D0530F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B59B10AC9E36F352(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackStatusResistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackStatusResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSRESISTANCE_METHOD_3_B59B10AC9E36F352_OFFSET))(a1, a2);
		}
	};
}
