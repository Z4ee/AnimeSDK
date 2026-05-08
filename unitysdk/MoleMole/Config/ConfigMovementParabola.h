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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_CLONE_OFFSET UNITYSDK_OFFSET(0x183C45D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x183C4540)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x183C5CC0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x183C4740)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x183C46D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x183C5D20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x183C47C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x183C6210)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x183C5B60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x183C3450)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x183C3790)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x183C3430)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x183C63C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementParabola_TypeDefinitionIndex = 53718;

	class ConfigMovementParabola : public ::MoleMole::Config::ConfigMovement
	{
	public:
		// static const ::System::String* CACHED_G; // 0x0
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::System::Single t1; // 0x40
		::System::Single s2; // 0x44
		::System::Single t2; // 0x48
		::System::Single DefaultRotAngle; // 0x4C
		::UnityEngine::Vector3 DefaultOffset; // 0x50
		::System::Single h1; // 0x5C
		::System::Single s1; // 0x60
		::System::Single TargetRotLimitAngleRight; // 0x64
		::System::Single TargetRotLimitAngleLeft; // 0x68
		::System::Single InitSpeed; // 0x6C
		::System::Single h2; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementParabola* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementParabola*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementParabola* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementParabola*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_167BB37617B940E3* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
