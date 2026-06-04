#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TeammateAttackFormationConfig; }

#define RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_METHOD_3_0C5D75FA4882F0CD_OFFSET UNITYSDK_OFFSET(0x19C64150)
#define RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_METHOD_3_74BB182DB55BCA32_OFFSET UNITYSDK_OFFSET(0x19C64230)
#define RPG_GAMECORE_SETTEAMMATEATTACKFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C641D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeammateAttackFormation_TypeDefinitionIndex = 21263;

	class SetTeammateAttackFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomCenterTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* Attacker; // 0x28
		::RPG::GameCore::TargetEvaluator* Defender; // 0x30
		::Il2CppArray<::RPG::GameCore::TeammateAttackFormationConfig*>* OverrideConfig; // 0x38
		::RPG::GameCore::TargetEvaluator* HideEntityTargetType; // 0x40
		::System::Boolean HideBetweenEntity; // 0x48
		::System::Boolean LockFormation; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMMATEATTACKFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C5D75FA4882F0CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeammateAttackFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeammateAttackFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_METHOD_3_0C5D75FA4882F0CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74BB182DB55BCA32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeammateAttackFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeammateAttackFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMMATEATTACKFORMATION_METHOD_3_74BB182DB55BCA32_OFFSET))(a1, a2);
		}
	};
}
