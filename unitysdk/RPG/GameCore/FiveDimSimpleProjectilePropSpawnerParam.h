#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSimpleProjectileRandomVelItem; }

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_0C595828D0573988_OFFSET UNITYSDK_OFFSET(0x1BEB2BE0)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_12F89B881EF753C6_OFFSET UNITYSDK_OFFSET(0x1BEACF00)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEACEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectilePropSpawnerParam_TypeDefinitionIndex = 17854;

	class FiveDimSimpleProjectilePropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::RPG::GameCore::FiveDimSimpleProjectileMoveType MoveType; // 0x10
		::RPG::MVector3 InitVelocityLocal; // 0x14
		::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem* RandVelBound; // 0x20
		::System::Boolean UseExtraRandomVelBound; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*>* ExtraVelBoundList; // 0x30
		::System::Single GravityAcc; // 0x38
		::System::Boolean EnableOverrideProjectileLifeTime; // 0x3C
		::System::Single LifeTime; // 0x40
		::System::Boolean OverrideProjectileSpawnerUnique; // 0x44
		::System::Boolean IsUnique; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C595828D0573988(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_0C595828D0573988_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12F89B881EF753C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_METHOD_3_12F89B881EF753C6_OFFSET))(a1, a2);
		}
	};
}
