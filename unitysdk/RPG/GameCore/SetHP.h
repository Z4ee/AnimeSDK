#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETHP_METHOD_3_A4394C96F9B7887D_OFFSET UNITYSDK_OFFSET(0x1C5FC120)
#define RPG_GAMECORE_SETHP_METHOD_3_C688260196DD479C_OFFSET UNITYSDK_OFFSET(0x1C5FC000)
#define RPG_GAMECORE_SETHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FC0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHP_TypeDefinitionIndex = 21809;

	class SetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::RPG::GameCore::DynamicFloat* ModifyRatio; // 0x28
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30
		::System::Boolean ClearNegativeHP; // 0x38
		::System::Boolean ShowText; // 0x39
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x40
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C688260196DD479C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHP_METHOD_3_C688260196DD479C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4394C96F9B7887D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHP_METHOD_3_A4394C96F9B7887D_OFFSET))(a1, a2);
		}
	};
}
