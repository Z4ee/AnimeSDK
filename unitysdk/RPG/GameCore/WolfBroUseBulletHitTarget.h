#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_METHOD_3_4B9E14B987C3949B_OFFSET UNITYSDK_OFFSET(0x1D1C4220)
#define RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_METHOD_3_6F8A5DCCD8F3DC3C_OFFSET UNITYSDK_OFFSET(0x1D1C42E0)
#define RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C4290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroUseBulletHitTarget_TypeDefinitionIndex = 19393;

	class WolfBroUseBulletHitTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean AttackDetectCollision; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B9E14B987C3949B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroUseBulletHitTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroUseBulletHitTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_METHOD_3_4B9E14B987C3949B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F8A5DCCD8F3DC3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroUseBulletHitTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroUseBulletHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_METHOD_3_6F8A5DCCD8F3DC3C_OFFSET))(a1, a2);
		}
	};
}
