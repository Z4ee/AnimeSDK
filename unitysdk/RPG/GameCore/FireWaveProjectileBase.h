#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREWAVEPROJECTILEBASE_METHOD_3_2CFC0BCAEACB4CA6_OFFSET UNITYSDK_OFFSET(0x1E0DF340)
#define RPG_GAMECORE_FIREWAVEPROJECTILEBASE_METHOD_3_B51E21920262DA05_OFFSET UNITYSDK_OFFSET(0x1E0DF510)
#define RPG_GAMECORE_FIREWAVEPROJECTILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DF330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireWaveProjectileBase_TypeDefinitionIndex = 22331;

	class FireWaveProjectileBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Int32 Count; // 0x28
		::System::Single Interval; // 0x2C
		::System::Boolean WaitProjectileFinish; // 0x30
		::RPG::GameCore::DamageByAttackProperty* PerProjectileDamage; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHitClientOnly; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CFC0BCAEACB4CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectileBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectileBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILEBASE_METHOD_3_2CFC0BCAEACB4CA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B51E21920262DA05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILEBASE_METHOD_3_B51E21920262DA05_OFFSET))(a1, a2);
		}
	};
}
