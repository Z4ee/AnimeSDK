#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_METHOD_3_11F60760538EEC80_OFFSET UNITYSDK_OFFSET(0x18E43780)
#define RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_METHOD_3_A36810B7F619504F_OFFSET UNITYSDK_OFFSET(0x18E43700)
#define RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E43750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSummonUnitTriggerEnable_TypeDefinitionIndex = 19098;

	class SetSummonUnitTriggerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::Il2CppArray<::System::String*>* TriggerNames; // 0x20
		::System::Boolean Enable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A36810B7F619504F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonUnitTriggerEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonUnitTriggerEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_METHOD_3_A36810B7F619504F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11F60760538EEC80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonUnitTriggerEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonUnitTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_METHOD_3_11F60760538EEC80_OFFSET))(a1, a2);
		}
	};
}
