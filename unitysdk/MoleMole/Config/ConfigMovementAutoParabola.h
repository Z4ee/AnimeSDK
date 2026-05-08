#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1241FEA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1241FE10)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x124216C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12420010)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1241FFA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12421720)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12420090)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12421C50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12421560)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1241F0E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1241F250)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x12421E00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x12421E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementAutoParabola_TypeDefinitionIndex = 39557;

	class ConfigMovementAutoParabola : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::System::Single DefaultRotAngle; // 0x40
		::System::Single ExpectSpeed; // 0x44
		::System::Single ExpectTime; // 0x48
		::System::Single TargetRotLimitAngleRight; // 0x4C
		::UnityEngine::Vector3 DefaultOffset; // 0x50
		::System::Single MinAngle; // 0x5C
		::System::Single Accelerated; // 0x60
		::System::Single MaxAngle; // 0x64
		::System::Single MaxSpeed; // 0x68
		::System::Single TargetRotLimitAngleLeft; // 0x6C
		::System::Int32 ExpectAngle; // 0x70
		::System::Single MinSpeed; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementAutoParabola* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementAutoParabola*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementAutoParabola* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementAutoParabola*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_167BB37617B940E3* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
