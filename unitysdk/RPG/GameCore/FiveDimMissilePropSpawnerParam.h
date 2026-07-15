#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMISSILEPROPSPAWNERPARAM_METHOD_3_95BDCC77143B5528_OFFSET UNITYSDK_OFFSET(0x1BEA2210)
#define RPG_GAMECORE_FIVEDIMMISSILEPROPSPAWNERPARAM_METHOD_3_CC0A394F38CF710D_OFFSET UNITYSDK_OFFSET(0x1BEA2250)
#define RPG_GAMECORE_FIVEDIMMISSILEPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA2240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissilePropSpawnerParam_TypeDefinitionIndex = 17847;

	class FiveDimMissilePropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean InitMoveRight; // 0x10
		::System::Boolean EnableOverrideMoveSpeed; // 0x11
		::System::Single MoveSpeedOverride; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95BDCC77143B5528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissilePropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissilePropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEPROPSPAWNERPARAM_METHOD_3_95BDCC77143B5528_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC0A394F38CF710D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEPROPSPAWNERPARAM_METHOD_3_CC0A394F38CF710D_OFFSET))(a1, a2);
		}
	};
}
