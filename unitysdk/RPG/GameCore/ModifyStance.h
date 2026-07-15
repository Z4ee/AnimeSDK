#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSTANCE_METHOD_3_1E2805DBCE9EEF50_OFFSET UNITYSDK_OFFSET(0x1B1AE510)
#define RPG_GAMECORE_MODIFYSTANCE_METHOD_3_DDF4F8DED306C15E_OFFSET UNITYSDK_OFFSET(0x1B1AE560)
#define RPG_GAMECORE_MODIFYSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AE550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyStance_TypeDefinitionIndex = 21813;

	class ModifyStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean IsReset; // 0x22
		::System::Boolean ForbidWhenEmpty; // 0x23
		::System::Boolean SkipLockTeamStance; // 0x24
		::RPG::GameCore::DynamicFloat* StanceCountConst; // 0x28
		::RPG::GameCore::DynamicFloat* StanceCountAdd; // 0x30
		::RPG::GameCore::DynamicFloat* StanceValueConst; // 0x38
		::RPG::GameCore::DynamicFloat* StanceValueAdd; // 0x40
		::RPG::GameCore::DynamicFloat* StanceRatioConst; // 0x48
		::RPG::GameCore::DynamicFloat* StanceRatioAdd; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E2805DBCE9EEF50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_METHOD_3_1E2805DBCE9EEF50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDF4F8DED306C15E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_METHOD_3_DDF4F8DED306C15E_OFFSET))(a1, a2);
		}
	};
}
