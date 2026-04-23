#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSTANCE_METHOD_3_B55F62BFAB8B47DB_OFFSET UNITYSDK_OFFSET(0x18B41810)
#define RPG_GAMECORE_MODIFYSTANCE_METHOD_3_DDF4F8DED306C15E_OFFSET UNITYSDK_OFFSET(0x18B418B0)
#define RPG_GAMECORE_MODIFYSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B41870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyStance_TypeDefinitionIndex = 21518;

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

		static ::System::Void Method_3_B55F62BFAB8B47DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_METHOD_3_B55F62BFAB8B47DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDF4F8DED306C15E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSTANCE_METHOD_3_DDF4F8DED306C15E_OFFSET))(a1, a2);
		}
	};
}
