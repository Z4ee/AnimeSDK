#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_METHOD_3_3423A3E4B11011F5_OFFSET UNITYSDK_OFFSET(0x1D37A280)
#define RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_METHOD_3_400DAE5B32B69F6F_OFFSET UNITYSDK_OFFSET(0x1D37A2D0)
#define RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37A2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMonsterSetupTrigger_TypeDefinitionIndex = 22217;

	class AdvNpcMonsterSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TriggerRadius; // 0x20
		::RPG::MVector3 TriggerOffset; // 0x24
		::Il2CppArray<::System::String*>* ButtonsByName; // 0x30
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x38
		::System::Boolean Enable; // 0x40
		::System::Boolean ForceInteractInDanger; // 0x41
		::System::Boolean ConsiderAngleLimit; // 0x42
		::System::Single InteractAngleRange; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3423A3E4B11011F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_METHOD_3_3423A3E4B11011F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_400DAE5B32B69F6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcMonsterSetupTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_METHOD_3_400DAE5B32B69F6F_OFFSET))(a1, a2);
		}
	};
}
