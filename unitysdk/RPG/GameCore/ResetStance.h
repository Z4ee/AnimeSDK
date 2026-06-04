#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETSTANCE_METHOD_3_3676355E2D7504C2_OFFSET UNITYSDK_OFFSET(0x19ACFCD0)
#define RPG_GAMECORE_RESETSTANCE_METHOD_3_91A5C9F302607878_OFFSET UNITYSDK_OFFSET(0x19ACFC30)
#define RPG_GAMECORE_RESETSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACFC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetStance_TypeDefinitionIndex = 21393;

	class ResetStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::RPG::GameCore::DynamicFloat* ConstantValue; // 0x28
		::RPG::GameCore::DynamicFloat* AddValue; // 0x30
		::System::Boolean ForbidWhenEmpty; // 0x38
		::System::Boolean SkipLockTeamStance; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91A5C9F302607878(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETSTANCE_METHOD_3_91A5C9F302607878_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3676355E2D7504C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETSTANCE_METHOD_3_3676355E2D7504C2_OFFSET))(a1, a2);
		}
	};
}
