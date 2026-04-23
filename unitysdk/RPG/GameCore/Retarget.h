#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RETARGET_METHOD_3_31A33CD639E3D3F3_OFFSET UNITYSDK_OFFSET(0x18CB8700)
#define RPG_GAMECORE_RETARGET_METHOD_3_4D99723D11592024_OFFSET UNITYSDK_OFFSET(0x18CB84A0)
#define RPG_GAMECORE_RETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB8680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Retarget_TypeDefinitionIndex = 21820;

	class Retarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Boolean ByRandom; // 0x28
		::System::Boolean IncludeLimbo; // 0x29
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x40
		::System::Boolean IgnoreParallelWarning; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D99723D11592024(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Retarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Retarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGET_METHOD_3_4D99723D11592024_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_31A33CD639E3D3F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Retarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Retarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGET_METHOD_3_31A33CD639E3D3F3_OFFSET))(a1, a2);
		}
	};
}
