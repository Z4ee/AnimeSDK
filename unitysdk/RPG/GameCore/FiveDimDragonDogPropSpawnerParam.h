#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_3B98581069BE3673_OFFSET UNITYSDK_OFFSET(0x171F0560)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_F1A23E3A381554E0_OFFSET UNITYSDK_OFFSET(0x171F0520)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x171F0550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDragonDogPropSpawnerParam_TypeDefinitionIndex = 17053;

	class FiveDimDragonDogPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean EnableOverrideMoveSpeed; // 0x10
		::System::Single MoveSpeedOverride; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1A23E3A381554E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_F1A23E3A381554E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B98581069BE3673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGPROPSPAWNERPARAM_METHOD_3_3B98581069BE3673_OFFSET))(a1, a2);
		}
	};
}
